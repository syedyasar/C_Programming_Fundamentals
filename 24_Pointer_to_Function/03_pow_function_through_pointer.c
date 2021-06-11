// How  to  call  pow  function  thru  pointer
#include <stdio.h>
#include <math.h>
main()
{
	double  (*p)(double ,  double); //  p   can   point  to  that   function  which  has   double  parameters  and   returns  double
	p = pow;  //  p   points  to   pow    function
	printf("%g\n" , p(4 , 3));  // pow   function  is  executed  becoz   'p'  points  to  pow  and   function   returns   4 ^ 3 = 64
	printf("%g\n", (*p)(4 , 3));  //  Function  *p   is   executed  i.e. pow
}



/*
pow   function   has   double  parameters  and   returns   double
i.e.   double    pow(double   a  ,  double   b)
        {
        }
*/