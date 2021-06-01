// strcpy   function demo program
#include <stdio.h>
#include <string.h>
main()
{
	char  a[] = "9247";
	char  b[5], c[5];
	//c=a;  // Error
	printf("%s \n" , b); // Garbage  string  becoz  array  'b'  is  not  initialized
	printf("%s\n" , strcpy(b , a)); // String  in  array  'a'  is  copied  to  array  'b'  and  function  returns  "9247"  ---> 9247
	printf("%s \n " , b); // string  in  array  'b'  ---> 9247
	//b = a;  //  Error  becoz  address  of  array  'b'  can  not  be  modified
}



/*
1)  1st  parameter   of  strcpy  is   target  and  2nd  parameter  is  source

2) strcpy(b , a)  is  an  alternative  to b = a
*/

