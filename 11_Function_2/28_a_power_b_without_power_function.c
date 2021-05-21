// Find  a ^ b  without  using  pow  function
/*
main()  --->  reads  values  of  a  and  b  ,  call  power  function  and  print  result
power(a , b)  ---> returns  a ^ b

power(4.5 , 3) = 4.5 ^ 3
power(4.5 , -3) =  1 / 4.5 ^ 3
power(4.5 , 0) =  1 

prod = 1* 4.5 * 4.5 * 4.5
*/
#include <stdio.h>
double  power(float  a , int  b)  
{
		double  prod = 1;
		int  i;
		for(i = 1 ; i <= abs(b) ; i++)
				prod *= a;  //  value  of  'a'  is  multiplied  with  prod   abs(b)  times
		if (b >= 0)
				return  prod; // Executed  when power  is  +ve  or  0
		else
				return  1 / prod; // Executed when power  is  -ve
}

main()
{
		float  a;
		int  b;
		printf("Enter  Base : ");
		scanf("%f" , &a); 
		printf("Enter   Power : ");
		scanf("%d" , &b); 
		printf("%g  ^  %d :  %lg \n" , a , b , power(a , b)); 
}
