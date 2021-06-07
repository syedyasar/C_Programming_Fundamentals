//  fflush  is  not  required  when  inputs  are  strings
#include  <stdio.h>
main()
{
	char a[20] ,  b[20];
	printf("Enter any  string  :  ");
	gets(a);
	printf("Enter any string : ");
	gets(b);
	printf("a : %s \n" , a);
	printf("b : %s \n" , b);
}
