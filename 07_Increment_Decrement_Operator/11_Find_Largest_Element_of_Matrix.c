/*
find largest element of the matix along with row and column nos
Eg:
10  20  30  25
40  35   50  45

largest element : 50
row no :  2
column no :   3 

main() --> read matrix , call large function and display 1-d array
large()  ---> create 1-d array (size : 3) , store results in 1-d array and return 1-d array
*/
//Find largest element of matrix
#include<stdio.h>
#include<math.h>
int* large(int m,int n,int a[][n])
{
    int i,j;
    static int b[3];
    b[0]=a[0][0];
    b[1]=0;
    b[2]=0;
	for(i=0;i<=m-1;i++)
	{
		for(j=0;j<=n-1;j++)
		{
				if(a[i][j]>=b[0])
				{
		 				b[0]=a[i][j];
						 b[1]=i;
						 b[2]=j;
				}
 		 }
	 }
    return b;
}
main()
{
	int    i,j,m,n;
	printf("Enter number of rows : ");
	scanf("%d",&m);
	printf("Enter number of columns : ");
	scanf("%d",&n);
	int a[m][n];
	printf("Enter matrix \n");
	for(i=0;i<=m-1;i++)
	for(j=0;j<=n-1;j++)
		    scanf("%d",&a[i][j]);
	int *c=large(m,n,a);
	printf("largest element is %d\n",c[0]);
	printf("it is in  row : %d and  column : %d",c[1]+1,c[2]+1);
}
