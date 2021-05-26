//Find outputs
#include <stdio.h>
void  f1();
void  f2();
#pragma  startup   f1
#pragma  exit  f2
main()  // OS   executes  f1  function  before  main  function  is  executed
{
	f1(); // 2nd  call   to   f1   function
	printf("main function\n");
	f2(); // 1st  call  to  f2  function
}  // OS   executes  f2   function  after  main   function  terminates
void f1()
{
	printf("f1 function\n");
}
void f2()
{
	printf("f2 function\n");
}


//  f1  and  f2   functions  can  be  called  explicitly\

//Note:
// #pragma is not supported by  gcc compiler.  Use   Turbo C  for  #pragma
