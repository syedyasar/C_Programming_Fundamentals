// exit  function   demo  program
#include <stdio.h>
#include <process.h>
main()
{
	printf("Hello\n");
	exit(0); // stops  prog  execution
	printf("Bye\n");  // skipped 
}

/*
exit  function
----------------------
1)  It  stops  program  execution  and   rest  of  the  program  is  skipped

2)  Control  goes  out  of  the  program

3) exit  function  is  defined  in  <stdlib.h>  file   and   <process.h>  file

4) exit(any  number)  is  ok

5)  exit()  --->  Error  becoz  there is no parameter
*/
