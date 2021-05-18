// Find  outputs
#include <stdio.h>
void  f1()
{
		printf("Before  return\n");
		return;  // go  out  of  the  function
		printf("After  return\n");   //  skipped
}
main()
{
	printf("Begin\n");
	f1();
	printf("End\n");
}

/*
break  ---> go out of switch
return   ----> go  out  of  the  function
exit(0)  ----> go out of  the  program
return  can  be  used  inside  void  function  but  it  can  not  return   any  value
*/