// Constant and Variable  demo program
#include <stdio.h>
main()
{
	const   int  a = 10;  // 'a'  is  constant
	int  b = 20; // 'b'  is  variable  with initial value 20
	//a = a + 5;// Error  becoz constant  can not be modfied 
	b = b + 7; // variable 'b' is modified to  27
	printf("a : %d \n" , a); //  10
	printf("b : %d \n" , b);  // 27
}


/*
Constant  and  Variable
---------------------------------------
1)  Variable  can  be  modified  but  not  constant
      i.e.  Value  of  variable  can  be  modified  but   not  value  of  constant

2)  'b'  is  variable,  value  of  'b'  is  initially  20  and  is  modified  to  27

3)  'a'  is  constant,  value  of    'a'  is  forever  10  and    any  attempt  to  modify  value  of  'a'  leads  to  error

4)  const  is  also  called  read-only  variable
*/
