// Same  program  with  user  defined  formats
#include <stdarg.h>
#include <stdio.h>
float  avg(char*  a , ...) // 'a'  is  control string  passed  from  function  call
{
	float  sum = 0;
	int  i , ctr = 0;
	va_list  p;  // variable  'p'  is  created
	va_start(p , a); //  p   points  to  1st  parameter (i.e. control string) in the  function  call
	for(i = 0 ; a[i] != '\0' ; i++)  // Each  character  of  control string  is  processed  until  '\0'
	{
		if (a[i] == '%')  // search  for  '%'  in  the  control  string
		{
			switch(a[i + 1])  // What  is  the  character  after  '%' ?
			{
				case  'k':  //  integer
				                   sum += va_arg(p , int); // Add next  parameter  in  the  function  call  to  sum
								   ctr++; // counts  next  parameters  in the function call
								   break;
				case  'm' : // float
								   sum += va_arg(p , double);
								   ctr++;
								   break;
				case   't'  : //  long integer
							      sum += va_arg(p , long);
							      ctr++;
							      break;
				case    'z'  : // long  float(double)
							      sum += va_arg(p , double);
							      ctr++;
						      	  break;
			} //outer switch
		} //if
	} //for
	return sum / ctr;  // average  of  parameters  in  the  function   call
}//function

main()
{
	float  ans1 = avg("%k%m" , 25 , 10.8); //  3  parameters
	float  ans2 = avg("%k%k%k" , 10 , 20 , 15);  //  4  parameters
	float  ans3 = avg("%k%m%t%z",  25 , 10.8 , 100000 , 2500000.689);  //  5  parameters
	printf("%g\n%g\n%g\n" , ans1 , ans2 , ans3);
}


/*
User  defined  formats
int  -  %k
float   -   %m
long  -   %t
double -    %z
*/

