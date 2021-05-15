
// Difference  between  +  and +=
#include <stdio.h>
main()
{
	int  a = 10 , b = 20;
	printf("%d \n" , a + b);  // 30
	printf(" a : %d \n" , a); //   10
	printf(" b : %d \n" , b); // 20
	printf("%d \n"  , a += b); // 30
	printf(" a : %d \n" , a);  //  30
	printf(" b : %d \n" , b); // 20
}


/*
        a  +   b                                               a   +=   b
--------------------------------------------------------------------------------------------------------------------------
1) Result  of  a+b is  ignored  becoz      1)   Result  is  assigned  to  variable  'a'
    there is  no  LHS  variable

2) Variable  'a'  remains  unchanged     2) variable  'a'  is  modified 
*/

