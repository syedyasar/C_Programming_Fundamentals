// Divide  string  into  date , month and year
#include <stdio.h>
main()
{
	int  d , y;
	char  m[10];
	sscanf("15-Aug          -1947" , "%d-%s        -%d" , &d , m , &y);  //  Reads  15  to  variable  d , "Aug"  to  array  m   and  1947  to  variable  'y'
	printf("d : %d \n" , d); //  15
	printf("m : %s \n" , m);  //  Aug
	printf("y : %d \n" , y);  //  1947
}


/*
1)  sscanf("15-Aug-1947" , "%d-%s-%d" , &d , m , &y);  ---->  d  is  15 , m  is  "Aug-1947"   and  y   is garbage value  becoz  there
                                                                                                     is  no space  between  Aug  and  '-'

2)  sscanf("15-Aug    	-1947" , "%d-%s  	-%d" , &d , m , &y);  ---->  d  is  15 , m  is  "Aug"   and  y   is  1947   becoz   there  is
                                                                                                              at  least   one  space   between  Aug  and  '-'

3)  Variables  are  d  and  y,  Their  addresses   are   &d  and  &y
     Array   is   m   and  address   is  also   m (&m  is  also   okay)

*/

