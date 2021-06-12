//  Read and display a  rectangular matrix
#include <stdio.h>
void  display(int  m , int  n , int a[][n])
{
	int i , j;
	for(i = 0 ; i <= m - 1 ; i++) // i = 2
	{
		for(j = 0 ; j <= n - 1 ; j++)
				printf("%d\t" , a[i][j]);
		printf("\n");
	}
}

main()
{
	int i , j , m , n;
	printf("Enter  number  of rows : ");
	scanf("%d" , &m); // 3
	printf("Enter number of columns : ");
	scanf("%d" , &n); // 4
	int  a[m][n];
	printf("Enter matrix \n");
	for(i = 0 ; i <= m - 1 ; i++)
    for(j = 0 ; j <= n - 1 ; j++)
			scanf("%d" , &a[i][j]);
    printf("matrix\n");
    display(m , n , a); // order is  important
}


