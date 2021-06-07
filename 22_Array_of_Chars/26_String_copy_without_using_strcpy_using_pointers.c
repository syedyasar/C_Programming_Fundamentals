// write a function for string copy without strcpy
// using  pointers
#include <stdio.h>
void copy(char*   y , char*   x)  //  y  and  x   are  pointers   to  main  function  arrays  b  and  a
{
	char  *p1 = x; // p1  points  to  1st  character  whose  address  is  'x'
	char*  p2 = y; // p2  points  to  1st  location whose  address  is  'y'
	while(*p1 != '\0')  // Each  character  of  1st string  is  copied  to 2nd  string  until  '\0'
	{
			*p2 = *p1;  // Character  is  copied
			p1++; // moves  pointer  p1  to  next  location
			p2++; // moves  pointer  p2  to  next  location
	}
	*p2 = '\0';  // '\0'  is  appended  to  2nd  string
}

main()
{
	char  a[40] , b[40];  //  2  arrays  are created
	printf("Enter  any  string :  ");
	gets(a);  // Reads  string  into  array  'a'
	copy(b , a); // copies string  from   array  'a'  to  'b'
	printf("b :  %s \n" , b); // String in  array  'b'
}
