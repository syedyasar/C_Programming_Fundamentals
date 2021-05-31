//  isalnum  function  demo  program
#include <stdio.h>
main()
{
	printf("%d \n" ,  isalnum('a'));    // True - Non-Zero
	printf("%d \n" ,  isalnum('A'));    // True - Non-Zero
	printf("%d \n" ,  isalnum('7'));    // True - Non-Zero
	printf("%d \n" ,  isalnum('$'));    // False Zero
	printf("%d \n" ,  ! isalnum('$'));  // True - Non-Zero   (Not of False Zero)
}
 
/*
1)  isalnum   function  returns  true  when  character  is  alphabet or digit   and  false  otherwise

2)  isalpha()  +  isdigit()  =isalnum()

3) char    ch = '.';
    ! isalnum(ch)  is  true  when  ch  is  special  char  and  false  otherwise
*/
