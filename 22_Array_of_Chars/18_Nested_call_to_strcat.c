// Nested call to strcat  function
#include <stdio.h>
#include <string.h>
main()
{
	char   a[40] , b[20] , c[10];
    strcpy(a , "Sankar  ");
    strcpy(b , "Dayal  ");
    strcpy(c , "Sarma");
	strcat(a , strcat(b , c)); // "Sarma"  is  concatenated  to  array  'b'  and  inner  function  returns  "Dayal  Sarma"  and it  is  concatenated  array  'a'   by  outer  function
	printf("Array  a  :  %s \n" , a);  // Sankar   Dayal  Sarma
	printf("Array  b  :  %s \n" , b);  // Dayal  Sarma
	printf("Array  c  :  %s \n" , c);  //  Sarma
}



// Nested  function  calls  leads  to  error  in  case  strcat  is  void  function
