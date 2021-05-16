//  Find  area  and  circumference  of  circle
//  input  :  radius
//  outputs  :  area  and  circumference


#include  <stdio.h>
#define   PI    3.14159  //  PI  is  a macro  with  value  3.14159
main()
{
	float   r ;
	printf("Enter  Radius : ");
	scanf("%f" , &r); //  3.5
	float  area =  PI *  r  *  r;  //  100
	float  cir  = 2 * PI * r ;  //  200
	printf("Area :  %g  \n" , area); 
	printf("Circumference  :   %g \n" , cir);
} //  All  the  3  variables (r , area   and  cir)   are  lost


/*
1)  Preprocessor substitutes 3.14159  wherever  macro  PI  is  used  in the program

2)  Use printf before  scanf  to  prompt user with  a  message

3)  Every  program  contains  3  steps:
      a)  Read  inputs

      b)  Computation  is  performed  on  inputs  and   results  are  derived

     c)  Print  results

*/


