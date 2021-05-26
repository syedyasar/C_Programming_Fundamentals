// #ifdef  demo program
#include <stdio.h>
#define A  10
main()
{
	#ifdef   A  // true  becoz  macro  'A'  exists
	    printf("Macro A exists\n");
    #else
		printf("Macro A does not exist\n")  //  ;  is  optional  becoz   it  it  is  not  compiled
	#endif
	printf("Bye\n");
}


/*
1) #ifdef   is  used  to  test  whether  a  macro  exists  or  not

2) #endif  is  necessary  for  every  #ifdef

3)  #ifdef  macroname
       				stmt1
					stmt2
					stmt3
	 #else
	 				stmt4
					stmt5
					stmt6
     #endif

4) Stmts  between   #ifdef  and  #else   are  compiled  when  macro  exists   and  
    Stmts  between   #else  and  #endif    are  compiled   when  macro   does not exist  

5)  #if  demands  condition  while  #ifdef  demands  macroname
*/
