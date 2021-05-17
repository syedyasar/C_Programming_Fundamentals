// Find output
#include<stdio.h>
#include<limits.h>
main()
{
		int   i = INT_MAX;
		i++; // max value + 1 = min
		printf("%d \n" , i); //   minimum value of  integer  ---> -2 ^ 31
		i--; // min value -1 = max value 
		printf("%d \n" , i);  //   maximum  value of  integer  ---> 2 ^ 31 - 1
}