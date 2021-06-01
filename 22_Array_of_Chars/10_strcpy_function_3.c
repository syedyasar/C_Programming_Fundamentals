// strcpy   function demo program
#include <stdio.h>
#include <string.h>
main()
{
	char  a[10] ,  b[10];
	printf("%s\n" , strcpy(b , strcpy(a , "Hyd"))); //  Hyd
	printf("%s\n" , a); // string  in  array   a   ---> Hyd
	printf("%s\n" , b);  // string  in  array  b   ---> Hyd
}



/*
1) Inner  most   function  copies  "Hyd"  to  array  'a'  and  returns  "Hyd".

2) It  is  copied  to  array  'b'  by  outer  function  and  again  retruns  "Hyd"

3) printf  prints  "Hyd"

4) Finally   both  the  arrays  contain  "Hyd".

5) Nested  function  calls  lead  to  error  in  case  strcpy  is  a  void  function
*/
