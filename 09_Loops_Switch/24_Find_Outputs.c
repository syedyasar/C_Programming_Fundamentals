// Find  outputs
#include <stdio.h>
main()
{
	int  i , j;
    for(i = 1 ; i <= 3 ; i++)  //  m    times
    {
        for(j = 1 ; j <= 4 ; j++)  // n   times
               printf("%d    \t   %d  \n" , i , j); //  
        printf("Hello\n");
    }
    printf("Bye\n");
}


/*
1) for loop in for loop is called nested for loop

2) If outer loop is executed m times and inner loop is executed n times,
     stmts of inner loop are executed m*n times,
     stmts of outer loop are executed m times,
     stmts outside outer loop are executed only  once

3) Inner loop execution is fast and outer loop execution is slow


4)   for(h = 0 ; h <= 23 ; h++)
      for(m = 0 ; m <= 59 ; m++)
      for(s = 0 ; s <= 59 ; s++)
      {          
      }
      inner most loop is executed 24*60*60 times
      outer loop is executed 24*60 times
      outer most loop is executed 24 times
*/
