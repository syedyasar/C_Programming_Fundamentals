// Decimal  int  demo  program
#include <stdio.h>
main()
{
		int  a  = 42937; //  decimal number 
		printf("a :  %d \n" , a); // 42937
		printf("a :  %o \n" , a); // decimal number is converted to  octal number ---> 123671
		printf("a :  %X \n" , a); // decimal number is converted to hexa decimal  number ---> A7B9
		printf("a :  %x \n" , a); // a7b9
}

/*
1) Decimal   to  octal  conversion
    ---------------------------------------------------
	                            Quotient    Reminder
	        42937     -    5367   -      1
			5367       -    670     -      7
			670        -     83       -      6
			83          -     10       -      3
			10          -      1        -       2
			1            -      0        -        1

2) Decimal  to hexa decimal conversion
    --------------------------------------------------------------
	                                Quotient    Reminder
	          42937    -      2683    -         9
			  2683      -      167      -         11   ---> B
			  167        -      10        -          7
			  10          -       0         -          10    ----> A
*/
