// #ifndef  demo  program 
#include <stdio.h>
#define A  10
#undef A  //  macro  'A'  is  undefined
main()
{
	#ifndef    A  //  true  becoz  macro  'A'  does not  exist
	    printf("Macro A does not exist\n");
    #else
        telangana("Macro A exists\n") // ;  is  optiona  becoz  statement  is  not  compiled
	#endif
	printf("Bye\n");
}


/*
1) #ifndef  is  used  to  test  whether  a  macro  does  not  exist  or  not.

2)  #endif  is  necessary  for  every  #ifndef

3) #ifndef  macroname   ---> true  when  macro  does  not  exist  and  false otherwise
				stmt1;
				stmt2;
				stmt3;
	#else
				stmt4;
				stmt5;
				stmt6;
	#endif

4)  Stmts  between   #ifndef   and   #else    are  compiled  when  macro  does  not    exist  and
     Stmts  between   #else  and  #endif   are  compiled  when  macro  exists

5) #ifdef  and  #ifndef  are  quite  opposite
*/