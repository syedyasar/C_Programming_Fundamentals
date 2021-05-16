
// Find  outputs
#include <stdio.h>
main()
{
	int   x = 25;
	float  y = 10.8;
	char  ch = 'g';
	printf("%d   %g   %c  \n" , x , y , ch); // 25   10.8     g
	printf("%d \n%g \n%c \n" , x , y , ch);  // 25  <nextline> 10.8 <nextline> g < next line>
	printf("%d /n %g /n %c\n" , x , y , ch); // 25  /n  10.8  /n   g  <next line>
	printf("%d  \t  %g  \t  %c  \n" , x , y , ch);  // 25 <tab>  10.8 <tab> g <nextline>
	printf("%d  /t  %g  /t  %c  \n" , x , y , ch);  // 25 /t  10.8 /t  g  <nextline>
	printf("%d , %g , %c  \n" , x , y , ch); // 25 , 10.8 , g <nextline>
}



/*
1) '\n'   means  end  of  a  line
     i.e. Go to next line  (same as enter key)

2) '\n' is used to print values in different lines

3) '\t' means tab

4) printf   can   use  '\n' and  '\t'   but not  scanf
*/

