// Parameter   passing   is  only  for  LV's  but  not  for  GV's
#include  <stdio.h>
void  f1(int);
int  a = 10;  // Gv
main()  
{
	int  b = 20;  // LV
	f1(b);
}
void  f1(int   x)  
{
	printf("%d\n" , x); // 20
}



/*
1) Send  Lv  as  a  parameter   to  the  function  but  not  GV
    Eg:  f1(LV);  --->  ok
           f2(Gv);  ---->  unnecessary

2) Advantage   of  parameter  passing  is  that  value  of   Lv  of  calling  function  main  can  be  accessed 
    by  called   function  f1
     Eg  :  f1(b);  ---->  f1  function  can  access  value  of  b  even  though  b  is  local  to  main  function  and 
                                this  is  possible   becoz  value  of  'b'  is  sent   to  f1  function 

3) f1(a)  is  unnecessary  i.e.   Don't  send  Gv  to  any  function  becoz  it  can  be  used  by   all   the  functions  
    without  parameter  passing
*/
