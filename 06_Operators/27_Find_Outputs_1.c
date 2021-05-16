// Find  outputs 
#include <stdio.h>
main()
{
	int  a , b , c = 100;
	printf("Enter 3  integer inputs \n");
	scanf("%d %d %*d" , &a , &b , &c); //  10   20    30
	printf("a : %d \n" , a); // 10
	printf("b : %d \n" , b); // 20 
	printf("c : %d \n" , c); // 100
}





/*
1) If inputs are 10,20,30 
    scanf  does not read 30  due to %*d

2) Therefore  a is 10, b is 20 and c is unchanged
*/

