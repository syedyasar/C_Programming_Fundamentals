//  ! operator demo  program
#include <stdio.h>
#define  true   1 
#define  false  0 
main()
{
	printf("%d\n" ,  !true); //  false ---> 0
	printf("%d\n" ,  !false);// true  ---> 1
	printf("%d\n" ,  !!true); // true  ---> 1
	printf("%d\n" ,  !!false); // false ---> 0
}


/*
! (not operator)
-------------------------
1) !true  is  false
    !false  is  true

2) !  operator  does  complement  operation

3) It  is  unary  operator becoz  it  has  only  one  operand.

Note:
6  8  --->     is  binary  operator
-7  ---> -  is  unary operator
*/
