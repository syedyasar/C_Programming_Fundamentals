//Find outputs
#include <stdio.h>

#define A  10
main()
{
	#ifdef    B // false  becoz  macro  'B'  does  not  exist  
	     india("Macro B exists\n")  // ;  is  optional  becoz  statement  is  not  compiled
    #else
        printf("Macro B does not exist\n");
	#endif
	printf("Bye\n");
}

