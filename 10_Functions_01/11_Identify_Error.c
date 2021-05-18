// Identify  error
#include <stdio.h>
int    add(int  x , int  y)
{
	return  x + y ;
}
main()
{
		printf("%d \n" , add(10 , 20 , 30)); // Error  becoz  excess  number of parameters  are  passed  from  the  function call
}




/*
1) Number    of  actual parameter's  and  formal parameter's  must  be  same

2) add  function expects 2 parameters  but  3   arguments or parameters are passed from function call
    and  hence  it  leads to    error
*/