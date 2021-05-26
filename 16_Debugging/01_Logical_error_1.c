// Logical  error  demo  program
#include <stdio.h>
main()
{
	int  a =  10, b = 20 , c = 5, d = 1;
	printf("%d\n" , a + b / c + d);  //   10 + 20 / 5 + 1 = 10 + 4 + 1 = 15
	printf("%d\n" , (a +  b) / (c + d)); // (10+20) / (5+1) = 30 / 6 = 5
}




/*
     a+b
1)  ------    is   written as   a + b / c + d.  Hence  it  is executed as   a  +  b  / c  +   d   which  leads to  incorrecr result
     c+d                                                                                                       ----																									
																												  c
    becoz   ()  are  missing
																												  
2)  Result is  15  becoz  ()  are missing
*/