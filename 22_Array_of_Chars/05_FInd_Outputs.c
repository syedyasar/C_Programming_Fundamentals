//Find outputs
#include <stdio.h>
main()
{
	char *a = "Rama Rao";
	printf("%s\n" , a);   //  String   from   address   'a'   till   '\0'  --->   Rama  Rao
	printf("%s\n" , a + 1);    //  String   from   address   a + 1   till   '\0'  --->   ama  Rao
	printf("%s\n" , a + 2);   //  String   from   address   a + 2   till   '\0'  --->   ma  Rao
	printf("%s\n" , a + 5);   //  String   from   address   a + 5   till   '\0'  --->   Rao
	printf("%u\n" , a);   //  Address  in   pointer   'a'   --->   may  be  1000
	printf("%c\n" , *a); // Character  at   address  'a'   --->   R
	printf("%c\n" , a[5]) ;  // Character  at  subscript  5   --->  R
}

/*
1)        a       a+1      a+2     a+3     a+4     a+5     a+6    a+7   a+8     --->  Addresses  of  characters
           R         a         m         a                     R         a        o       \0
           0         1         2          3          4         5         6        7        8

2)  printf("%s" , address of the string);  --->  Address is not displayed but string is displayed due to %s

3)  printf("%u" , address of the string);  --->  Address is displayed
*/