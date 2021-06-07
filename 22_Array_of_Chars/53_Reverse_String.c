/*
Reverse  a  string and store the result in a different array
Eg : array a ---> RAMA
       array b  -> AMAR
Hint :
1) main()  ---> Reads   a   string , call   reverse  function  and display reverse string
    reverse()  ---> Creates  an   array ,  stores reverse  string  in  the  array  and  return  array
2) dont use strrev()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char*   reverse(char*   a)  // 'a'  points  to  actual  parameter  string
{
	char*   b = malloc((strlen(a) + 1 )* sizeof(char));  //  'b'  points  to  runtime  array  of  size  strlen + 1
	int  i = 0; // subscript  of  1st  char  in  the  input  string
	int  j = strlen(a) - 1;  // subcript  of  last  location  in  array  'b'
	while(a[i] != '\0') // Each  char of  array  'a'  is  copied  to  array  'b'  in  reverse  order
	{
		b[j] = a[i]; // Character  is  copied
		i++; // moves  to  next  character
		j--; // moves  to  preceding location
	}
	b[strlen(a)] = '\0';  //  Appends  '\0'  to  array   'b'
	return  b;  // Reverse  string
}

main()
{
	char  a[40]; // Array  is  created
	printf("Enter  any  string  :  ");
	gets(a); // Reads  string  into  array  'a'
	char*  c  = reverse(a); //  'c'  points  to  same  string  where  'b'  points
	printf("Reverse  string :  %s \n" , c); // that  string  where   'c'   points
	free(c);
}

