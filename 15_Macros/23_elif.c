//  same  program   with  #elif
#include <stdio.h>
#define A  40
main()
{
	#if  A == 10
	    printf("Hyd\n")
    #elif  A == 20
		printf("Sec\n")
    #elif   A == 30
        printf("Cyb\n")
    #else
        printf("India\n");
	#endif
	printf("Bye\n");
}


/*
1) #if      cond1
	    	stmts    --->   They  are  compiled  when  cond1  is  true
    #elif  cond2
      		stmts   ---->  They  are  compiled  when  cond1  is  false  and  cond2  is  true
    #elif  cond3
      		stmts   --->   They  are  compiled  when  first  2  conditions  are  false  and  cond3  is  true
    #else
      		stmts  ---->  They  are  compiled  when  all  the  3  conditions  are  false
    #endif
    stmts  --->  They  are  always  compiled  becoz   they  are  outside  #endif

2) #elif  is   used    as  an  alternative  to  #else  and  #if
    i.e.   #else  +  #if  =  #elif

3) #endif  is  needed  for  every  #if  but  not  for  #elif

*/