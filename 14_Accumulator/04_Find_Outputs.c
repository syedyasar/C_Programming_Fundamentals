//_AX  is  supported  by  Turbo  c++   compiler   but not by  gcc  compiler

// Find  output
#include  <stdio.h>
float  f1()
{
	_AX = 10.8; //  Acc  can  not  hold  float  value
}
main()
{
	printf("%g\n" , f1()); //Garbage  value
}	




/*
1)  It  is  possible   to   return  int  value  only  with   accumulator  

2) Use  return  statement  to  return float  value
*/
