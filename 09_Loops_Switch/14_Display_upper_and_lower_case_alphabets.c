// Display upper and lower case alphabets
#include<stdio.h>
int main()
{
	char  ch;
	for(ch = 'A' ; ch <= 'Z' ; ch++)
			printf("%c  " , ch); // prints  ch  where ch  varies  from  'A'  to  'Z'
	printf("\n");  //  Go  to  next  line  after  printing  upper case  alphabets
	for(ch = 'a' ; ch <= 'z' ; ch++)
			printf("%c  " , ch);
	printf("\n");
}
