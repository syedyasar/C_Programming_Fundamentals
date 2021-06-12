/*
 Find   Trace  and  Norm  of  a  square  matrix
       0        1        2
 0   10      20      30
 1   40      50      60
 2   70      80      90
Norm   =   Sum  of  squares  of  all  the   elements   =   10 ^ 2 + 20 ^ 2 + .... + 90 ^ 2
Trace  =   Sum  of  diagonal  elements   =   10 + 50 + 90  =  150
*/

#include<stdio.h>
#include<math.h>
int  trace(int  n , int  a[][n])
{
        int  i , sum = 0;
		for(i = 0 ; i <= n - 1 ; i++)
				sum += a[i][i]; //  Adds  each   diagonal  element  to   sum
		return  sum; //  sum  of  diagonal  elements
}

int      norm(int  n , int  a[][n])
{
	int  i , j , sum = 0;
	for(i = 0 ; i <= n - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
			sum +=  a[i][j] * a[i][j];  // squares  each  element  of  matrix  and  then  added  to  sum
	return  sum; // sum  of  squares  of  elements
}

/*
1) Nested  for  loops  are  required   to  process  each  element  of  matrix

2) Single  for  loop  is  enough  to  process  diagonal  elements
*/


main()
{
	int        i , j , n;
	printf("Enter  size  of  the  square  matrix  :  ");
	scanf("%d" , &n);
	int  a[n][n]; //  matrix  is  created
	printf("Enter  square  matrix  \n");
	for(i = 0 ; i <= n - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
		        scanf("%d" , &a[i][j]); // Reads  elements  into matrix  'a'
	printf("Trace :  %d\n" , trace(n , a));
	printf("Norm  :  %d\n" , norm(n , a));
}
