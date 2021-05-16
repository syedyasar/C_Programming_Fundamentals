
//  Difference  between   =   operator  and scanf  function
#include <stdio.h>
main()
{
	int  x = 25;
	printf("x : %d \n" , x);  // 25
	printf("Enter an integer input : ");
	scanf("%d" , &x); //  35
	printf("x : %d \n" , x); // 35
}



/*
What is the difference  between  =   and  scanf ?

1)  x  =   25;   ----> Value 25  is assigned  to  variable  'x'

2) scanf("%d" , &x);  ---> Reads  input  to variable  'x'
*/

