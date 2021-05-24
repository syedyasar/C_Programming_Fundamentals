// Find outputs
#include <stdio.h>
void   f1(); // Global  prototype
main()
{
	int   i;
	for(i = 1 ; i <= 3 ; i++) 
			f1();
}  // variable 'a'  is  lost
void f1()
{
	static  int   a ; // value  of  'a'  is   0
	a = 10;
	printf("%d\n" , a); 
	a++;  
} // variable  'a'  is  not  lost



/*
What  is   the  difference  between   
1) static  int   a  = 10   ---> 10  is  the  initial  value
                and
2) static  int   a;  ----> 0  is  the  intiial  value
    a = 10;  ---> 10  is  modified  value
*/