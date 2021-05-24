//_AX  is  supported  by  Turbo  c++   compiler   but not by  gcc  compiler

// Find  output
#include  <stdio.h>
int f1()
{
	_AX = 10; //  Acc  initially   contains  10
	_AX = 20; // Acc  is  modified  to   20
	_AX = 30; // Acc  is   further  modified  to  30
} // Acc  finally  contains  30  and  is   returned  to  function  call
main()
{
	printf("%d\n" , f1());  // 30
}	
/*

1)  Since  Accumulator  finally  contains   30  and     30   is   returned  to  function  call

2)   int  f1()
	  {
		  		return  10;
		  		return  20; // skipped
		  		return  30; // skipped
	  }
	  f1  function  returns   10
*/
		
