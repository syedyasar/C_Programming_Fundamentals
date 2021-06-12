// Find  transpose  of  square  matrix
#include  <stdio.h>
void  trans(int   n  ,  int  a[][n])
{
    int  i , j , temp;
	for(i = 0 ; i <= n - 1 ; i++) //  i  =  2
	for(j = i + 1 ; j <= n - 1 ; j++) // j  =  3
	{
		if(i < j) //  true  for  elements  above  diagonal
		{
              temp = a[i][j]; // swap  eleements  above  diagonal   with  those   below  diagonal
		      a[i][j] = a[j][i];
		      a[j][i] = temp;
		}
	}
}

/*
        0       1        2
 0    10     40      70
 1    20     50      80
 2    30     60      90
*/


/*
i < j    ---->  Elements  above  diagonal
i > j    ---->    Elements  below  diagonal
i == j  ---->  Diagonal  elements
Execution   becomes  fast   when   j  is  initialized  to   i + 1  and   if  condition  is  omitted
*/

main()
{
	int   i , j , n;
	printf("Enter  size  of  the  square  matrix  :  ");
	scanf("%d" , &n); // 3
	int   a[n][n];  // matrix  creation
	printf("Enter  square  matrix  \n");
	for(i = 0 ; i <= n - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
		        scanf("%d" , &a[i][j]); // Reads  elements  into  matrix  'a'
	trans(n , a);  // transpose  results  are  stored in  same  matrix  replacing  existing  elements
	printf("Transpose\n");
	for(i = 0 ; i <= n - 1 ; i++)
	{
			for(j = 0 ; j <= n - 1 ; j++)
					printf("%d\t" , a[i][j]);  // Prints  elements of  the matrix
			printf("\n");
	}
}


/*
1) In  case  of  rectangular  matrix,  results  are  represented  in a   different  matrix  becoz  dimensions  are
    different.
    Eg :  Input  is  3 X 4  and  output  is  4 X 3

2) In  case  of  square  matrix,  results  are  represented  in  same  matrix  becoz  dimensions  are   same
    Eg :  Input  is  3 X 3  and  output  is  3 X 3
*/
