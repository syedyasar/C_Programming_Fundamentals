//  Address  demo  program
#include <stdio.h>
main()
{
	int   x; // OS  assigns  address  to  the  variable  as  soon  as  variable is declared
	printf("%u\n" , &x); //  Address  of  variable  'x'  (may be  1000)
	//&x = 2000; //  Error  becoz  address  of  the  variable can not be modified 
	x = 25; // value  of   the  variable  can  be  modified but  not  address
}

/*
Address
------------
1) Every  variable  has  an  address  except  register  variable

2) It  is  OS  which  assigns  address  to  variable  as  soon  as  variable  is  declared

3) &  operator  is  used  to  determine  address  of  the  variable
    i.e.  &variable  is  address  of  the  variable

4) Addresses  are  always  +ve  and   -ve  addresses  are  not  supported  by  the  system

5) Addresses  of  memory    locations  are  0 , 1 , 2 , 3 .... n - 1

6) %u   is  used  for  address  becoz   addresses  are  always  +ve

7) Address  of  the  variable  can  not  be  modified
    i.e.  Address  remains  same  throughout  life  of  the  variable

8)  Any  attempt  to  modify  address  leads  to  error
*/