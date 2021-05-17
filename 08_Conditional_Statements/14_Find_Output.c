// Find  output
#include<stdio.h>
#define FALSE  -1
#define NUL  0
#define TRUE  1
main()
{
	if(NUL)  //  if (0)  ---> false
		printf("NUL\n");
	else 
	if(FALSE) // if (-1) ---> true
		printf("TRUE\n");
	else
		printf("FALSE\n");
}