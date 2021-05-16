// Find  outputs
#include <stdio.h>
main()
{
	int  x = 25;
	printf("x : %i \n" , x); //   value of  variable  'x'  ---> 25
	printf("&x :  %u \n" , &x);   //  &x :  address  of  variable  'x'  --->  may  be  1000
}



/*
1) %u  is  used  for  address   becoz  addresses  are always  positive  and  
    negative  addresses are not supported  by the computer

2) int ---->  %d or %i
    float  ---> %f  or  %g
	char  ---> %c
	long  ---> %ld
	double ---> %lf
	long long ----> %lld
	Address   --->  %u
*/
