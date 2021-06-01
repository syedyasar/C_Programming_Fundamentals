// strrev  function demo  program
#include <stdio.h>
#include <string.h>
main()
{
	char  a[] = "Rama Rao";
	printf("%s \n" , strrev(a));   // String  in   array   'a'  is  reversed and  function   returns  reverse  string   --->  oaR  amaR
	printf("%s \n" , a); //  string  in   array  a   --->  oaR  amaR
	char b[] = "9000";
	printf("%s \n" , strrev(b)); // String  in   array   'b'  is  reversed and  function   returns  reverse  string   --->   0009
	printf("%s \n" , b); //  string  in   array  b   --->  0009
	char c[] = "Vamsi";
	printf("%s\n" , strrev(strrev(c)));   //  Reversed  string  is  reversed  --->  Vamsi
	printf("%s\n" , c);  //  string  in   array  c  --->  Vamsi
}

/*
1) strrev  function  reverses  string    in  array  and  original  string  is  replaced  with  reverse  string

2) Return  type  is  char*  becoz    reverse  string  is  returned
*/
