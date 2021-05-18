// getche  demo  program
#include <stdio.h>
#include <conio.h>
main()
{
	printf("Enter any character  :  ");
	char  ch = getche();
	printf("\nUser input :  %c\n",ch);
}





/*
			getch()																							getche()
------------------------------------------------------------------------------------------------------------------------------------------------------
1)  It  reads  a  character  without  echo							1)  It  reads  a  character  after  echo

2)  char  ch=getch()															2)  char  ch=getche()
     input  :  7																		input  :    7
     7  is  not  visible  on  screen  but  getch()  reads         7  is  visible  on  screen  and  also  getche()  reads
     '7'  to  variable  ch                                                          '7'  to  variable  ch
  ------------------------------------------------------------------------------------------------------------------------------------------------------
1)  Both  getch  and  getche  are  defined  in  <conio.h>  file (console input output header file)

2) scanf(), getchar() , gets()  and   getche()  not  only  read  input  but  also  echoes  input
*/