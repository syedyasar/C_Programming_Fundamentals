// Save in  03_Command_Line_Argument.c  file
// Command  line  arguments  demo  program
#include <stdio.h>
main(int   argc , char*    argv[])
{
	int  i;
	printf("argc  : %d \n" , argc);
	for(i = 0 ; i <= argc - 1 ; i++)
		printf("argv [ %d ] : %s \n" , i , argv[i]);
}

/*
1) prog3  25  10.8  "Rama  Rao"   g    True
        0      1      2            3              4       5

2) prog3  25  10.8   Rama  Rao   g   True
        0      1      2        3         4     5      6

3) prog3
       0
*/
