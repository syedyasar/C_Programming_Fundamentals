// strcpy   function demo program
#include <stdio.h>
#include <string.h>
main()
{
	char  a[20];  //  Array  contains  garbage  string
	printf("%s \n" , a); //  Garbage  string
	printf("%s\n" , strcpy(a , "Rama Rao"));   // "Rama  Rao"  is   copied  to   array   'a'   and   function   returns   "Rama   Rao"
	printf("%s \n" , a); //  Rama  Rao
	printf("%d\n" , strlen(a)); 
	//a = "Rama Rao"; //  Error  becoz  address  of   array   can  not  be  modified
}



/*
strcpy()   function
-------------------------------
1) strcpy  function  copies  a  string  into  array  and  returns  same  string.

2) Return  type  is  char*   becoz   string  is  returned

Note:
strcpy(a , "Rama  Rao")   is   an   alternative  to  a = "Rama  Rao"
*/
