//  >>   operator  demo  program
#include <stdio.h>
main()
{
		printf("25 >>  3  :   %d  \n" , 25 >> 3); //  25 / 8 = 3
		printf("200 >>  6  :   %d  \n" , 200 >> 6);  //  200 /  2 ^ 6 = 200 / 64 = 3
		printf("0XA7B9  >> 4   :   %X \n" , 0XA7B9 >> 4); // 0A7B
		printf("06247  >> 3   :   %o \n" , 06247 >> 3);  // 0624
}

/*
>>  operator  (Bitwise  Shift  right)
----------------------------------------------------------
1) >>  operator  does  shift  right  operation.

2) Each  bit  of  the  number  is  shifted  right.

3) Right    most  bit   is  removed  and   fill  0  on  the  left.

4) Shift  right  is  nothing  but  division  by  2

5)  int  a = 25;
     a >> 3   ---> shift   right  3   times
	         16       8        4        2        1
	          1        1        0        0        1      =    25
	          0        1        1        0        0      =   12  =  25  /  2
	          0        0        1        1        0       =   6  =  12 / 2
	          0        0        0        1        1       =   3  =  6  / 2

6) a >> 3  = a  /  2  ^ 3  =   25 / 8 =  3

7)  a =  0XA7B9
     a >>  4   ---->  shift  right   4  times
     
	  8  4   2   1        8   4   2   1       8  4  2   1      8  4   2  1   ----> Weights
	  1  0   1   0        0   1   1   1       1  0  1   1      1  0   0  1     ---->  A7B9
      0  0   0   0        1   0   1   0       0  1  1   1      1  0   1  1     ---> 0A7B

6) int  a = 06247;
    a >> 3   ---> shift  right  3   times
              4  2  1         4  2   1          4  2  1        4  2  1   ---> Weights 
              1  1  0         0  1    0         1  0  0         1  1  1   ---> 6247
              0  0  0         1  1    0         0  1  0         1  0  0   ---->  0624
*/