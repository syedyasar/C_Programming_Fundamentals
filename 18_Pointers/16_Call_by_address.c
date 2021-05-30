// Call By  Address  demo  program
#include <stdio.h>
void  change(int*  , int*); // Function  prototype  is  a  replica  of  function header
main()
{
	int   a = 10 , b = 20;
	change(&a , &b); // addresses  of  'a'  and  'b'  are  sent  to  change  function
	printf("a  :  %d\n" , a); // 15
	printf("b  :  %d\n" , b);  //  27
}
void  change(int*   x , int*  y) // x  and  y   are  pointers  to  main  function variables  'a'  and  'b'
{
	*x =*x + 5; // a  = a + 5
	*y = *y + 7; // b  = b + 7
}



/*
Call  By  Address (CBA)
----------------------------------------
1) Sending  address  to  a  function  is  known  as    CBA

2) Formal  parameter   is  pointer  i.e.  int*    x

3) change  function  is  called  by  sending  addresses  of  a  and  b

4) They  are  copied  to  formal  parameters  x  and  y
     i.e.   int   *x = &a  and  int*   y = &b

5) x  and  y  are  pointers  to  main  function  variables  a  and  b

6)  *x  and    *y  are  modified  to  15  and  27  by  change  function

7) Modifying  *x  and  *y  is  as  good  as  modifying  main  function  variables  a  and  b
     x = &a    --->   *x = *&a = a
  	 y = &b    --->  *y = *&b  = b

8) change(&a , &b);  ---->  change  function  can  modify  values  of  a  and  b  thru  pointers  x  and  y

9) In  general,  if  address  is  sent  to  a  function,  function  can  modify  value  at  that  address

Advantage  of  CBA
--------------------------------
CBA  function  can  return  multiple  values  indirectly  without  return  statement
Eg:  change  function  is  returning  2    values  indirectly
       i.e.  15  and  27  are  returned  to  main  function  variables  a  and  b  thru  pointers  x  and  y


Note:
1)  return  stmt  is  used   to  return  single  value
     Eg:    return  25;

2)   CBA  technique  is  used  to  return  multiple  values  indirectly
      Eg:   f1(&a , &b);  ---> f1  can  return  2  values to variables a  and b  
      Eg:   f2(&a , &b , &c);  ---> f2  can  return  3  values to variables a , b   and c
      Eg:   f3(&a , &b , &c , &d);  ---> f3  can  return  4  values to variables a , b , c    and d
*/
