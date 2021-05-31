//  isalpha  function  demo  program
#include <stdio.h>
#include <ctype.h>
main()
{
	printf("%d \n" ,  isalpha('A')); //  Non-zero   becoz  'A'  is  alphabet
	printf("%d \n" ,  isalpha('a')); //  Non-zero   becoz  'a'  is  alphabet
	printf("%d \n" ,  isalpha('7'));  //  0   becoz  '7'  is   not   alphabet
	printf("%d \n" ,  isalpha('$'));   //  0   becoz  '$'  is   not   alphabet
	//printf("%d \n" ,  isalpha("A"));   //  Error  becoz   parameter  can  not  be  string
}
 
//  isalpha  function  returns  true  when  character  is  alphabet  and  false  otherwise
