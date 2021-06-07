// Compare 2 strings without strcmp()  using pointers
#include  <stdio.h>
int compare(char*  a , char  *b)
{
	char   *p1 =  a;
	char   *p2 =  b;
	while(*p1  ==   *p2)
	{
			if (*p1  ==  '\0')
					break;
			p1++;
			p2++;
	}
	if(*p1 > *p2)
		return   1;
	else
	if(*p1 < *p2)
		return  -1;
	else
		return  0;
}
main()  // same  as  previous   program
{
	char  a[40] , b[40];
	printf("Enter first string : ");
	gets(a);
	printf("Enter second string : ");
	gets(b);
	int  ans = compare(a , b);
	if(ans == 1)
			printf("1st string > 2nd string \n");
	else
	if(ans ==  -1)
			printf("1st string < 2nd string \n");
	else
			printf("Strings  are  same\n");
}
