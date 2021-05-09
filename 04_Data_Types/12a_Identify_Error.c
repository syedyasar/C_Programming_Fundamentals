// Identify error
#include <stdio.h>
main()
{
		//int  a  = 0XBEER; // Error  becoz 'R'  is  not allowed
		int  b  =  0XBEEF; // valid hex dec number
		printf("%X\n" , b); // BEEF
		printf("%x\n" , b);  //  beef
 		printf("%d\n" , b); // hex dec number is converted to decimal number
 		printf("%o\n" , b); // hex dec number is converted to octal number
		//int  c  =  0XA7GB9;  //  Error  becoz 'G' is not allowed
		//int  d =  A7B9;  //  Error  becoz  0X is missing
		int  e = 0Xa7b9;   // Valid 
		printf("%X\n" , e);  //  A7B9
		int  f = 0xA7B9;  //   valid
		printf("%x\n" , f); // a7b9
}


