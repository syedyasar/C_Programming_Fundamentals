// Find  output
#include <stdio.h>
main()
{
	int  a = 10 , b = 20 , c = 15;
	printf("%d   %d   %d  \n"  , a , b , c); //  10   20   15
	printf("%d   %d   \n" , a  , b , c);  // Value  of  'c'  is  not  printed  becoz  3rd  %d  is  missing  --->  10    20
	printf("%d   %d   %d \n" , a , b); // 10   20    garbage value
	printf("%d \n"); //  garbage value 
}



/*
1) Excess  variables are  not  printed

2) Garbage values are printed when there are excess formats
*/

