//  return  LV  but  not  GV
#include <stdio.h>
int  f1();
int  a = 10;  // Gv
int  f1()
{
	int  b = 20; 
	return  b;
}
main()
{
	printf("%d\n" , f1()); 
}


/*
1) return   Lv   but  not   Gv

2) Advantage   of  return  is  that   value  of  Lv  of  called  function   f1  can  be  accessed  by  calling   function  main

3) return  b;  ---> Calling  function  can  access  value  of  'b'  even  though  'b'  is  local  to  f1  function

4) return  a;   is  unnecessary  becoz  Calling  function  can  access  value  of  'a'  without  return  as      variable  'a' 
                      is  global  to  all  the  functions

Note:
1)  Calling    function  variable  value  can  be  accessed  by   called   function   through  parameter  passing

2) On the  otherhand,   callled   function  variable  value  can  be  accessed  by  calling   function   through   return
    statement
*/
