
// Find  outputs
#include <stdio.h>
main()
{
	int   a , b , c = 300;
	printf("Enter 3  integer inputs \n");
	scanf("%*d %d %*d" , &a , &b ,  &c);  // 10   20   30
	printf("a : %d \n" , a); // 20
	printf("b : %d \n" , b); // garbage value
	printf("c : %d \n" , c); //  300
}


/*
1) If inputs are 10,20,30 
    scanf  does not  read 10 and 30 due to %*d

2) Therefore  a is 20, b is  unhchanged(garbage value) and c is also unchanged (300)
*/

