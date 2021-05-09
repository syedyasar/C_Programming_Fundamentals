// Find  outputs
#include <stdio.h>
main()
{
		int   x = 25;
		printf("%d \n" , x); //  value of variable  'x'  ----> 25
		printf("%u  \n" , &x); // address  of  variable  'x'  ---> may be 1000
		printf("%d \n" , sizeof(x)); // size of the variable  is  4B
}

// Address of the variable can be determined by using & operator
