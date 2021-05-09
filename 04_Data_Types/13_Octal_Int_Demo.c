// octal  int  demo  program
#include <stdio.h>
main()
{
		int  a  = 06247; // octal number  due to 0
		printf("a :  %o \n" , a); // 6247
    	printf("a :  %d \n" , a);  // octal number is converted to decimal number
		printf("a :  %x \n" , a); // octal number is converted to hexa decimal number ---> ca7
		printf("a :  %X \n" , a); // CA7
}


/*
      512  64    8    1  ---> Weights
1)     6     2     4    7
        Decimal eqv = 6  512 + 2*64 + 4*8 + 7  1 = some thing

2)  4  2  1     4   2   1     4  2   1     4   2   1   ---> Weights
     1  1  0     0   1   0     1  0    0    1   1    1   ---> Binary number
	   

	 8 4 2 1    8 4 2 1   8 4 2 1  ---> Weights
	 1 1 0  0   1 0 1 0   0 1 1 1  =  CA7
*/
