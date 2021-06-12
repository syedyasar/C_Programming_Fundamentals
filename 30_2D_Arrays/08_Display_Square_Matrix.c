//  Read and display a  square  matrix
#include <stdio.h>
void  display(int  n , int  a[][n])
{
	int i , j;
	for(i = 0 ; i <= n - 1 ; i++)  // controls  rows  i.e.  n  rows
	{
		for(j = 0 ; j <= n - 1 ; j++) // controls  elements  of  each  row  i.e.  n  elements
				printf("%d\t" , a[i][j]);
		printf("\n"); // Moves  to  next  line
	}
}


main()
{
	int i , j , n;
	printf("Enter  size of  square matrix  :  ");
	scanf("%d" , &n);
	int  a[n][n]; // matrix  is  created
	printf("Enter  square  matrix \n");
	for(i = 0 ; i <= n - 1 ; i++)
    for(j = 0 ; j <= n - 1 ; j++)
			scanf("%d" , &a[i][j]); // Reads  elements  of  matrix
    printf("Matrix\n");
    display(n , a);
}


