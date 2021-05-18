// Find  1.1 + 2.2 + 3.3 + ....n terms
#include<stdio.h>
int main()
{
	int  i , n;
	float  sum = 0;
	printf("How  many   terms  ?   :  ");
	scanf("%d" , &n); // 5
	for(i = 1 ; i <= n ; i++)  		
				sum  +=   1.1 * i; 
	printf("Sum :  %g \n" , sum); 
}




/*
1)  i is iteration number

2)  1.1 * i    is   each term of the series

3) Do Initialization(sum=0) before loop

4) Do computation inside the loop

5) Display results outside the loop
*/
