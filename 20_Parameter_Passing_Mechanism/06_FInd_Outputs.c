//  Find  outputs
#include  <stdio.h>
int*    f1(int*  p)  //  p  points  to  main  function  variable  'a'
{
	static  int   x = 35; // It  is  initialized  only  for  1st   function  call  but  not  for  subsequent  calls
	printf("%d\n" , *p); // *p   is  main  function  variable  'a'  
	printf("%d\n" , x); 
	(*p)++;  // main  function  variable  'a'  is  incremented  
	x++;  //  x  is   38
	return  &x; //  It  is   returned  to  function  call
}
main()
{
	int  a = 25;
	int*    m = f1(&a);  // 'm'  points  to  f1   function  variable  'x'
	printf("%d\n" , a);  
	printf("%d\n" , *m); // *m   is  f1  function  variable  'x'   
	a++;  
	(*m)++;   // f1  function  variable  'x'  is  incremneted
	m = f1(&a);
	printf("%d\n" , a);  
	printf("%d\n" , *m);
}


/*

O/P:
=====

25
35
26
36
27
37
28
38

*/
