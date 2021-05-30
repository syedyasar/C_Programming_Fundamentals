// Recursive   Fibonacci  series  --->  0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , .....

#include <stdio.h>
int  fib(int  i) //   i  is  term  number
{
		if(i == 1) //  1st  term 
			return   0;  //  1st  term  is  0
		else
		if (i  ==  2) // 2nd  term 
			return  1;  // 2nd  term  is  1
		else 
			return  fib(i - 1) + fib(i - 2); // ith term  is  sum  of  the  2  preceding  terms
}

/*
fib(5)  =  fib(4) + fib(3)
          =  fib(3) + fib(2) + fib(2) + fib(1)
          =  fib(2) +  fib(1) + 1 + 1 + 0
          =  1 +  0 + 1 + 1 + 0 = 3

fib(1) contains  1  function call
fib(2) contains  1  function call
fib(3) contains  3  function calls
fib(4) contains  5  function calls
fib(5) contains  9  function calls
fib(6) contains  15  function calls
fib(7) contains  25  function calls

*/

main()
{
		int  i , n;
		printf("How many terms ? : ");
		scanf("%d" , &n); 
		printf("Fibonacci  series\n");
		for(i = 1 ; i <= n ; i++) 
				printf("%d\n", fib(i));  //  ith  term  is  printed  where  i  varies  from 1  to  n
}

/*
            i              fib(i)
			-----------------------
			1              fib(1) = 1st  term  = 0
			2              fib(2) = 2nd  term  = 1
			3              fib(3) = 3rd  term  = 1
			4              fib(4) = 4th  term  = 2
			5              fib(5) = 5th  term  = 3
			and  so  on

1) fib function generates fibonacci term.

2) Call fib function n times in a loop to generate fibonacci series
*/
