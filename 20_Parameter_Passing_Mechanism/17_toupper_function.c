//  toupper  function  demo  program
#include <stdio.h>
#include <ctype.h>
main()
{
	printf("%c \n" ,  toupper('a'));   // A
	printf("%c \n" ,  toupper('A'));   // A
	printf("%c \n" ,  toupper('7'));   // 7
	printf("%c \n" ,  toupper('$'));   // $
	printf("%c \n" ,  toupper("a"));   // Error/Warning/Garbage
}
 

/*
toupper  function  returns  upper  case  alphabet    when  parameter   is  lower  case  alphabet  and  same   
character  for  any  other  character
*/


