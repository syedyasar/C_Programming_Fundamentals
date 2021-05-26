// Find  outputs
#include <stdio.h>
#define  A   40
main()
{
	#if  A == 10
	    printf("Hyd\n")
    #else
	#if  A == 20
		printf("Sec\n")
    #else
	#if   A == 30
        printf("Cyb\n")
    #else
        printf("India\n");
	#endif
	#endif
	#endif
	printf("Bye\n");
}


//  #endif   is   required   for  every   #if