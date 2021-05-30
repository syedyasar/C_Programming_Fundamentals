// Call By  Value  demo  program
#include <stdio.h>
void  change(int , int); 
main()
{
	int   a = 10 , b = 20;
	change(a , b); // values  of  'a'  and  'b'  are  sent  to  change  function
	printf("a  :  %d\n" , a); // 10
	printf("b  :  %d\n" , b);  //  20
}
void  change(int  x , int  y) //x  is  10 , y  is  20
{
	x = x + 5;  //  x  is  15
	y = y + 7;  // y  is  27
	printf("x  :  %d\n" , x); //  15
	printf("y  :  %d\n" , y);  //  27
}




/*
Call-By-Value(CBV)
---------------------------------
1) Sending  value  to  a  function  is  known   as     CBV

2)  f1(25);  ----> Value  25  is  sent  to  f1  function
     f2(a);  ---> Value of variable 'a' is sent  to  f2  function
	 f3(a + b * c);  --> Result  of  expression a + b * c  is  sent  to f3  function

3) Formal  parameter   is  variable  i.e.  int  x

4) change  function  is  called  by  sending  values  of  a  and  b  i.e.  10  and  20

5) They  are  copied  to  formal  parameters  x  and  y
    i.e.  int   x = a   and   int   y = b

6) change  function  modifies  values  of  x  and  y  to  15  and  27 

7) But  changes  made  to  formal  parameters  x  and  y  are  not  reflected  to  actual  parameters  a  and  b

*8) Thus  variables  a  and  b  remain  unchanged  even  after  execution  of  change  function

9) change(a , b)  ;    ---->  change  function  can  not  modify  values  of  a  and  b

10)  In  general,  if  value  is  sent  to  the  function,  it  can  not  be  modified  by  the  called  function
*/
