//  isspace  function  demo  program
#include <stdio.h>
#include <ctype.h>
main()
{
	printf("%d \n" ,  isspace(' '));  //True - Non-Zero
	printf("%d \n" ,  isspace('\n')); //True - Non-Zero
	printf("%d \n" ,  isspace('\t')); //True - Non-Zero
	printf("%d \n" ,  isspace('A'));  // False - Zero
	printf("%d \n" ,  isspace('a'));  // False - Zero
	printf("%d \n" ,  isspace('7'));  // False - Zero
	printf("%d \n" ,  isspace('$'));  // False - Zero
}
 


// isspace   function  returns  true  when  character  is  ' ', '\n' or '\t' and false  otherwise

