/*
Find gcd of array  elements
main()  ---->   Reads  elements  into   array  and  prints  gcd  of  all  the  elements
                     0       1       2     3    4
array  --->           12  ,  18  ,   9  ,  7  ,  5
                             6  ,    9  ,  7  ,  5
                                      3 ,  7  ,  5
                                           1  ,  5
											     1
Hint :  ans  = gcd(a[0] , a[1]);
           ans =  gcd(ans , a[2])
           ans =  gcd(ans , a[3])
           ans =  gcd(ans , a[4])
Use  iterative  or  recursive  gcd          
*/

#include <stdio.h>
int  gcd(int  m , int  n)
{
		if(n > 0)
				return  gcd(n , m % n);
		else
				return  m;
}

                             
main()
{
		int  n , i;
		printf("How  many  elements ?  :  ");
		scanf("%d" , &n);
		int   a[n];
		printf("Enter elements \n");
		for(i = 0 ; i <= n - 1 ; i++)
				scanf("%d" , &a[i]);
		int  ans = gcd(a[0] , a[1]);  //  Gcd  of  1st  2  elements  of  array
		for(i = 2 ; i <= n - 1 ; i++)  
				ans = gcd( ans  ,  a[i]); //  Gcd  of  ans  and  next  element
		printf("Gcd : %d \n" , ans);
}
