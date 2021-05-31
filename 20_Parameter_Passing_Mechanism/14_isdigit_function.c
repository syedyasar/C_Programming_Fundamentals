//  isdigit   function  demo  program
#include <stdio.h>
#include <ctype.h>
main()
{
	printf("%d \n" ,  isdigit('7'));  // Non-zero  becoz  '7'  is  a  digit
	printf("%d \n" ,  isdigit('A')); //  0   becoz  'A'  is  not  digit
	printf("%d \n" ,  isdigit('a')); //  0   becoz  'a'  is  not  digit
	printf("%d \n" ,  isdigit('$'));  //  0   becoz  '$'  is  not  digit
	printf("%d \n" ,  isdigit(7)); // 0   becoz  7  is  Ascii  value  of  a  character  which  is  not  digit
	printf("%d \n" ,  isdigit(48));  // Non-zero  becoz  48  is  Ascii value  of  '0'  and  '0'  is  a  digit
	printf("%d \n" ,  isdigit(57));   // Non-zero  becoz  57  is  Ascii value  of  '9'  and  '9'  is  a  digit
	//printf("%d \n" ,  isdigit("7")); //  Error  becoz  parameter  can  not  be  string
}
 
//  isdigit    function  returns  true  when  character  is  digit  '0'  to  '9'    and  false  otherwise
