// How  to  call  printf  function  thru  pointer
#include <stdio.h>
main()
{
	int  (*p)(char * , ... );  //  p   can   point  to   that   function  which   has  string  parameter  and  returns  an   integer
	p = printf;  //  p   points  to  printf  function
	p("Hyd\n"); //  printf   function  is   executed  becoz  'p'  points  to  printf
	p("%d \t %g \t %c \n " , 25 , 10.8 , 'g'); //  printf   function  is   executed  becoz  'p'  points  to  printf
}



