// Running  some  other  program  from  our  program
#include <stdio.h>
main()
{
        printf("Program 2\n");
        int  x = system("01_Printf.exe");
		if (x == 1)
			printf("01_Printf.exe does not exist\n");
        printf("Bye\n");
}

/*
1) compile  prog1.c  so  that  it  is  converted  to  prog1.exe

2) Compile  and  run  the  above  program , it  inturn  runs  some  other  program  like  prog1 . exe
*/

/*
system()  function
-------------------------------
1) It  is  used  to  execute  Dos  and   Unix   commands  from   C  program

2) It  can   also  execute  exe  files

3) It  is  defined  in  <stdlib.h>

4) system("cls"); --->  Clears  screen   and  cls  is  a  dos  command
    system("dir"); --->  Prints   directory   contents   and  dir  is  a   dos  command
    system("copy  a.txt  b.txt"); --->  Copies contents  of   file  a.txt  to  b.txt  and  copy  is  a  dos  command
    system("ren  c.txt  d.txt"); ---> Renames  file  c.txt  to d.txt   and  ren  is  a  dos  command
    system("prog1.exe"); -->  Executes   prog1.exe   file
    system("prog1"); --->  Default  exetension  is  exe
    system("prog1.c");  --->   Error   becoz   c  file  can  not  be  executed
    system("c:\\sri\\prog1.exe");  --->  executes  exe  file  of   a  different  directory

5) system  function  returns  0   when  operation  is  succesful  and  1  otherwise
*/
