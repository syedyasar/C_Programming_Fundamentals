// Find  outputs
#include <stdio.h>
main()
{
		while(1) //  infinite  loop
				printf("Hello\n");  //  executed  infinite  number  of  times
        printf("Bye\n");   // Not  executed  due  to  infinite  loop
}


/*
Infinite Loop
----------------------
1)  When  for,while  and  do..while  condition  is  always  true,  loop  becomes  infinite.

2)  Statements  inside  loop  are  executed  infinite  number  of  times

3)  Statements  outside  the  loop  are  never  executed

4)  Avoid  infinite  loop

***5)  Ensure  that  condition  becomes  false,  at  least  after  few  iterations  (if  not  immediately)

Note:
while(true)  is  okay  provided  <stdbool.h>  is  included
*/