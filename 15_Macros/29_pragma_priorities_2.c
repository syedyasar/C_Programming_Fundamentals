#include <stdio.h>
void f1();
void f2();
#pragma startup f1   5
#pragma startup f2   5  
#pragma exit f1   7
#pragma exit f2   7
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



// Function f2  and  f1  are  executed in reverse order becoz  they  have  same priority