// How  to  read password ?
#include <stdio.h>
#include <conio.h>
main()
{
    char ch;
    printf("Enter  password : ");  //  Hyd<enter key>
	while(  (ch = getch())   !=  '\r' )  // password  is  read  charwise  until   user  strikes  enter  key
			printf("*");
	printf("\nEnd\n");
}

/*
1) getch() reads '\r' when input is enter key  (but not '\n')

2)    Iteration       getch()  reads           condition
       ---------------------------------------------------------------------------------
	         1                  'H'                   'H' != '\r'  ---> true
	         2                  'y'                   'y' != '\r'  ---> true
	         3                  'd'                   'd' != '\r'  ---> true
	         4                  '\r'                   '\r' != '\r'  --->  false
*/
