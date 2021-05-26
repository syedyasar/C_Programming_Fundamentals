// Find  outputs
#include <stdio.h>
main()
{
	#define  A   10   //  'A'  is  macro  with  value  10
    printf("%d \n" , A);  //  10
    #undef    A  // macro  'A'  is  undefined 
    #define  A  20  //  Redefining  macro  'A'   again
    printf("%d \n" , A); // 20
}




//  It  is  possible  to   redefine a  macro  without  undefine  but   it   is  not  a   good  programming   practice
