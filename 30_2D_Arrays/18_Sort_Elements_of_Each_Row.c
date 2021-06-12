/*
Sort  elements  of    each    row    in      the  matrix
10        20        15        5
30        40        35        25
100      200      150      50
bubsort(send  1st    row  whose  address  is   a[0])
bubsort(send  2nd    row whose  address  is   a[1])
bubsort(send  3rd    row  whose  address  is   a[2])
a[i][j]  --->  Each   element  of  the  matrix   and   type    is    int
a[i]    --->  Address  of    each  row  in  the  matrix  and  type  is   int*
a  --->  Address    of    matrix   and  type is   int  **
*/

#include <stdio.h>
void  bubsort(int  *a , int  n)
{
	int  i , ctr , temp;
	do
	{
		ctr = 0;
		for(i = 0 ; i <= n - 2 ; i++)
		{
			if(a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				ctr++;
			}
		}
	}
	while(ctr > 0);
}

main()
{
	int  m , i , j , n;
	printf("Enter  number  of  rows : ");
	scanf("%d" , &m);
	printf("Enter  number  of  columns :  ");
	scanf("%d" , &n);
	int   a[m][n];
	printf("Enter  matrix  \n");
	for(i = 0 ; i <= m - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
		        scanf("%d" , &a[i][j]);
	for(i = 0 ; i <= m - 1 ; i++)  //  Sort  each  row  of   the   matrix
				bubsort(a[i] , n); //  sorts  elements  of  each   row    whose  address  is  a[i]
	printf("Matrix  where   rows  are  sorted \n");
	for(i = 0 ; i <= m - 1 ;  i++)
	{
			for(j = 0 ; j <= n - 1 ; j++)
					printf("%d\t" , a[i][j]);
			printf("\n");
	}
}


/*
1) bubsort(a[0] , n);  ---> Sorts   all   'n'  elements  of  1st  row   whose  address  is   a[0]

2) bubsort(a[1] , n);  ---> Sorts   all   'n'  elements  of  2nd  row   whose  address  is   a[1]

3) bubsort(a[2] , n);  ---> Sorts   all   'n'  elements  of  3rd  row   whose  address  is   a[2]
*/
