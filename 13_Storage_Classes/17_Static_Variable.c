// static  variable  demo  program 
#include <stdio.h>
void  f1(); // Global  Function  Prototype
main()
{
	auto  int   i;
	for(i = 1 ; i <= 3 ; i++) // i = 4
				f1();
	//printf("%d\n" , a); //  Error  becoz  it  is  LSV   of   f1   function
}  // variable  'a'  is  lost
void f1()
{
    static   int    a  =  10;  // Not  executed
	printf("%d\n" , a);  // 10 ,  11 ,  12
	a++;  //  12
}  //  variable  'a'  is  not  lost


/*
Static  Variable
---------------------------
1) Static  variable  is  initialized  once   and   only  once   but   not    every   time   function  is  called
    i.e. One  time  initialization

2) Value  of  static  variable  at  the  end  of  ith  call  is  initial  value  for  (i+1)th  call

3) Static  variable  is  created  for  the  first  call  and  same  variable  is  used  by  the  remaining  calls

4) Static  variable  contains  0  by  default  when  it  is  not  initialized

5) Static  variable  is  lost  after  program  terminates  but  not  when  function  terminates

6) Static  variable  is  used  to  generate  roll  numbers , account  numbers  , emp  numbers  in  sequence
*/