
// Find  outputs
#include <stdio.h>
main()
{
	int  a , b , c;
	printf("Enter 3  integer inputs \n");
	scanf("%*d %d %d" , &a ,  &b , &c); // 10  20   30
	printf("a : %d \n" , a); // 20
	printf("b : %d \n" , b); // 30
	printf("c : %d \n" , c); // garbage value
}

/*
1) If inputs are 10,20,30 
    scanf  does not  read 10 due %*d

2) Therefore  a is 20, b is 30 and c is unchanged
*/

