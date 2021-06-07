//  Join  date , month and  year  to form a  string
#include <stdio.h>
main()
{
	int  d = 15 , y = 1947;
	char  m[] = "Aug";
	char  a[20];
    sprintf(a , "%d - %s - %d",  d , m , y); //  writes  values  of  d , m , y  to  array  'a' along  with   hyphens
	printf("Array  a  :  %s \n" , a); // 15 - Aug - 1947
}



/*
1) Source of  sscanf  is   string (or) char  array  and   target is  variables

2) Source of  sprintf  is  variables  and  target  is  array(char array)

3) sscanf  divides  string into   tokens  and  sprintf  joins tokens to form a string
*/
