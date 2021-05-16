/*
1) Test a matrix is unit matrix or not
      1    0    0
      0    1    0
      0    0    1
      diagonal elements must be 1's and off-diagonal elements must be 0's
      return 1 or 0
	  main() --> read matrix , call unit function and display msg
	  unit()  --> return true when matrix is unit and false otherwise
*/



//Find if it is unit matrix
#include<stdio.h>
#include<math.h>
int unit(int n,int a[][n])
{
    int i,j;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				return 0;
			}
			else
			{
				if(a[i][j]!=0)
				return 0;
			}
		}
	}
	return 1;
}

main()
{
	int    i,j,n;
	printf("Enter size of the square matrix : ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter square matrix \n");
	for(i=0;i<=n-1;i++)
	for(j=0;j<=n-1;j++)
		    scanf("%d",&a[i][j]);
	if(unit(n,a))
	printf("it is a unit matrix\n");
	else
	printf("it is not a unit matrix");
}



