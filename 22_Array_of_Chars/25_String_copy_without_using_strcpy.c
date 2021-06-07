// write a function for string copy without strcpy
//  Using  subscripts
#include <stdio.h>

void   copy(char*   b  ,  char*   a) //  'b'  and  'a'  are  pointers  to  actual  parameter  arrays
{
	 int  i;
     for(i = 0  ;  a[i] !=  '\0'  ;  i++  ) // Each  char  of   array   'a'   is  copied  to  array  'b'  until   '\0'
			b[i] = a[i]; // Character  is  copied
     b[i] = '\0'; // '\0'  is  appended  to   array   'b'  --->  b[i] = a[i]  is  also  okay
}

main()
{
	char  a[40] , b[40];  // 2   arrays  are  created
	printf("Enter  any  string :  ");
	gets(a); // Reads  string  into  array  'a'
	copy(b , a); // string is  copied  from  array  'a'  to  'b'
	printf("b :  %s \n" , b); // string in  array  'b'
}
