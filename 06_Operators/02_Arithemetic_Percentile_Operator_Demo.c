//  demo  program  for  %  operator
#include <stdio.h>
main()
{
	printf(" %d  \n" , 9 % 5); // 4
	//printf(" %g  \n" , 9.0 % 5); //  Error becoz operands  can  not be float
	//printf(" %g  \n" , 9 % 5.0); //  Error
	//printf(" %g  \n" , 9.0 % 5.0); //  Error
	printf(" %d  \n" , ((int)9.0) % 5); // 4
	printf(" %d  \n" , 4 / 7); //  0
	printf(" %d  \n" , 4 % 7); //  4
}



/*
%  operator
-------------------
1)  %  operator  returns  remainder  after  division.

2)  It  is  purely  int  operator
     i.e.  operands    must  be  integers  and  result  is  also integer

3)    float  operands  are  not  allowed  for  %
*/

