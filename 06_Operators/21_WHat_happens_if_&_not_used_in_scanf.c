//  What  happens  when   &  is  not  used  in  scanf  ?
#include <stdio.h>
main()
{
	int  x; 
	printf("Enter an  integer input : ");
	scanf("%d"  , x);
	printf("x :   %d \n " , x); // skipped 
	printf("Hello\n"); // skipped 
}


/*
There  are  2  problems  when  &  is  missing  in  scanf 
1)  scanf  does  not  read  input
2) Rest of the program is  skipped 
*/


