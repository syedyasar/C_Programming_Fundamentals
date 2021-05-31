//  isupper  function  demo  program
#include <stdio.h>
#include <ctype.h>
main()
{
	printf("%d \n" ,  isupper('A'));  // Non-zero  becoz  'A'  is  upper  case  alphabet
	printf("%d \n" ,  isupper('a'));   // 0  becoz  'a'  is   not  upper  case  alphabet
	printf("%d \n" ,  isupper('7'));   // 0  becoz  '7'  is   not  upper  case  alphabet
	printf("%d \n" ,  isupper('$'));   // 0  becoz  '$'  is   not  upper  case  alphabet
	//printf("%d \n" ,  isupper("A"));  //  Error  becoz  parameter  can   not  be  string
}
 
//  isupper   function  returns  true  when  character  is  upper  case  alphabet  and  false  otherwise
