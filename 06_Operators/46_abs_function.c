//   abs  function  demo  program
#include <stdio.h>
#include <math.h>
main()
{
		printf("%d \n" , abs(-25)); // 25
		printf("%d \n" , abs(10));  //  10
		printf("%f \n" , abs(-10.8)); //  garbage value due  to  wrong  format  %f
		printf("%d \n" , abs(-10.8)); //  10
}


/*
1)  abs  function  returns  +ve  value  when  parameter  is    -ve

2) It  returns  same    value  when  parameter  is  +ve

3) It  returns  int  result

4) %d   must  be  used   for  abs  function  but  not  %f
*/


