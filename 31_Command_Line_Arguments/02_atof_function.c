//  atof  function  demo  program
#include <stdio.h>
#include <stdlib.h>
main()
{
		printf("%g\n" , atof("10.8")); // "10.8"  is  converted  to 10.8
		printf("%g\n" , atof("25"));  // "25"  is  converted  to 25.0
		printf("%g\n" , atof("0075")); // "0075"  is  converted  to  75.0
		printf("%g\n" , atof("Hyd"));  // Garbage  value
		//float  x = "10.8"; //  Error  becoz  there   is  no  typecasting
		float y = atof("10.8");
		printf("%g\n" , y); // 10.8
}


// There is  no type casting from string to float and hence atof  function is used to convert string to  float
