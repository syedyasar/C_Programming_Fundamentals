//  Return  by  address  
#include  <stdio.h>
int*   f1()  //   It  is   return by  address   function
{
	static    int   x = 25;
	return   &x;
} // variable  'x'  is  alive   becoz   it  is  static  variable
main()
{
	int*   p = f1(); //  p   points  to   f1  function  variable  'x'
	printf("%u\n"  ,  p);  //  Address  of  variable  'x'  (may  be  1000)
	printf("%d\n"  ,  *p);  // *p  internally   refers  to  f1  function  variable  'x'  i.e.  25
	//printf("%d \n" , x);  //   Error  becoz  main  function can  not  use   f1   function  variable  'x'  directly
}

/*
Return By  Address(RBA)
-------------------------------------------
1) If  a  function  returns  address,  it  is  known  as  Return  By  Address(RBA)   function

2) f1  function  returns  address  of  variable   'x'.  Therefore  f1  is  RBA  function

3) return  type  must  contain  *  when  function  returns  address

4) Address  of  variable  'x'  is  returned  to  function  call  and  is  assigned  to  pointer  p

5) So  'p'  points  to  f1  function  variable   'x'

6) p  is  address  of  variable   'x'  (i.e.  &x)  and  *p  is  variable   'x'  (i.e.  25)

7) If  'x'  is  not  static  variable,  *p  in  main  function  leads  to  error.
    This  is  becoz   *p  internally  refers   to    f1  function  variable   'x'  but   it    is  already  lost

8) Hence  return    address  of  static  variable  but  not  address  of  local  variable
    This  is  becoz  static  variable   is  not  lost  even  after  function  terminates

Advantage  of  RBA:
---------------------------------
Called  function  variable   can    be  accessed  by  calling  function  indirectly
i.e.  main  function  can  access  f1  function  variable   'x'  by  *p
This  is  possible  becoz   f1  function  returns  &x
*/
