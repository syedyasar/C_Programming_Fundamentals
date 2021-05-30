/*  Reverse a number  by using recursion
rev(678 , 3) =  678 % 10 * 10 ^ (3-1) + rev(678 / 10 , 3 - 1)
                   =  800 + rev(67 , 2)
				   =  800 + 67 % 10 * 10 ^ (2-1) + rev(67/10 , 2 - 1)
				   =  800 + 70 + rev(6 , 1)
				   =  800 + 70 + 6 % 10 * 10 ^ (1-1) + rev(6/10 , 1 - 1)
				   =  800 + 70 + 6 + rev(0 , 0)
				   =  800 + 70 + 6 + 0
				   =  876
There  are  4  function calls for  3  digit number.
There  are  (n+1)  function calls for  n-digit number.
*/
#include  <stdio.h>
#include  <math.h> //  pow   function
#include  <stdlib.h>  //  itoa   function
#include  <string.h>  //  strlen   function
int   rev(int  n , int  l)  //  n  is  number , l  is  length of  the number
{
		if (n > 0)  //  l  > 0  is  also  okay
				return  n % 10 * pow(10 , l - 1) + rev(n / 10 , l - 1);
		else
				return  0;
}

/*int  length(int  n)
{
	int  l = 0;
	while(n > 0) //  Loop  is  executed  until  n  becomes  0
	{
			n = n / 10; // Modifies  value  of  'n'
			l++; //  count number  of  divisions
	}
	return  l; //  Number of  divisions  is  length of the  number
}*/

int  length(int  n) // n  is   678
{
	char  a[20];
	itoa(n , a , 10);  //  integer   is  converted  to  string  and  is  represented  in  array   'a'  in decimal  form
	return  strlen(a);  // length  of  the  string  in  array  'a'
}

//  strlen("678")  is   3


main()
{
    int   n ;
    printf("Enter  any  number : ");
    scanf("%d" , &n); // 678
    printf("Reverse  Number : %d\n" , rev(n , length(n)));
}
