//  \  demo  program
#include  <stdio.h>
#define  pf  printf
#define  abc  	pf("Hyd\n") ;   \
						pf("Sec\n") ;  \
	  					pf("Cyb\n");  					 
main()
{
	printf("Begin\n");
	abc;
	printf("End\n");
}



/*
1)  Macro  must  be  in same line 
     i.e. Statements of macro  can not exceed a  line

2)  \  is  used  when statements  of  macro   are    in  different   lines
     i.e. \  is  used  when  macro   continues  in  next  line

3) \  is   called  continuation operator

4)  \  is  not  substituted when  macro  is   called
*/

