// Find   outputs
#include <stdio.h>
#include <conio.h>
main()
{
	printf("Hyd\n");
	getch();  // next statement is  not  executed unless  user  strikes a  key
    printf("Sec\n");
	getch(); // next statement is  not  executed unless  user  strikes a  key
	printf("Cyb\n");
}


/*
1) Program  execution  is  temporarily  suspended  when  getch  and  scanf   are    executed.

2) Next  statement after  getch  is executed    only  after  user  strikes  a  key

3) getch  is  used   to  view  results,  page  by  page,  when  there  are  too  many  results
*/