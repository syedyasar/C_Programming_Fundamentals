// Identify error
#include <stdio.h>
void  f1();
main()
{
	extern  int  a; 
	//extern  int  b = 50;  //  Error   becoz  variable  can  not  be  initialized  when  extern  is  used
	int  x  = 60; 
	f1();
}
int a = 20; 
int b = 30;
int c = 40;
void f1()
{
	extern  int   x;  //  Error  becoz  'x'  is  local  to  main  function 
	printf("%d\n" , x);
}


/*
1) Variable    'x'  is  local  to  main  function  and    function  f1  can  never  use  variable  x.

2)  extern  can  be  used  only  for  Gv's  but  not  for  Lv's

3)  To  use  extern,  variable  must  be  global  elsewhere

                      int      b                                                           extern  int  b
------------------------------------------------------------------------------------------------------------------------------------------------------------
1)  It  is  Gv  definition											1)  It  is  Gv  declaration

2)  variable  b  is  created										2)  variable  b  is  not  created
																				      i.e.  variable  b  is  already  created     elsewhere  and 
																					  same	  variable  is  used  by  the  current 	function

3)  Memory  is  allocated  to  variable  b(4B)		 	3)  No  memory  is  allocated

4)  int  b = 25;  ---> ok                                               4)  extern  int  b = 25;  ---> Error
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
1)  extern   int   b  =  25 ;   ---->  Error

2)  extern  int   b;
     b = 25;  ---> Okay  and  variable  'b'  is  modified  to  25
*/
