// Display  current  date , time , file name and line number
#include <stdio.h>
main()
{
    printf("%s\n"  ,  __DATE__);  //  current  date ---> Mar 4  2021
    printf("%s\n" ,  __TIME__); // current time  ---> 21:39:40
	printf("%s\n" , __FILE__); // current  file  name  ---> p12a.c
    printf("%d\n" , __LINE__);  // current line  number ---> 8
}


/*
1) __DATE__ , __TIME__ , __FILE__ , __LINE__ are predefined macros in <stdio.h>

2) Macro  name is __DATE__  but  not  DATE
*/

