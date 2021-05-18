// Function  is  defined   but  not  called
#include <stdio.h>
void  f1()  // Function  definition
{
	printf("Hyd\n");
	printf("Sec\n");
	printf("Cyb\n");
}
main()
{
	printf("main function\n");
	printf("Back\n");
	printf("Bye\n");
}



/*
1)  Function  f1  is   not  executed becoz  it  is  not  called  from  main  function

2)  In  otherwords, simply  defining  the  function  is  not   enough   and  it  must  be  called

3)  Function  is  not  executed unless it is  called
*/