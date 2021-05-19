/*
Test a number is perfect or not
sum of the divisors = given number  -----> perfect number
1)  perfect(6)  ---> true
     n =  6
	 i  =  1  ,  2  ,   3
	 sum = 0 + 1 + 2 + 3 = 6
	 n == sum ---> 6  ==  6  ---> true

2) perfect(14)  ---> false
     n  =    14
	 i = 1 , 2 , 3 , 4  , 5 , 6 , 7
	 sum = 0 + 1 + 2 + 7 = 10
	 n == sum ---> 14  ==  10  ---> false

3) perfect(28)  --->  true
    n = 28
	i = 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , .......,  14
	sum = 0 + 1 + 2 + 4 + 7 + 14 = 28
	n  ==  sum ---> 28  == 28  ---> true

main()  ---> reads input , call  perfect  function and print msg
perfect(n)  ---> returns  true  when n is perfect  and false otherwise
*/
#include <stdio.h>
int  perfect(int  n) 
{
		int  i , sum = 0;
		for(i = 1 ; i <= n / 2 ; i++)   // range  of  divisors  are  1  to  n / 2
		{
				if (n % i == 0)  // if  'i'  is  a  divisor  of  'n' ,  add  'i'   to  sum
						sum += i; 
		}
		return (n ==  sum); // returns  true  when  sum of  the divisors  is  same  as  given  and  false  otherwise			
}
//  perfect(14)   is  0
//  perfect(28)   is  non-zero
main()
{
		int  n;
		printf("Enter  any  number  :  ");
		scanf("%d" , &n); //  reads  input  to   variable  'n'
		if (perfect(n))  //  is  'n'  perfect  number
				printf("Perfect Number\n");
		else
				printf("Not  a  Perfect Number\n");
}

//  We  are  using  function  call  as  if  condition  becoz  function  is  returning  true  or  false