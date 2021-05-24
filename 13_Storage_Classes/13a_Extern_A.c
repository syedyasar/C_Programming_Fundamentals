// Save in 13a_Extern_A.c
#include <stdio.h>
#include "13b_Extern_B.c"
int   x; // It  is  0  by  default  
void  f1();
main()
{
	printf("%d\n" , x);  // 0
	f1();
	f2();
	f3();
}
void  f1()
{
	printf("%d\n" , x);  // 0
}




/*
1)  Global  Variable of  a  file  can  be  used  by  a  different  file  by  using  extern

2)  Variable  x  is  global  to  functions  of above  file

3)  Some  other  file   can  use  global  variable  x    by  extern  int  x;

4)  But  both  the  files  must  belong  to  same  program

5)  It  is  a  single  program  divided  into  2  files

6)  Gv  of  a  program  can  not  be  used  by    a  different  program.
     This  is  because  Gv  is  lost  after  program  terminates.
*/



