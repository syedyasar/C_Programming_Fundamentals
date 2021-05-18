//  void  demo  program
#include <stdio.h>
void   f1()
{
	printf("Hyd\n");
	printf("Sec\n");
	printf("Cyb\n");
}
void   f2()
{
		return  25; //  Error  becoz  void  function can not  return  value 
}
main()
{
		int   x  =  f1();  //  Error  due to mismatch
		printf("" , f1());  //   Error  becoz  void  function can not be called inside  printf
}

/*
void
------
1)  If  a  function  returns  nothing,  return  type  is  void

2)  void  means  function  does  action  but  returns  nothing

3)  f1  function  does  action  such  as  Hyd, Sec  and  Cyb   are  printed  but  it  returns  nothing

4)  If  a  function  contains  no  return  statement,  return  type  is  void

5)  void  is  a  keyword

6)  int  x  =  f1();   ----> LHS  type  is  int  and   RHS  type  is  void  and it  leads  to  Error  due  to  mismatch

7) LHS  variable  is  not  allowed  for  void  function
*/