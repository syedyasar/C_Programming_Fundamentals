// strcat   function demo  program
#include <stdio.h>
#include <string.h>
main()
{
	char  a[20];
	printf("%s \n" , a); //  Garbage  string  becoz  array  'a'  is  not  initialized
	strcpy(a , "Hyder");
	printf("%s \n" , a); //  string in  array   a   --->   Hyder
	printf("%s \n" , strcat(a , "abad"));  // "abad"  is  concatenated  to   array   'a'  and   Function  returns  "Hyderanad"   --->   Hyderabad
	printf("%s \n" , a); //  string in  array   a   --->   Hyderabad
}

/*
1) strcat  function  is  used  to  concatenate  2  strings  and  returns  join  of  the  2  strings.

2) Return  type  is  char*   for  strcat    function

3) "Hyder"  and  "abad"  are  joined  to  form  "Hyderabad"

4)  a)  strcpy(a , "abad");   ---->  "abad"  is  copied   to   array   'a'  replacing  "Hyder"
     b)   strcat(a , "abad");  --->  "abad"  is  concatenated  to   array  'a'
*/










