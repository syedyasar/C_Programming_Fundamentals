// Find output
#include<stdio.h>
main()
{
	int  i = 75;
	printf("Enter any number : ");
	if(scanf("%*d" , &i))   
		printf("Hyd\n");
	else
		printf("Sec :  %d\n" , i); // Sec :  75
}

/*
1) Let  input  be  25, scanf  reads  nothing  and  returns   0

2) if becomes if(0) ---> false
*/

