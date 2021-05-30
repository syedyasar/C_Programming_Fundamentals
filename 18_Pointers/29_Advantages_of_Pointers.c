// Advantage  of  pointer  ---> Indirect  Access
#include <stdio.h>
void  f1(int  *);
main()
{
	int  x = 25;
	f1(&x); // f1   function  can  use  variable  'x'  indirectly  by  *p
}
void    f1(int*   p) // p  points  to  main  function  variable  'x'
{
	printf("%d\n" , *p); // *p  internally access  main  function  variable  'x'
	//printf("%d\n" , x); // Error   becoz  f1   function can  not use  variable  'x'   directly  as  it  is   variable   of   main  function
}

/*
1) f1  function  is  called  by  sending  address  of  variable  'x'  and  it  is  copied  to  pointer  'p'
    i.e.  p  points  to  main  function  variable  'x'

**2) Thus  pointers  are  used  to  access  variables  of  other  functions  but  not  variables  of  same  function

3) f1(&x);    --->  f1  function  can  access  variable  'x'  indirectly  by  *p
    f2(x);  --->  f2  function  can  access  value  of  variable    but  not  variable

Advantages  of  pointer
--------------------------------------
1)  Indirect  access
2)  Fast  in  access
     ---------------------------
      int    x = 25;
      int    *p =  &x;
      printf("%d" , x);  --->  Slow  in  access  becoz   variable  name  is  used  and  o.s.  searches  for  variable  'x'  in
                                        symbol  table   and  access  becomes  slow  when  symbol  table  size  is  large

      printf("%d" ,  *p);  --->  Fast  in  access  becoz  variable  is  accessed  thru  pointer  i.e. address
      Thus  accessing  variable  thru  address  is  fast

Disadvantage
-----------------------
Security  issue  :--   If  we  know  address  of  sensitive  data  like  password , bank  balance , .... ,  
                                they  can  be  manipulated
*/

