// Print  outputs  in   colors
#include  <conio.h>
#include  <stdio.h>
main()
{
	//textcolor(RED);
	cprintf("C  PROGRAMMING");  // prints  string  in  RED   color
	printf("\n");
	//textcolor(GREEN + BLINK);
	cprintf("SRINIVAS  COMPUTER  INSTITUTE"); // prints string  in  GREEN  color  and  it  is  blinking
	printf("\n");
	//textcolor(BLUE);
	cprintf("KHAIRTABAD"); // Prints  string  in  BLUE  color
}

/*
1) textcolor()  function  is   used  to  specify  color

2) It is  defined  in  <conio.h>  file

3) cprintf()  function  is  used  to  print  text  in  the  specified  color

4) textcolor  function  must  be  used  before  cprintf

5) If  it  is  not  used,  text  is  printed  in  default  color  white

6) cprintf  is  defined  in  <stdio.h>  file

7) RED , GREEN , BLUE , BLINK  are  predefined  macros  in  <conio.h>  file

8) There  are   256  colors  in  the  range  0  to  255

Note:
gcc  compiler  does  not  support  cprintf   function
*/
