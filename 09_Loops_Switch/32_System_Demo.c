//system()  function demo program
#include <stdio.h>
#include <stdlib.h>  // system  function 
main()
{
	printf("Hyd\n");
	sleep(5); // program execution is suspended  for  3 sec
	system("cls"); // Hyd  is  cleared
	printf("Sec\n");
	sleep(7);
	system("cls"); // Sec  is  cleared
	printf("Cyb\n");
}
/*
system  function
----------------------------
1) system("cls"); --->  It  clears  screen  and    cls  is  a  dos  command.

2) system  function  is  defined  in  <stdlib.h>  file.
*/
