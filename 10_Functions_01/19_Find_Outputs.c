// Find outputs
#include <stdio.h>
void  f2(); 
void  f1()
{
	printf("f1  function begin\n");
	f2();
	printf("f1 function end\n");
}
void  f3()
{
	printf("f3  function begin\n");
	printf("f3 function end\n");
}
main()
{
	printf("main  function begin\n");
	f1();
	printf("main  function end\n");
}
void  f2()
{
	printf("f2  function begin\n");
	f3();
	printf("f2 function end\n");
}


/*

1) Function  which  is  called  last  terminates  first.

2) O.S.  calls  main  function ,  main  calls  f1,  f1  calls  f2    and  f2  calls  f3

3) Thus  functions  are  called  in  the  order  main() , f1() , f2()  and  f3()
    but  they  are  terminated  in  the  reverse  order

4) Execution  starts  at  main  function  and  finally  terminates  at  main  function

5) It  is  end  of  the  program  after  main  function  terminates
*/
