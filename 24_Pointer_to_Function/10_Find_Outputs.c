// Find  outputs of the program
#include <stdio.h>
void f1()
{
	printf("f1 function \n");
}
void f2()
{
	printf("f2 function \n");
}
void f3()
{
	printf("f3 function \n");
}
main()
{
	void   (*a[3])();  //  Array   of   pointers  where   each   pointer  points  to   function  and each   function can  not   have   parameters  and  returns  nothing
	int i;
	a[0] = f1;  //  a[0]   points  to    f1    function
	a[1] = f2; //  a[1]   points  to    f2    function
	a[2] = f3; //  a[2]   points  to    f3    function
	for(i = 0 ; i <= 2  ; i++)  //  Calls   each   function  thru   pointer
				a[i](); //  Executes  that   function   where  a[i]  points
}

/*
1)  How  to  call   f1   function   thru   pointer  a[0] ?   ---->   a[0]();
     How  to  call   f2   function   thru   pointer  a[1] ?   ---->   a[1]();
     How  to  call   f3   function   thru   pointer  a[2] ?   ---->   a[2]();

2) Pointer variables p1 , p2 and p3  are  used   in case functions have got  different signatures

3) Array of pointers  can be used only when functions have got same signature
*/