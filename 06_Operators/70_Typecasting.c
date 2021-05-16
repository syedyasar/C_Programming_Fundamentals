//  Implicit  TypeCasting   demo  program
#include  <stdio.h>
main()
{
	int  a  = 10.8f;  // float  is  converted to  int ,  value  of  'a'  is  10  and 0.8  is  ignored
	float  b  =  25; // int  is  converted to  float  and 'b'  is  25.0
	char  ch  =  65; // int  is  converted to  char  and  ch   is   'A'  becoz  65 is  Ascii  value of 'A'
	int  sum  =  'Z'; //  char   is  converted to   int   and   sum  is  90  (Ascii  value  of  'Z'  is  90)
	printf("a  :  %d  \n" , a); // 10
	printf("b  :  %f  \n" , b);  //  25.000000
	printf("ch  :  %c  \n" , ch);   //  A
	printf("sum  :  %d  \n" , sum);  //  90
}

/*
Typecasting
-----------------------
Conversion    of    a    value    to    a    different    type    is    called    typecasting
Eg  :    Conversion    of    int    to    float ,   float    to    int ,   int    to    char    and    so    on

Implicit    Typecasting
---------------------------------------
Typecasting    is    made    by    system
*/
