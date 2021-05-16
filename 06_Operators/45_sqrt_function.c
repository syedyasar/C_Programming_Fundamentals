//   sqrt  function  demo  program
#include <stdio.h>
#include <math.h>
main()
{
		printf("%g \n" , sqrt(25)); // 5
		printf("%g \n" , sqrt(10));  // 3.1
		printf("%g  \n" , sqrt(-49)); // garbage value  becoz  sqrt  of  -ve  value  can not be determined
		printf("%g \n" , sqrt(sqrt(256)));  // 4
		printf("%g \n" , sqrt(pow(3 , 4)));  //  9
		printf("%d \n" , sqrt(49));// garbage value  due  to  wrong  format   %d
}

/*
1) sqrt  function returns  float  result. 

2) %f  or   %g    must  be  used  for  sqrt  function  but not %d

3) sqrt  of  -ve  value  can  not  be determined

4) inner function  is  executed before  outer function  in nested  call
*/
