//  Variable  demo  program
#include <stdio.h>
main()
{
	int    i = 25;  // Okay  and  variable  can  hold  value
    int   x = &i; //  Error  becoz  variable  can  not  hold  address
}





/*
1)  Variable  can  hold  value  but  not  address

2)  int  x  =  i   is  okay   but  not  int  x = &i

3) int  x  =  &i;  --->  Error   due  to  mismatch

4) Type  of  'i'  is  int  but  type  of  &i  is   int*

5)  Type  of   value  is  int , float  , char , ..... but  type  of  address  is  int* , float*  , char*  , ....
*/
