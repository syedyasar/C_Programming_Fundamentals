/*
Recursive  function  to  find  Gcd  of   2 numbers
gcd(12 , 15) = gcd(15 , 12 % 15) = gcd(12 , 15 % 12) = gcd(3 , 12 % 3) =  3
gcd(4 , 7)  = gcd(7 , 4) = gcd(4 , 3) = gcd(3 , 1) = gcd(1 , 0) = 1
*/
#include <stdio.h>
int  gcd(int  m , int  n) 
{
	if(n > 0)
		return  gcd(n , m % n); //  Recursion  continues  as  long  as   n  > 0
	else
		return  m; // stop  recursion  when  n  is   0
}		
//  gcd(4 , 6) =  gcd(6 , 4)  =  gcd(4 , 2) =  gcd(2 , 0) = 2


main()
{
	int  m , n;
	printf("Enter any 2 numbers \n");
	scanf("%d%d" , &m, &n); 
	printf("Gcd : %d \n" , gcd(m , n));  
}


// gcd  and  hcf  are  same