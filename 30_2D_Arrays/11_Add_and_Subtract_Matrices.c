// Add  and  subtract  matrices
#include <stdio.h>
#include <stdlib.h>

int**   create(int  m , int  n)  //  same as  earlier  program
{
	int   i;
	int**  a = malloc(m * sizeof(int*));
	for(i = 0 ; i <= m - 1 ; i++)
			a[i] = (int *)malloc(n * sizeof(int));
	return  a;
}


int**   add(int   m , int  n , int   a[][n] , int b[][n] )
{
	int**   c = create(m , n);  // 'c'  points  to  runtime matrix  of  size m X n
	int   i , j;
	for(i = 0 ; i <= m - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
			c[i][j] = a[i][j] + b[i][j];
	return  c;
}

int**   sub(int   m , int  n , int   a[][n] , int b[][n])
{
	int**   c = create(m , n);
	int   i , j;
	for(i = 0 ; i <= m - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
			c[i][j] = a[i][j] - b[i][j];
	return  c;
}

void  disp(int   m , int   n , int  **a)  //  same as  earlier  program
{
		int  i , j;
		for(i = 0 ; i <= m - 1 ; i++)
		{
			for(j = 0 ; j <= n - 1 ; j++)
					printf("%d\t" , a[i][j]);
			printf("\n");
		}
}


main()
{
	int  m , n , i , j , p , q;
	printf("Enter  Number  of  rows in  1st  matrix :  ");
	scanf("%d" , &m); // 3
	printf("Enter number  of columns in  1st  matrix  : ");
	scanf("%d" , &n); // 4
	int   a[m][n];  // matrix  is  created
	printf("Enter  1st  Matrix \n");
	for(i = 0 ; i <= m - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
		    scanf("%d" , &a[i][j]); // Reads  elements into matrix  'a'
	printf("Enter  Number  of  rows in  2nd  matrix  :  ");
	scanf("%d" , &p);  //  3
	printf("Enter number  of columns in   2nd  matrix  : ");
	scanf("%d" , &q);  // 4
	if(m == p  && n == q)  // Dimensions  must be  same  for  addition  and  subtraction
	{
			int   b[p][q]; // matrix  is  created
			printf("Enter  2nd  Matrix \n");
			for(i = 0 ; i <= p - 1 ; i++)
			for(j = 0 ; j <= q - 1 ; j++)
					scanf("%d" , &b[i][j]);  // Reads  elements  into  matrix  'b'
			int**  c = add(m , n , a ,  b);  // 'c'  points  to  matrix  returned  by  add  function
			int**  d = sub(m , n , a , b);  // 'd'  points  to  matrix  returned  by  sub  function
			printf("Addition\n");
			disp(m , n , c);  //  prints  that  matrix  where   'c'  points
			printf("Subtraction\n");
			disp(p , q , d);   //  prints  that  matrix  where   'd'  points
	}
	else
			printf("Matrix dimensions are  not  same\n");
}


/*
1) int**   c  =  add(m , n , a , p , q , b);  ---->  Don't  send  p  and  q  to  the  function  becoz  m = p  and  n = q

2) Avoid  parameter  duplication  i.e. Don't same  parameter  multiple  times  to  the  function

3) static  int   c[m][n];  ---->  Error  becoz  dimensions  can  not  be  variables   for  static   matrix
*/