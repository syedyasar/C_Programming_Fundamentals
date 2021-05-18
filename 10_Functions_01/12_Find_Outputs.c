// Find output
#include <stdio.h>

void  f1(int);  // Prototype  

main()
{
       	int   x = 10;
		printf("%d\n" , x); // 10
		f1(x);
        printf("%d\n" , x); // 10
}

void  f1(int  x)  //  x  is  10
{
		x = x + 5;  // 15
		printf("%d \n" , x);   // 15
}


/*
1) When  function  is  called,    value  of  actual parameter  is  copied  to  formal parameter.

2) But  changes  made  to  formal parameter  are  not  reflected  to  actual parameter.

3) Program   execution  remains  same  irrespective  of  actual parameter  and  formal parameter   have  same 
    or    different  names

4) Actual parameter  and  formal parameter  may  have  same  name  but  they  are  2  different  variables
*/
