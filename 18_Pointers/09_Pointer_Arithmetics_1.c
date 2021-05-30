// Pointers  arithmetic
#include <stdio.h>
main()
{
        int  a = 10, b = 20;
		int *p1 = &a, *p2 = &b; //  p1   points  to  variable  'a'  and  p2  points   to  variable  'b'
		//printf("%u\n" , p1 + p2); //  Error  becoz  pointers  can  not  be  added
		//printf("%u\n" , p1 * p2); //  Error  becoz  pointers  can  not  be  multiplied
		//printf("%u\n" , p1 / p2);  //  Error  becoz  pointers  can  not  be  divided
		printf("%d\n" ,  p1 - p2); //  okay  and  result  is  integer
}


/*
1) No  arithmetic  operations    are    allowed  on  pointers  except  subtraction.

2)  pointer - pointer  is   integer  but  not  pointer

3)  Address  1005  -  Address  1000 =  int  value  5  i.e.  There  are  5  values  between  addresses  1005  and  1000
*/
