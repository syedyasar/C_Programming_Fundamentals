//  <<   operator  demo  program
#include <stdio.h>
main()
{
		printf("25 <<  3  :   %d  \n" , 25 << 3); // 25 * 2 * 2 * 2 = 200
		printf("10 <<  6  :   %d  \n" , 10 << 6); // 10 * 2 ^ 6 = 640
		printf("0XA7B9  << 4   :   %X \n" , 0XA7B9 << 4); // A7B90
		printf("06247 << 3    :   %o \n" , 06247  <<   3); // 62470
}

/*
<<  operator  (Bitwise  shift  left)
-------------------------------------------------------
1)    a = 25;
       a = a << 3;    ---->  shift  left  3  times
                              128      64      32      16        8      4        2      1    --->weights
 	                            0         0        0        1         1      0        0      1      =      25
		                        0         0        1        1         0      0        1      0      =     50   =  25  * 2
		                        0         1        1        0         0      1         0     0      =     100 =  50  *  2
                                1         1        0        0         1      0         0     0      =     200  =  100  *  2

2)  <<  operator  does  shift  left  operation.

3) Each  bit  of  the  number  is  shifted  left.

4) First  bit  goes  to  2nd  position,
    2nd  bit  goes  to  3rd  position,
	 .......
	 left  most  bit  is  removed  and 
	 fill  0  on  the  right.

5) Shift  left  is  nothing  but  multiplication  with  2

6) a = a << 3  =  a * 2 * 2 * 2 = 25  * 8 = 200

7) int  a = 0XA7B9;
     a << 4;   ---> Shift  left   4   times
                8  4  2  1       8  4  2  1       8   4   2    1        8  4  2  1         8  4  2  1   ---> Weights
             	0  0  0  0       1  0  1  0       0   1   1    1        1  0  1  1         1  0  0  1  =   A7B9
                1  0  1  0       0  1  1  1       1   0   1    1        1  0  0  1         0  0  0  0  =   A7B90

8)  int  a  =  06247;
     a  <<   3  ---->   shift  left  3   times 
        4  2  1    4  2  1      4  2  1      4   2    1      4  2  1
        0  0  0    1  1  0      0  1  0      1   0    0      1  1  1   =   6247
        1  1  0    0  1  0      1  0  0      1   1    1      0  0   0  =  62470


*/     