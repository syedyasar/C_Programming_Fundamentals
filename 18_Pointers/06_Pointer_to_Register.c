// Pointer  to  register
#include <stdio.h>
main()
{
	register   int   x = 25; //  'x'  is   register  variable
	int   *p = &x;  //  Error  becoz    register  variable has  no  address
	int  *m =  x; //  Error  due  to  mismatch i.e. LHS   type  is   int*  and  RHS  type is  int
}



/*
1)  Pointer  can  point  to  memory   variable  but  not  to  register  variable  becoz   register    variable  has  no
     address. 
	 
2)  &x  is  invalid  becoz  x  is  register
*/

