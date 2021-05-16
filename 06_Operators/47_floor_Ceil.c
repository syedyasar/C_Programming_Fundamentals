//   floor  and  ceil    functions  demo  program
#include <stdio.h>
#include <math.h>
main()
{
        printf("%g\n" , floor(10.8)); // 10
        printf("%g\n" , ceil(10.8)); //  11
        printf("%g\n" , floor(25.0)); //  25
        printf("%g\n" , ceil(25.0));  // 25
		printf("%g\n" , floor(25.1)); // 25
        printf("%g\n" , ceil(25.1));  // 26
        printf("%g\n" , floor(-3.5)); // -4
        printf("%g\n" , ceil(-3.5)); // -3
		printf("%g\n" , floor(-9.0)); // -9
        printf("%g\n" , ceil(-9.0));  // -9
        printf("%d\n" , floor(10.5));  // garbage value due  to  wrong  format  %d
        printf("%d\n" , ceil(10.5)); // garbage value due  to  wrong  format  %d
}


/*
 1) floor  function  returns  previous  integer  and    ceil  function  returns  next  integer

2) They  return  float  result   with  .0

3)  %f  or  %g    is  used  for  floor  and  ceil  but not  %d
*/
