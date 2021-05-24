//_AX  is  supported  by  Turbo  c++   compiler   but not by  gcc  compiler

// Find  output
#include  <stdio.h>
int  f1()
{
	_AX = 10;
	return   20;
}
main()
{
	printf("%d\n" , f1()); // 20
}	



/*
1)  return  has  higher priority   over  accumulator

2) contents  of  Accumulator  are   ignored  when   return  statement  is   used

3) f1  function   returns  20   but  not   10
*/
