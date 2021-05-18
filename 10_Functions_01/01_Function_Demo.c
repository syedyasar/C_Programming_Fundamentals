// Function  demo  program
#include <stdio.h>
void   f1();  //  Function  Prototype
main()
{
	printf("main function\n");
	f1(); // Function  call
	printf("Back to  main  function\n");
	f1(); // Function  call
	printf("Bye\n");
}

void  f1()  // Function  definition
{
	printf("Hyd\n");
	printf("Sec\n");
	printf("Cyb\n");
}

/*

1) Program is  a  collection  of   functions  and  function is a  collection  of  statements

2) Functions  of  the  program  can  be  defined  in  any  order  but  execution always  starts  at    main  function

3) Writing  code(i.e. Statements)  inside   the  function  is  nothing  but  defining  the  function

4) Function  call   is  nothing  but  branching  i.e. Go  to  the  function , execute  the function  and  then
    come  back

5) Function  prototype  is  required when  function  is  defined afterwards

*/
