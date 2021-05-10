//  demo  program  for  /  operator
#include <stdio.h>
main()
{
	printf(" %g  \n" , 9.0 / 2);  //  4.5
	printf(" %g  \n" , 9 / 2.0); //  4.5
	printf(" %g  \n" , 9.0 / 2.0); //  4.5
	printf(" %g  \n" , 9 / 2); // 4
	printf(" %d  \n" , 9 / 2); // 4
	printf(" %d  \n" , 1 / 2); //  0
	printf(" %g  \n" , 1.0 / 2); //  0.5
	printf(" %d  \n" , 9.0 / 2.0); // garbage value due to wrong format
	printf(" %f  \n" , 9 / 2);  // garbage value due to wrong format
}



/*
/  operator
-----------------
1)  /  operator  returns  quotient  after  division.

2)  It  is  integer  and  float  operator.

3)  If  at  least  one  operand  is  float,  result  is  float.

4)  If  both  the  operands  are  integers  ,  result  is  integer

*/

