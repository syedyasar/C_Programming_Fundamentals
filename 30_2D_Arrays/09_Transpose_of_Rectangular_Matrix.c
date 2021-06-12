// Find  Transpose  of  Rectangular  Matrix
#include <stdio.h>
#include <stdlib.h>

int**   create(int m , int  n)  // m  and n  are  dimensions  of   the  matrix
{
	int  i;
	int**   a = malloc(m * sizeof(int*)); // creates  array  of  pointers  of  size  'm'  and  'a'  points  to   array
	for(i = 0 ; i <= m - 1 ; i++) // Creates  'm'  rows
			a[i] = malloc(n * sizeof(int)); // Creates  each   row  of  size  'n'  and  a[i]  points  to  row
	return  a; //  Address  of  matrix
} // pointer  'a'  is  lost

// int  **b  =  create(3 , 4)   ---->  Creates  a  runtime  matrix  of  size 3 X 4


int**   transpose(int  m , int  n ,  int a[][n])
{
	int  i , j;
	int**  b = create(n , m); // Creates a  runtime matrix  of  size  n X m  to  hold  results
    for(i = 0 ; i <= m - 1 ; i++)  // controls  rows  i.e. m  rows
    for(j = 0 ; j <= n - 1 ; j++) // controls   elements  i.e.  n  elements
			   b[j][i] = a[i][j];  // copies  a[i][j]   to  b[j][i]
	return  b;  // Address  of  matrix  'b'
}

/*
matrix a
----------------
      0       1      2       3
0   10     20    30     40
1    50    60    70     80
2    90    100  110   120

matrix b
--------------
      0        1        2
0   10      50       90
1   20      60       100
2   30      70       110
3   40      80       120



1) Row  wise  processing  in  matrix  'a'  and   hence   a[i][j]

2) Column  wise  processing  in  matrix  'b'   and   hence  b[j][i]

3)  static  int   b[n][m];   --->  Error  becoz  dimensions  can  not  be  variables  for  static  matrix

4)  Hence  create  runtime  matrix
*/

void  disp(int  m , int  n , int  **a)
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
	int  m , n , i , j;
	printf("Enter  Number  of  rows :  ");
	scanf("%d" , &m);
	printf("Enter  Number  of  columns :  ");
	scanf("%d" , &n);
	int  a[m][n];  // matrix  creation
	printf("Enter  Matrix \n");
	for(i = 0 ; i <= m - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
		    scanf("%d" , &a[i][j]); // Reads  elements  into  matrix  'a'
	int**   c = transpose(m , n , a); //  'c'  points  to  matrix  of  'b'  of  transpose  function
	printf("Transpose\n");
    disp(n , m , c);
	for(i = 0 ; i <= m - 1 ; i++)
			free(a[i]);  //  deletes  each  row  of  matrix
	free(a); // deletes  array  of  pointers
}


/*
1) Matrix  'a'  dimensions  are  m X  n

2) Matrix  'b'  dimensions  are  n  X  m
*/

