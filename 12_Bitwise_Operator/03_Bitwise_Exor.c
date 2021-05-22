//  Ex-or    operator (^) demo  program
#include <stdio.h>
main()
{
	int a = 25 , b = 46;
	printf("25 ^ 46 :  %d \n" , a ^ b); // 55
}

/*
^  (Bitwise  Exor)
------------------------------
1)  ^  operator  does  odd  operation.

2)  Result  is  1  when  there  are  odd  number  of  1's.

3)  Result  is  0    when  there  are  even  number  of    1's

4)           0  ^  0  =  0
              0  ^  1  =  1
              1  ^  0  =  1
              1  ^  1  =  0
              1  ^  0  ^  1  =  0
              1  ^  1  ^  1  =    1
              1  ^  1  ^  0    ^  1  =  1
              1  ^  1  ^  1    ^  1  =  0

                                         32    16     8     4      2      1    --->  weights
Eg  :      a  =  25      =         0      1      1     0      0      1
             b  =  46      =         1      0      1     1      1      0
	---------------------------------------------------------------------------------------------
              a  ^    b     =         1      1      0     1       1     1  =  55

5) Each  bit  of  the  first  number  is  Exored  with  corresponding  bit  of  the  2nd  number.
    This  process    is  known  as  Bitwise  Exor
*/