// Nested function demo program
#include <stdio.h>
void        outer()
{
	printf("Outer function\n");
	void  inner()
	{
		printf("Inner  function\n");
	}
	inner();
	printf("End of  outer function\n");
}
main()
{
	printf("Begin\n");
	outer();
	printf("End\n");
	//inner();  //  Error   becoz  it  not  visible  to  other  functions
}



/*
1) Function in  function  is  called  nested function
    i.e. Defining  a   function  inside  another  function  is  called  nested function

2) Inner function is visible to outer function only  and  is  hidden  from  other  functions

3) Only  outer  function  can  call  inner  function  but  not   other functions 

*/