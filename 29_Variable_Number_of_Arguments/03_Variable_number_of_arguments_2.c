// Same  program  in  another  way
#include <stdio.h>
#include <stdarg.h>
float avg(int   x , ...) // x  is  1st  parameter value
{
	int  ctr = 0 , sum = 0 ;
	va_list    p ; // Variable  'p'  is  created
	va_start(p , x) ; //  'p'  points  to  1st  parameter  in  the  function  call  becoz  'x'  is  1st  parameter value
	while (x != 0)  //  Loop  is  executed  until  va_arg  returns  0
	{
			sum += x; // Each parameter in  the  function  call  is  added  to  sum
			ctr++; //  counts number  of  parameters  in  the  function call
			x = va_arg(p , int); // Next parameter  in the  function call
	}
	return (float)sum / ctr ; //  average  of  parameters in the function  call
}

main()
{
	float  ans1 = avg(10 , 20 , 15 , 18 ,  0) ; // Average of parameters  terminated by  0
	float  ans2 = avg(100 , 200 , 150 , 0) ;
	float  ans3 = avg(30 , 40 , 35 ,  32 , 38 , 0 ) ;
	printf("%g\n%g\n%g\n" , ans1 , ans2 , ans3) ;
}

/*
1) Function  call   is   avg(number of  parameters , parameters)  in 01_Variable_number_of_arguments.c  file

2) Function  call   is   avg(parameters , 0)  in  current program
*/
