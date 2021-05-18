// Find outputs
#include <stdio.h>
void  f1(int,int,int);

main()
{
	int  a = 3 , b = 4 , c = 5;
	f1(25 , a , a + b * c);
}

void  f1(int  x , int   y , int  z)
{
	printf("x : %d \n" , x);  // 25
	printf("y : %d \n" , y);  // 3
	printf("z : %d \n" , z);  // 23
}


/*

1) Actual  parameter   can  be  value, variable  or  expression  but   formal  parameter  must  be  variable     only

2) Actual parameter is  evaluated and result  is  copied  to  formal parameter
*/


