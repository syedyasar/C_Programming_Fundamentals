// Find  outputs
#include<stdio.h>
#include<math.h>
main()
{
		int  a = 4 ;
		int  b = pow(a++ , ++a);  
		printf(" a : %d \n" , a); //  6
		printf(" b : %d \n" , b);  //  5 ^ 5
}

