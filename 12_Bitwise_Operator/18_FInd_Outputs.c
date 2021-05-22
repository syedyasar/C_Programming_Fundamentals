// Find output
#include<stdio.h>
main()
{
	int i;
	printf("Enter any number : ");
	if(scanf("%d" , &i))   // 0
		printf("Hyd\n");
	else
		printf("Sec\n");
}


/*
1) scanf   reads  single  input  and  returns

2) if  becomes  if(1)  --> true

3) Let  input  be  0 , scanf  reads  0  to  variable  'i'  and  returns   1
*/

