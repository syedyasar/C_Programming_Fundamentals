//  islower  function  demo  program
#include <stdio.h>
#include <ctype.h>
main()
{
	printf("%d \n" ,  islower('a')); // Non-zero  becoz   'a'  is  lower  case  alphabet
	printf("%d \n" ,  islower('A'));  // 0  becoz   'A'  is   not   lower  case  alphabet
	printf("%d \n" ,  islower('7'));  // 0  becoz   '7'  is   not   lower  case  alphabet
	printf("%d \n" ,  islower('$'));  // 0  becoz   '$'  is   not   lower  case  alphabet
	//printf("%d \n" ,  islower("a"));  //  Error   becoz  parameter  can  not  be  string
}
 
// islower   function  returns  true  when  character  is  lower  case  alphabet  and  false  otherwise
