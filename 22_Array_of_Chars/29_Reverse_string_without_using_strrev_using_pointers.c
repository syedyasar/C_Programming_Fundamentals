// Reverse a  string without using strrev  using  pointers
#include <string.h>
#include <stdio.h>
void   reverse(char  *a)
{
	char  temp;
	char*  p1 = a; // p1  points  to 1st  char  of  the  string  whose  address   is  'a'
	char*   p2 = a + strlen(a) - 1;  // p1  points  to  last  char  of  the  string  whose  address   is   a + strlen - 1
	while(p1 < p2)  // Keep  swapping  until  pointers  cross  over
	{
		temp = *p1; // swap  characters  *p1  and  *p2
		*p1 = *p2;
		*p2 = temp;
        p1++;  // moves p1  to next  location
		p2--;  // moves p2  to  preceding   location
	}
}


main()  // same  as  previous  program
{
	char  a[40];
	printf("Enter  any  string : ");
	gets(a);
	reverse(a);
	printf("Reverse  string : %s \n" , a);
}
