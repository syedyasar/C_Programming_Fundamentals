#include <conio.h>
#include <stdio.h>
void f1();
void f2();
void f3();
void f4();
#pragma startup f1   7
#pragma startup f2   3  
#pragma startup f3   10
#pragma startup f4   5
#pragma startup  clrscr  2

#pragma exit f1    4
#pragma exit f2   13
#pragma exit f3    8
#pragma exit f4   15
main()
{
	printf("main function\n");
}
void f1()
{
	printf("f1 function\n");
}
void f2()
{
	printf("f2 function\n");
}
void f3()
{
	printf("f3 function\n");
}
void f4()
{
	printf("f4 function\n");
}


/*
1) Priorities can  be  assigned to the functions in the range 0-255

2) 0  is  highest priority  and  255  is  lowest priority

3) Higher priority function is first executed at startup.
    
4) Lower the number higher the priority

5)  Therefore  functions  are  executed  in the order   clrscr, f2 , f4 , f1  and  f3  at  startup

6) Lower priority function is first executed at exit.
    
7) Higher the number lower the priority

8)  Therefore  functions  are  executed  in the order    f4 , f2 , f3 , f1   at   exit

//Note:
// #pragma is not supported by  gcc compiler.  Use   Turbo C  for  #pragma


*/
