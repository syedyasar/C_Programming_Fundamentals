
//sort elements in row of matrix
#include<stdio.h>
void bubsort(int *a,int n)
{
	int i,ctr,temp;
	do // It is controlling passes
	{
		ctr=0;
		for(i=0;i<=n-2;i++) // It is controling  comparsions
		{
			if(a[i]>a[i+1])  // If ith element > i+1 element, swap them
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				ctr++;//count no of swaps  (1)
			}
		}
	}
	while(ctr>0);//go to next pass when there is at least one swap
}

main()
{
	int m,i,j,n;
	printf("enter number of rows:");
	scanf("%d",&m);
	printf("enter number of columns:");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter matrix \n");
	
	for(i=0;i<=m-1;i++)
	for(j=0;j<=n-1;j++)
		    scanf("%d",&a[i][j]);		    
		    
	for(i=0;i<=m-1;i++)
		bubsort(a[i],n);
	
			
	for(i=0;i<=m-1;i++)
	{
			for(j=0;j<=n-1;j++)
					printf("%d\t",a[i][j]);
			printf("\n");
	}
	
}
