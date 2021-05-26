//Find outputs
#include <stdio.h>
#define A 15  // 'A'  is  macro  with  value  15
main()
{
	#if   A < 10  //  15  < 10  ---> false
		printf("Hyd\n")   ;// No  error   even  though  there  is  no  semicolon  becoz  they  are  not  compiled
	    printf("Sec\n")
	    printf("Cyb\n")
    #else
        printf("One\n");
	    printf("Two\n");
	    printf("Three\n");
	#endif
	printf("Bye\n");
}


/*
									if																					#if
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
1) if (cond)																				1)  #if    cond
    {																									  	   .....
		....																						 #else
    }																											.....
	else																					         #endif
	{
		....
	}

2) ()  are  mandatory  for  cond												2)  ()  are  optional  for  cond

3) {}  are  mandatory  when  there  are  multiple  stmts		3)  {}  are  optional  even  though  there are  multiple
																									 statements

4) There  is  no  endif													         	4)  #endif  is  mandatory  for  every  #if

5) Processed  at  run  time														5)  Processed  at  compile  time

6) Statements  inside  if  are  executed  only  when	            6)  Staments  between  #if  and  #else  are  compiled
    cond  is  true									                                          only  when cond  is  true

7) Statements  inside  else  are  executed  only  when	   7) Staments  between   #else  and  #endif  are  compiled
    cond  is  false																	       only  when cond   is  false

8)  It  is  conditional  execution											   8)  It  is  conditional  compilation
*/

