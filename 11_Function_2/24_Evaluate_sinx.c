//  Evaluate sin(x) = x ^ 1 /  1!  -  x ^ 3 / 3!  +  x ^ 5 / 5!   -   x ^ 7 / 7!   + - ......
#include <math.h>  // pow  function
#include <stdio.h>
//# include "prog11.c"  //  fact function is substituted

long  long  fact(int   n)  
{
    long  long  prod = 1;
	int i;
    for(i = 1 ; i <=  n ; i++)  
		prod *= i;  // Multiply  'i'  with  prod  where  'i'  varies  from 1  to  n
    return  prod; // n!
}


float   sine(float  x) // x is  angle  in  degrees
{
    float  sum = 0;
    int  p , sign = 1; // sign of  the  1st  term  is  +ve
	x = 3.14159 * x / 180;  // Angle  in  degrees  is  converted  to  radians
    for(p = 1 ; p <= 20 ; p += 2)  // powers  1  to  20  in steps of  2
    {
        sum += sign * pow(x , p) / fact(p);  //  Each  term  of  the  series  is  added  to  sum
        sign = -sign;  //  alternative +  and -
    }
    return  sum; // sum  of  first  10  terms  
}

main()
{
    float  x;
    printf("Enter  angle  in  degrees : ");
    scanf("%f" , &x); // 30
    printf("sin ( %g )  :   %g  \n" , x , sine(x)); //  sin(30) :  0.5
}

/*
1) sin  is  a  predefined    function  in math.h

2) User  defined function  name can not be sin

3) main  calls  sine  function  and  sine calls  fact   function
*/
