// kbhit  function  demo  program
#include <stdio.h>
#include <conio.h> //  kbhit  function
main()
{
	while( !kbhit()) //  Loop  is  executed  until   user  strikes  a  key
			printf("Hello\n");
	printf("Bye\n");
}


/*
kbhit()  function
---------------------------
1) kbhit()  function  returns true when user  strikes  a key and false otherwise

2) It is defined in <conio.h> file  (console  input   output  header  file)

3) The above while loop is executed  continuously   as long as user does not press any key

4) Control goes out of the loop the moment user strikes a key

5) kbhit()  function   is   used   to design a screen saver program
*/