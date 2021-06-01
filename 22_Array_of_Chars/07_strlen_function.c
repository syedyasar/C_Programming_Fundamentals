// strlen  function demo program
#include <stdio.h>
#include <string.h>
main()
{
	printf("%d\n" , strlen("Rama Rao")); //  8
	printf("%d\n" , strlen("9247")); //  4
	printf("%d\n" , strlen("+-$"));  //  3
	printf("%d\n" , strlen("A2#")); //  3
	printf("%d\n" , strlen(""));  // length  of  empty  string  is  0
	printf("%d\n" , strlen(" ")); //  1
	char  a[] = "Rajesh";  // Array  contains  Rajesh
	printf("%d\n" , strlen(a)); //  6
	//printf("%d\n" , strlen(9247));  //  Error  becoz  parameter  must  be  string  but  not  integer
}



/*
strlen()   function
-------------------------------
1) strlen  function   returns  length  of  the  string

2) All  the  characters  of  the  string  are  counted   except  '\0'

3) Return  type  is  int   for  strlen   function

4) "Hyd"  contains    4  characters  but  length  is  3   becoz     '\0'  is  not  counted

5) Parameter  of  strlen  function  can  be  string   or  array  of  characters
*/