//  pow   function  demo  program
#include <stdio.h>  
#include <math.h>  // Files can be included  in  any  order

main()
{
		printf("%g \n" , pow(2 , 3)); // 8
		printf("%g \n" , pow(-2 , -3)); //  -2  ^  -3
		printf("%g \n" , pow(10 , -2)); // 10  ^  -2 = 0.01
		printf("%g \n" , pow(2 , pow(3 , 2)));  //   2 ^ 3 ^ 2 = 2 ^ 9 = 512
		printf("%d \n" , pow(3 , 4)); // garbage value  due to wrong format
}


/*
1)  Function  in  function  is  called  nested  function. 

2)  Inner  function  is  executed  before  outer  function.

3) pow  function  always  returns  float  result.  

4)  %f   or   %g  must be  used  for  pow  function  but not  %d
*/
