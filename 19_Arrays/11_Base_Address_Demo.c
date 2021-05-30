// Base  Address demo  program
#include <stdio.h>
main()
{
	int  a[4];  //  since  array  name  is   'a' , base  address  is  also  'a'
	int *p;
	p++;  // valid  and   pointer  can  be  modified 
	//a++; // Invalid  becoz  base  address  can not  be  modified
}

/*
Base  Address(Starting  address)
-------------------------------------------------------
1)  Address  of  first  location  in   array  is  called  base  address

2)  Every  array  name  is  base  address  of  that  array

3)  If  array  name  is  'a',  base  address  is  also  'a'

4)  Base  address  can  not  be  modified

5)  It  acts  like  a  constant  pointer

6) Pointer  can  be  modified  but  not  base  address

7)  int    a;    --->  Address  of  variable  is  &a
     int    *p;  --->  Address  of  pointer  is  &p
     int    x[5];  --->  Address  of  array  is  x   itself  (&x   and  &x[0]  is  also  okay)

8)  Array  name  itself  is  address and  &  is  not  required  for  arrays

9)  &a , &p  and  x  can  not  be  modified.

10)  In  general,  addresses  can  not  be  modified
*/