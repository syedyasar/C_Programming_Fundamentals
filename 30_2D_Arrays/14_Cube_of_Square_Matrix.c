/*
Find  cube  of  the  square  matrix
 a^3     =   a  *  a  *  a
Hint : call mul   function   twice
*/
#include  <stdio.h>
#include  "13_Multiply_2_Matrix.c"  // mul   function  is   substituted

main()
{
	int  n , i , j;
	printf("Enter  size  of  square  matrix  :  ");
	scanf("%d" , &n);
	int  a[n][n]; // matrix  is   created
	printf("Enter  square  matrix  \n");
	for(i = 0 ; i <= n - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
		        scanf("%d" , &a[i][j]); // Reads elements  into  matrix  'a'
    int**    b = mul(n , n , a , n , a);  //  'b'   points   to  a ^ 2  matrix
	int    d[n][n]; // matrix  is   created  to  store   a ^ 2  results
	for(i = 0 ; i <= n - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
				d[i][j] = b[i][j];  // Each   elements  of  a ^ 2  matrix   is  copied   to  matrix   'd'
	int**  c = mul(n , n , d ,  n , a); //  'c'  points  to   a ^ 3  matrix
	printf("Cube  of  the  matrix  \n");
    for(i = 0 ; i <= n - 1 ; i++) //  prints  matrix  'c'
	{
			for(j = 0 ; j <= n - 1 ; j++)
					printf("%d\t" , c[i][j]);
			printf("\n");
	}
}


/*
1) int  **c  = mul(n , n , b , n , a) ---->  Error  becoz  3rd  parameter  of mul   function  must  be  matrix  but  not
															pointer

2) Hence  send  matrix  'd'  to  mul  function  but  not  pointer   'b'

3)   a   ---->  Input  matrix
     b    ---->  pointer  to  a ^ 2  matrix
     d    --->  Intermediate matrix  which   contains  a  ^  2  result
     c   ---->  pointer  to  a  ^  3  matrix
*/
