
// char  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	char   ch  =  'g'; //  ch  is  variable of  type  char
	printf("ch : %c \n" , ch); //  ch :   g
	printf("%d \n"  , sizeof(ch)); // 1 byte
	printf("%d \n"  , CHAR_MAX); // 2 ^ 7 - 1 = 127
	printf("%d \n" , CHAR_MIN);  // -2 ^ 7 =  -128
	ch = 128; // max value + 1  is  minimum
	printf("%d \n" , ch); // -128
	ch = -129; // minimum value - 1 is  maximum
	printf("%d \n" , ch);  //  127
}



/*
char
--------
1) It  takes  1B  of  memory  space  i.e. 8  bits.
    Eg : 1010 0101

2) First  bit  is  sign  bit  and   remaining  7  bits  are  magnitude  bits.

3) Sign  bit  is  0  ---->   +ve  magnitude  and
    Sign  bit  is  1 ---->   -ve  magnitude.

4) Maximum value   of  character  is  2 ^ 7 - 1 = 127   and
   Minimum   value   is  -2 ^ 7 = -128

5) CHAR_MAX  and   CHAR_MIN   are  maximum  and  minimum  values  of  character

6) They are predefined  macros  in  <limits.h>  file

7) char      ch;  ---->      variable  ch  can  hold  any  value  between  -128  and  127

8) Format  is   %c
*/

