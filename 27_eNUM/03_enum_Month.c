// Find   output
#include <stdio.h>
enum  month  {Jan = 1 , Feb , Mar , Apr , May , June , July , Aug , Sep , Oct , Nov , Dec}; // Values  of  enumerators  are  1 to  12
main()
{
	enum  month  m = Oct; // 'm'  is  variable of  type  enum  month
	switch(m) // case  Oct  is  executed  becoz  m = Oct
	{
		case Jan:			printf("January\n");
                                break;
		case Feb:			printf("February\n");
                                break;
		case  Mar:		printf("March\n");
                                break;
		case Apr:			printf("April\n");
                                break;
		case May:		printf("May\n");
                                break;
		case June:		printf("June\n");
                                break;
		case  July:		printf("July\n");
                                break;
		case Aug:		printf("August\n");
                                break;
		case Sep:		printf("Sepetember\n");
                                break;
		case Oct:			printf("October\n");
                                break;
		case  Nov:		printf("November\n");
                                break;
		case  Dec:		printf("December\n");
                                break;
	}
}



/*
1) enum  provides  more clarity   and  better  readability  like  macros

2)  #define  Jan   1
	 #define  Feb   2
	 ...
	 #define Dec  12

3) If  there  are  too   many  macros ,   enum is used  as  an  alternative

4)  The  above  12  lines  can  be  reduced  to   a  single   line  like
     enum   month   {Jan = 1  ,  Feb  ,  Mar  ,  ....... Dec};
*/
