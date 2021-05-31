//  Return  by  value   function 
#include  <stdio.h>
int    f1()  // It   is   return  by   value  function
{
	int   x = 25;
	return  x;  //  value  of  'x'  is   returned
} 
main()
{
	int    p  =  f1();
	printf("%d\n" , p);  // 25
	//printf("%d\n" , x);   //  Error   becoz  main  can  not  use   f1   function  variable  'x'
}


/*
Return  By  Value
-----------------------------
1) f1  function returns value of  variable  'x' i.e. 25

2) Hence f1 is  Return by value  function 

3) main function can access value of variable 'x'  but not variable 'x'
*/