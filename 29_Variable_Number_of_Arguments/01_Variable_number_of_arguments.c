// variable  number  of   arguments  demo   program
#include <stdio.h>
#include <stdarg.h>  // va_list , va_start , va_arg
float  avg(int   n , ...)  // avg  is  var-arg  function   due  to  ...
{
	int  i , sum = 0 ;
	va_list    p; //  creates  variable  'p'  of  type  va_list
	va_start(p , n); //  p   points  to  1st  parameter becoz 'n' is  1st  parameter value
	for(i = 1 ; i <= n ; i++) // Loop  is  executed 'n'  times
			sum += va_arg(p , int); // Each  parameter in the   function call , from 2nd  parameter , is  added  to  sum
	return (float)sum / n ; //  Average of  parameters in the  function  call
}

main()
{
	float  ans1 = avg(4 , 10 , 20 , 15 , 18) ; //  average  of  4 parameters  ---> 15.75
	float  ans2 = avg(3 , 100 , 200 , 150) ; // average  of  3 parameters  --->  150.0
	float  ans3 = avg(5 , 30 , 40 , 35 , 32 , 38) ; // average  of 5  parameters  ---> 35.0
	printf("%g \n%g \n%g \n" , ans1 , ans2 , ans3) ;
	printf("%g\n" , avg(4 , 10 , 20 , 30 , 40 , 50 , 60 , 70));  // Average  of  first   4  parameters  and  50 , 60 , 70  are  ignored  becoz  for  loop  is  executed  4  times
	printf("%g\n" , avg(4 , 10 , 20)); // Garbage  result  becoz  3rd and 4th parameters  are  missing
}
