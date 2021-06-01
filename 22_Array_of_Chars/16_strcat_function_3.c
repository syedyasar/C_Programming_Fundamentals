// strcat   function demo  program
#include <stdio.h>
#include <string.h>
main()
{
	char a[] = "Rama";  // Array  size  is  4 + 1 = 5
	strcat(a , "Sita");  // "Sita"  is  concatenated   to   array   'a'
	printf("%s \n" , a);  //  string  in   array  'a'  --->  RamaSita
}

/*
1)  Array   size   is   5   but   "RamaSita"   is  9   characters

2) Error  is   not   reported   becoz   there  is  no  subscript  varification  in  'C'  language
*/
