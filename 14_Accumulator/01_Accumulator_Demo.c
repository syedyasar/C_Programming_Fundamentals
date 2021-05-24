// Accumulator  demo  program
#include <stdio.h>
int f1()
{
	_AX = 25; // value  of  Accumulator  is  automatically  returned  to  function  call
}
main()
{
    	printf("%d\n" , f1());  //  25
}


/*
1) _AX is accumulator register

2) Value of accumulator  is automatically returned to function call.

3) So, f1 function returns 25
    i.e.  f1() --> 25

4) Use  either  return  statement   or  accumulator  to return a value
    return  25;
	    and 
	_AX = 25   are  same

5) _AX  is  supported  by  Turbo  c++   compiler   but not by  gcc  compiler
*/
