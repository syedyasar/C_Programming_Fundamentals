// Find  outputs
#include <stdio.h>
main()
{
		int  a , b , c;
		printf("Enter any  3  numbers \n");
		int  x = scanf("%d %*d %d" , &a , &b , &c); // scanf  reads  only 2  inputs  and  returns  2
		printf("x : %d \n"  , x ); // 2
		printf("a : %d \n"  , a ); // 1st  input
		printf("b : %d \n"  , b ); // 3rd input
		printf("c : %d \n"  , c ); // Garbage
}


/*
1) %*d   means  input  is  not   read

2) Inputs :  10    20     30
    scanf   reads   10   to  variable  'a' , 20  is  not  read  due  to   %*d  and  30  is  read  to  variable  'b'

3) 'c'  is  unchanged

4) scanf  returns  2  becoz  2  inputs  are  read

5) So x  = 2
*/