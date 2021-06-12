// Multiply  2  matrices
/*
main()  ---> Read  matrices  a  and  b , call  mul  function  and  display matrix  'c'
mul()  ---> create a matrix , store  multiplication  results  in  the  matrix  and  return  the  matrix
			   3 for loops are needed to multiply 2 matrices
*/

#include  <stdio.h>
#include  <stdlib.h>

int**   create(int  m , int  n)
{
	int   i;
	int**  a = malloc(m * sizeof(int*));  // Array  is  created  with  garbage  addresses
	for(i = 0 ; i <= m - 1 ; i++)
			a[i] = (int*)calloc(n ,  sizeof(int));  // Array  is  created  with  0's
	return  a;
}

int**   mul(int   m , int   n ,  int  a[][n] , int   q , int  b[][q])
{
	int  i , j , k;
	int**  c = create(m , q);  // 'c'  points  to  runtime  matrix  of  size m X q
	for(i = 0 ; i <= m - 1 ; i++)  // This  is  for  rows  of  1st  matrix i.e. 'm' rows
	for(j = 0 ; j <= q - 1 ; j++) // This  is  for columns   of 2nd  matrix i.e. 'q'  columns
	for(k = 0 ; k <= n - 1 ; k++)  // This  is  for  columns  of  1st  matrix i.e. 'n'  columns (or) Rows of  2nd  matrix  i.e.  'p'  rows
			c[i][j] += a[i][k] * b[k][j]; // ith  row  of  1st matrix  is multiplied  with  jth  column  of  2nd matrix  and  result  is  stored  in c[i][j]
	return  c;  // Address  of  matrix
}

// matrix  multiplication demands 3 for loops

void  disp(int   m , int   n , int  **a)
{
		int  i , j;
		for(i = 0 ; i <= m - 1 ; i++)
		{
			for(j = 0 ; j <= n - 1 ; j++)
					printf("%d\t" , a[i][j]);
			printf("\n");
		}
}

/*
main()
{
	int  m , n , p , q , i , j;
	printf("Enter  Number  of  rows  in  first  matrix : ");
	scanf("%d" , &m);
	printf("Enter  Number  of  columns  in  first  matrix: ");
	scanf("%d" , &n);
	int   a[m][n];
	printf("Enter  first  matrix \n");
	for(i = 0 ; i <= m - 1 ;  i++)
	for(j = 0 ; j <= n - 1 ;  j++)
		    scanf("%d" , &a[i][j]);
	printf("Enter  Number  of  rows  in  second  matrix : ");
	scanf("%d" , &p);
	printf("Enter  Number  of  columns  in   second  matrix: ");
	scanf("%d" , &q);
	if(n ==  p)  // Number  of  columns  in  1st  matrix  must  be  same  as  number of  rows  in  2nd  matrix
	{
			int  b[p][q];
			printf("Enter  second  matrix \n");
			for(i = 0 ; i <= p - 1 ; i++)
			for(j = 0 ; j <= q - 1 ; j++)
					scanf("%d" , &b[i][j]);
			int**   c = mul(m , n , a , q , b); //  'c'  points  to  matrix  returned  by  mul   function
			printf("product   of   the   2  matrices\n");
			disp(m , q , c);  // prints  that  matrix  where  'c'  points
	}
	else
		printf("Matrix  dimensions  are  not  compatible  and multiplication  is  not  possible\n");
}
*/
