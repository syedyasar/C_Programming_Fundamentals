//  && operator demo  program
#include <stdio.h>
#define  true   1   // true  is  a macro  with value  1
#define  false  0  //  false is macro  with  value  0
main()
{
	printf("%d\n" , true && true); // true  ---> 1
	printf("%d\n" , true && false);  //  false ---> 0
	printf("%d\n" , false && true);  //  false ---> 0
	printf("%d\n" , false && false);  //  false ---> 0
}



/*
&& (and  operator)
-------------------------------
1)  true  &&  true  is  true
     true  &&  false  is  false
     false  &&  true  is  false
     false  &&  false  is  false

2) &&  operator does  logical  multiplication

3) It  is  a  binary  operator  becoz it  has  2  operands.

4) If  at  least  one  operand  is  false,  result  is  false.
    If  both  the  operands  are  true,  result  is  true
*/
