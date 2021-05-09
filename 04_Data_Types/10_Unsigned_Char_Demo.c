// unsigned char  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	unsigned char   ch  =  'g'; //  ch  is   variable  of  type  unsigned  char
	printf("ch : %c \n " , ch);   //  ch :  g
	printf("%d\n" , sizeof(ch)); // 1  byte
	printf("%d \n" , UCHAR_MAX);  // 2 ^ 8 - 1 = 255
	//printf("%d \n" , UCHAR_MIN); //   Error  becoz  macro  does  not  exist  
	ch = 256; // max value + 1 is  minimum value
	printf("%d \n", ch);  // 0
	ch = -1; // min value - 1 is  maximum
	printf("%d \n", ch);  //  255
}

/*
unsigned  char
------------------------
1) It  takes  1B  of  memory  space    i.e.  8  bits.

2) All  8  bits  are  magnitude  bits  and  there  is  no  sign  bit.

3) Maximum  unsigned  character    is  2 ^ 8 - 1 = 255
    and  Minimum   unsigned    character   is  0

4) -ve  numbers   can  not  be  represented.

5) UCHAR_MAX  is  maximum  value  of unsigned  char  and  no  macro  for  minimum  value  becoz  it  is  0

6) unsigned  char      ch;  --->    variable  ch  can  hold  any  value  between  0  and  255

7)  Format  is   %c

          Data  Type                                   Size                            Format                     Range
         ------------------------------------------------------------------------------------------------------------------------------------------
             char                                      1B                              %c                      -128  to  127
             unsigned  char                           1B                               %c                       0  to  255
*/
