//  Join  3  numbers  to  form  a  string
#include <stdio.h>
main()
{
	int a = 123, b = 45 , c = 6789;
	char  s[10];
	sprintf(s , "%d%d%d", a , b , c); // Writes  values  of  a, b , c  to  array  's'
	printf("Array  s  :  %s \n" , s); // 123456789
}
