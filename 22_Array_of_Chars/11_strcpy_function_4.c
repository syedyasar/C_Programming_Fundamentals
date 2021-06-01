// strcpy   function demo program
#include <stdio.h>
#include <string.h>
main()
{
	char  a[]  = "Sankar Dayal Sarma" ,  b[] = "Rama Rao";
	strcpy(a + 7 ,  b + 5);  // string  at  address  b+5  is  copied  to  a+7  --> Rao\0   is   copied  to   a+7   replacing  Daya
	printf("%s\n" ,  a);  // string  in   array   a  --->  Sankar   Rao
	printf("%s\n" , b); //  string  in  array  b   ----> Rama  Rao
}


/*
           a   a+1  a+2  a+3  a+4   a+5   a+6   a+7  a+8   a+9     a+10    a+11  ........
a   -->  S   a        n      k       a       r                  D     a       y           a         l        S   a   r  m   a   \0


             b      b+1   b+2    b+3   b+4    b+5    b+6    b+7    b+8
b  --->    R        a      m        a                   R       a        o        \0


1)  "Daya"  is  replaced with "Rao"

2) "l  Sarma"   remians  unchanged  but  not  printed  becoz  it  is  after  '\0'
*/
