//  ||  operator demo  program
#include <stdio.h>
#define  true   1  // true  is  a  macro  with value  1
#define  false  0  //  false is  macro  with value  0
main()
{
	printf("%d\n" , true || true);  // true ---> 1
	printf("%d\n" , true || false);  //  true ---> 1
	printf("%d\n" , false || true);  //  true ---> 1
	printf("%d\n" , false || false);  //  false ---> 0
}


/*
|| (or operator)
------------------------
1)  true  ||  true  is  true
     true  ||  false  is  true
     false  ||  true  is  true
     false  ||  false  is  false

2) ||  operator  does  logical  addition

3) It  is  also  binary  operator  becoz  it  has  2  operands.

4) If  at  least  one  operand  is  true,  result  is  true.
    If  both  the  operands  are  false,  result  is  false
*/
