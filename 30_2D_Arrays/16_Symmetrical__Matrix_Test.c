/*
Test  a  matrix  is  symmetric  or  not
      0        1      2
0   10      20    30
1   20      40    50
2   30      50    60
main()   --->  Reads  square  matrix ,  calls  sym   function   and  prints  msg
sym()  --->  returns  true  when  matrix  is  symmetric  and  false   otherwise
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>  //  true  and  false
bool  sym(int  n , int  a[][n])
{
        int  i,j;
		for(i = 0 ; i <= n - 1 ; i++)
		for(j = 0 ; j <= n - 1 ; j++)
		{
			if(i < j) // Test  elements  above diagonal
			{
				if(a[i][j] != a[j][i])
						return  false;
			}
  		}
		return  true;  // symmetric  matrix
}

/*
a[i][j]   is   element  above   diagonal   and   a[j][i]  is   element  below  diagonal
Case  1 :  If  a[i][j]  and  a[j][i]   are   same , next  elements  are  compared
Case  2 :  If  a[i][j]  and  a[j][i]   are   different ,  false  is   returned
Case  3 :  If  all  the  elements  above  diagonal  are  same  as   those  below  diagonal ,  return   true  outside  the
                loop
*/

main()
{
	int    i , j , n;
	printf("Enter  size  of  the  square  matrix  :  ");
	scanf("%d" , &n);
	int   a[n][n];
	printf("Enter  square  matrix  \n");
	for(i = 0 ; i <= n - 1 ; i++)
	for(j = 0 ; j <= n - 1 ; j++)
		        scanf("%d" , &a[i][j]);
	if(sym(n , a)) // Function   returns  true or  false
			printf("Symmetric  Matrix\n");
	else
			printf("Not  Symmetric\n");
}
