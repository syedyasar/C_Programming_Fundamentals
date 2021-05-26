//  Variable  Vs  macro
#include <stdio.h>
#define  A  5   //  'A'  is  macro   with  value  5
main()
{
	int   a   =  5;   // 'a'  is  variable  with  value  5
	a++;  // variable  'a'  is  modified  to  6
	//A++;  //  Error  becoz  value  of  macro  can  not  be  modified
	printf("%d\n" , a);  //  6
	printf("%d\n" , A);  //  5
	printf("%u\n" , &a); // Address  of  variable  'a'  --->   may  be  1000
	//printf("%u\n" , &A); //  Error  becoz  macro  is  not   a  memory  location  and  hence  it  has  no  addresss
}
/*
	                 Variable																						Macro
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1) int  a =  5;																					1)  # define  A   5

2) It  is  represented  in  memory  and  hence  it  has	address	2) It  is  not  represented  in  memory  and 
    Therefore  &a  is  valid																   hence it  has  no   address.  Therefore  &A   is  invalid

3) It can be modified i.e. a++ is valid												3) It can not be modified  i.e.  A++ is invalid
																										         becoz  macro is a  symbolic constant

4) Variable name is  usually in lower case letters						4) Macro name is usually in capital letters
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/