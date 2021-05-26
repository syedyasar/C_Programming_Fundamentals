//  Variable  Vs  macro
#include <stdio.h>
#define  A  5   //  'A'  is  macro   with  value  5
main()
{
	const   int   a   =  5;   // 'a'  is  constant  with  value  5
	//a++;  // Error  becoz  constant  can  not   be  modiifed 
	//A++;  //  Error  becoz  value  of  macro  can  not  be  modified
	printf("%u\n" , &a); // Address  of  constant  'a'  --->   may  be  1000
	//printf("%u\n" , &A); //  Error  becoz  macro  is  not   a  memory  location  and  hence  it  has  no  addresss
}

/*
What  is   the  difference  between  
const   int  a  = 5;
       and
#define   A    5

Ans :  &  can  be   used   for  constants  but  not  for  macros
          i.e. &a  is   valid  but  &A  is  invalid

*/

