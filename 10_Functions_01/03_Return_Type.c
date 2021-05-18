//  return  type    demo  program
#include <stdio.h>
int    f1()
{
	return    25;  //  25  is   returned  to   function  calll
}
main()
{
	printf("main function\n");
	int   x =   f1();   // int  x  =  25;
	printf("%d\n" , x); //  25
}



/*
Return  type
--------------------
1) It    is  the  type  of  value  returned  by  the  function

2) If  a  function  returns  integer  value,  return  type  is  int.

3) On  the  otherhand,  If  a  function  returns   float  value,  return  type  is  float

4)  If  a  function  returns  nothing,  return  type  is  void

5) If  there  is  no   return  type,  default  is   int

6) Every  function  has   return  type
*/