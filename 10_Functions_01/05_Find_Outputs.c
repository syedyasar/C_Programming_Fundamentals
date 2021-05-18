// Find outputs
#include <stdio.h>
#include <math.h>
main()
{
	printf("%f \n" , sqrt(25));  //  sqrt   returns  float  value  ---> 5.0
	printf("%f\n" , pow(2 , 3)); // pow  returns  float  value  8.0
	printf("%d \n" , abs(-10.8));  // abs  function  returns  int  value  10
	printf("%d \n" , sqrt(25)); //  Garbage  value  due to incorrect  format  %d
	printf("%d\n" , pow(2 , 3));  //  Garbage  value  due to incorrect  format  %d
	printf("%f \n" , abs(-10.8));  //  Garbage  value  due to incorrect  format  %f
}

/*
Function    Return  Type
------------------------------------------
    sqrt              float
	pow              float
	abs               int

Format  in   printf   depends  on   return  type  of   the   function
*/

