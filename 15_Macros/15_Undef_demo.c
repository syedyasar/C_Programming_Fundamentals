// #undef  demo  program
#include <stdio.h>
main()
{
	#define  A  10  //  'A'  is  macro  with  value  10
    printf("%d\n" , A); //  10
	#undef    A   // Macro  'A'  is  undefined
    //printf("%d\n" , A); //  Error  becoz  macro   'A'  does  not  exist
}





/*
1) #undef    macroname  --->   Macro  is   undefined

2)  It   is  quite   opposite  to  #define

3) Macro  can  not  be    used  after  it  is  undefined
*/