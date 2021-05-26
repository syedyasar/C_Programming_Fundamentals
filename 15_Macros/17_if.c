
// #if  demo  program
#include <stdio.h>
#define  A  5 // 'A'  is  macro  with  value  5
main()
{
	#if  A  <  10  //  5 < 10  ---> true
	    printf("Hyd\n");
	    printf("Sec\n");
	    printf("Cyb\n");
    #else
		printf("One\n") //  No  Error  even  though  there  is  no  semicolon  becoz  they  are  not  compiled
	    printf("Two\n")
	    printf("Three\n")
	#endif
	printf("Bye\n");
}



/*
1) #if   is  used  for  conditional  compilation

2) { }  are  not  required  even  though  there  is    more  than  one  statement  in   #if

3) #if   Condition    need  not  be   in  ()

4) #endif   is  mandatory    for  every  #if

5) #if  is  processed  at  compile  time  and   'if'   is   processed   at   run  time

6) #if    cond
       		stmt1;
    		stmt2;
    		stmt3;
	#else
			stmt4;
			stmt5;
			stmt6;
	#endif
	stmt7;

7) Stmts  between  #if  and   #else   are   compiled  when  cond  is  true

8) Stmts  between  #else  and   #endif    are   compiled  when  cond  is  false

9) stmt7  is  always  compiled  becoz  it  is  outside  #if
*/
