// Find  outputs
#include <stdio.h>
main()
{
	int  a = 06247 , b = 05310;
	printf("a & b :  %o \n" , a & b);  // 4200
	printf("a |  b  : %o \n" , a | b); // 7357
	printf("a ^ b :   %o \n" , a ^ b);  // 3157
}

/*
                                4  2  1          4  2  1         4  2  1          4  2  1    --->  weights
    a  =  06247      =          1  1  0          0  1  0         1  0  0          1  1  1
    b  =  05310      =          1  0  1          0  1  1         0  0  1          0  0  0
-----------------------------------------------------------------------------------------------------------------
    a  &  b            =        1  0  0          0  1  0          0 0   0         0  0  0   =  4200
    a  |  b	           =        1  1  1          0  1  1         1  0   1        1  1   1   =   7357
	a  ^  b             =       0  1   1         0  0  1         1  0   1        1  1   1    =    3157
*/
