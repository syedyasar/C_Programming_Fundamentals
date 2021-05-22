// |  operator  demo  program
#include <stdio.h>
main()
{
	int a = 25 , b = 46;
	printf("25  |  46  :   %d\n" , a | b); // 63
	printf("25  ||  46  :  %d\n" , a || b); //  true  ---> non-zero
}

/*
                 32     16    8    4    2    1    ----> Weights
a = 25  =    0       1     1    0    0     1
b = 46  =    1       0     1    1    1     0
---------------------------------------------------------
a | b =      1       1     1     1   1     1  =   63   ----> Each  bit  of  the  first  number  is  added  with  corresponding  bit
                                                                            of  the  2nd  number. This  process  is  called   bitwise   addition

a || b  = 25  ||  46   =  true

	                |																			||
------------------------------------------------------------------------------------------------------------------------------------------------------------
1)  It  is  bitwise  or  operator			            	1)  It  is  logical  or  operator

2)  It  does  bitwise  addition					        	2)  It  does  logical  addition

3)  Operands  are  bits(  0  and  1)					   3)  operands  are  booleans(true  and  false)
       
4)    0  |  0  =  0									               4)    true  ||  true  =  true
       0  |  1=    1									                          true  ||  false  =  true
       1  |  0  =  1									                          false  ||  true  =true
       1  |  1  =  1									                          false  ||  false  =  false
*/
