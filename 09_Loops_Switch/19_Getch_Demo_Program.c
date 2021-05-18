// getch  demo  program
#include <stdio.h>
#include <conio.h>
main()
{
	printf("Enter any character  :  ");
	char  ch  =  getch();  //  reads  a  character  to  variable  ch
	printf("\nUser input :  %c\n" , ch);
}




/*
getch()
-------------
1) It  reads  a  character  from  keyboard  without echo

2) It  is  defined  in  <conio.h>  file (console  input  output  header  file)

3) If  input  is  7,  getch()  reads  '7'  to  variable    ch   and  7  is  not  echoed  on the screen
    If  input  is  <enter>  key,  getch()  reads  '\r'    but  not  '\n'

4)  scanf("%c", &ch);  and  ch = getch()  ----> Both  read  char  input



						scanf   function																					getch   function
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1) It  can  read  any  kind of input													1) It reads  only  char  input

2) It  echoes input																			2) It doesn't  echo  the  input

3) Press  enter  key  after  input                                                    3) Enter key is not required after input

4) scanf  reads  '\n'  when input  is  enter key                              4) getch()  reads  '\r'  when  input  is  enter key
*/