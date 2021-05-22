// &  operator  demo  program
#include <stdio.h>
main()
{
	int a = 25 , b = 46;
	printf("25  &  46  :   %d\n" , a & b); // 8
	printf("25  &&  46  :  %d\n" , a && b); //  true  ---> non-zero
}

/*
                 32     16    8    4    2    1    ----> Weights
a = 25  =        0       1     1    0    0     1
b = 46  =        1       0     1    1    1      0
---------------------------------------------------------
a & b =          0        0    1    0     0      0  =   8   ----> Each  bit  of  the  first  number  is  multiplied  with  corresponding  bit
                                                                            of  the  2nd  number. This  process  is  called   bitwise  multiplication

a  && b  = 25  &&  46   =  true
*/
