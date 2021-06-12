//  Identify  Error
#include <stdio.h>

main()
{
	struct  s1
	{
	};
}

void  f1()
{
		struct    s1    a; //  Error  becoz  struct  s1  is  local  to  main  function
}


/*
1) Since  struct   s1  is  defined  local  to  main  function,  other  functions  can  not  use  the  structure.

2) Therefore,  define  structure  globally  so  that  every  function  can  use  the  structure.

3)  In  general,  definition  must  be  global  while  declaration  is  local

4)  Define  structure  ,  union , enum , macro  and  typedef   globally

5) Declare  Variable , pointer , array , structure , union  locally
*/

