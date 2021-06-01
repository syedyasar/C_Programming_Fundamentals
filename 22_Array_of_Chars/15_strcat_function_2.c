// strcat   function demo  program
#include <stdio.h>
#include <string.h>
main()
{
	char a[20] , b[10];
	printf("%s \n" , a);  // Garbage  string  becoz  array  'a'  is  not  initialized
	strcpy(a , "Srini");
	printf("%s \n" , a); // string  in   array   a   --->  Srini
	strcpy(b , "vas");
	printf("%s \n" , strcat(a , b)); // "Vas"  in   array   b  is  concated  to  array   'a'  and  function  returns  "Srinivas"
	printf("%s \n" , a); //  string  in   array   a   --->  Srinivas
	printf("%s \n" , b); //  string  in   array   b   --->  vas
}

//   "Srini"  and  "vas"  are  joined  to  form  "Srinivas"