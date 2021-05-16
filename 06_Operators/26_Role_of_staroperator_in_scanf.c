
//  What  is  role  of  *  operator  in  scanf  function ?
#include <stdio.h>
main()
{
	int  a , b , c;
	printf("Enter 3  integer inputs \n");
	scanf("%d %*d %d" , &a , &b , &c); //  10   10    10
	printf("a : %d \n" , a);
	printf("b : %d \n" , b);
	printf("c : %d \n" , c);
}



/*
1) %*d  means  input is not read

2) If inputs are 10,20,30
    scanf  does not read 20 due to %*d

3) Therefore  a is 10, b is 30 and c is unchanged
*/
