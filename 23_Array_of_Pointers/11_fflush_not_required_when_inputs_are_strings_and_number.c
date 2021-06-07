//  fflush  is  not  required  when  inputs  are  string  and  number
#include  <stdio.h>
main()
{
	char a[20];
	int  b;
	printf("Enter any  string  :  ");
	gets(a);
	printf("Enter any number : ");
	scanf("%d" , &b);
	printf(" a : %s \n" , a);
	printf(" b : %d \n" , b);
}

