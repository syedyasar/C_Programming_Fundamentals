// Hexa  Decimal  int  demo  program
#include <stdio.h>
main()
{
		int  a  = 0XA7B9; //  It is  hexa decimal number due to 0X
		printf("a :  %X \n" , a); //  A7B9
		printf("a :  %x \n" , a); //  a7b9
		printf("a :  %d \n" , a); // hexa decimal number is converted to decimal  number  ----> 42937
		printf("a :  %o \n" , a);  // hexa decimal number is converted to octal  number  ---->  123671
}




/*
1)  How  to  convert  hexa  decimal  to  decimal  ?
     	16^3      256     16     1  ---> Weights
       A           7        B      9
      Decimal  Eqv ----> 10  16 ^ 3 + 7  256 + 11  16 + 9  1 = 42937

2) How  to  convert  hexa  decimal  to  octal ?

 a)    8 4 2 1    8 4 2 1    8 4 2 1    8 4 2 1  ----> Weights
        1 0 1 0    0 1 1 1    1 0 1 1    1 0 0 1    ---> Binary
	                                                      
b)    4   2  1     4  2   1     4   2  1     4   2   1     4 2   1    4 2 1 ---> weights
	    0  0  1      0  1   0     0   1  1     1   1   0     1 1  1     0 0 1
             1             2              3               6              7           1	---> octal 
*/	



