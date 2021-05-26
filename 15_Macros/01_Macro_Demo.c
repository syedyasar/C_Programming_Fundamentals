// macro  demo  program
#include <stdio.h>
#define  PI  3.14159  //  PI  is   a   macro  with  value  3.14159
main()
{
	float  r = 3.5;
	float  area  = PI  * r  * r;  // Preprocessor  substitutes  3.14159   whereever   macro   PI   is   called  ---> float  area = 3.14159 * r * r;
	printf("Area : %g \n" , area);// some  result
}


/*
1) Macro  is  a  value , expression or   a  group of statements

2) #define  is  used  to define a macro

3) Syntax :   #define   macroname   body

4) Macro names are usually in capital letters(convention)

5) Macro is called by its name.

7) Macro call leads to substitution.
	
8) Pre-processor substitutes 3.14159 whereever macro PI is called.

9) Substitution is made at compile time  but  not  at  runtime
  
10)  float  area = PI * r  * r   ----->   float  area = 3.14159 *  r   * r

11) Macro  has  only   2   parts
      a) Macro  definition

	  b) Macro  Call

12) There  is   no  macro  prototype

*/	
