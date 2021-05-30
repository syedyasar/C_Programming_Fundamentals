// Reverse a string
#include <stdio.h>
void  rev(); // Function  prototype
main()
{
	printf("Enter any string : ");   //  HYD <enter key>
	rev();
	printf("\n");
} // Nothing  happens


void   rev()
{
	char  ch; //  Not  executed
	if((ch = getchar()) != '\n')  
	{
			  rev();
			  printf("%c" ,  ch);  //   moves  to  next  line
	}
}  //    2000  is  deleted  from  stack




