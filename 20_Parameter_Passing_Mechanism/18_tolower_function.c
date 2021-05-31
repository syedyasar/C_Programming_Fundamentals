//  tolower  function  demo  program
#include <stdio.h>
#include <ctype.h>
main()
{
	printf("%c \n" ,  tolower('A')); // a
	printf("%c \n" ,  tolower('a')); // a
	printf("%c \n" ,  tolower('7')); // 7
	printf("%c \n" ,  tolower('$')); // $
	printf("%c \n" ,  tolower("a")); // Garbage 
}
 


/*
1) tolower  function  returns  lower  case  alphabet    when  parameter   is  upper  case  alphabet  and  same   character
    for  any  other  character

2) isupper()  and  islower()  are  conditional  functions

3) toupper()  and  tolower()  are  conversion  functions
*/
