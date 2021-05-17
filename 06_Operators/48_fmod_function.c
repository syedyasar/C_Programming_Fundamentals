//   fmod  function  demo  program
#include <stdio.h>
#include <math.h>
main()
{
	printf("%g \n" , fmod(9.8 , 5.6)); //  4.2
	//printf("%f \n"  , 9.8 % 5.6); // Error  becoz  %  can  not  have  float  operands
	printf("%d \n" , 9 % 5);  //  4
}


/*
1) fmod  function   does  float  division  and  returns  float  remainder

2)  %  operator    does  int  division  and  returns  int  remainder

3) %f  or  %g  is   used    for  fmod  function
*/

