//How  to  read  different  types of inputs ?
#include <stdio.h>
main()
{
	int   a;
	float   b;
	char   ch;
	printf("Enter integer input , float input  and char  input \n ");
	scanf("%d%f%c" , &a , &b , &ch); 
//	scanf("%d%f          %c" , &a , &b , &ch); 
	printf("a : %d \n" , a);
	printf("b : %f \n" , b);
	printf("ch : %c \n" , ch);
}



/*
1) scanf("%d%f%c" , &a , &b , &ch); --->  scanf  does not read character  input  becoz space is missing before %c

2)   scanf("%d%f    %c" , &a , &b , &ch); --->  scanf  reads character  input  becoz  there  is  space  before %c
*/
