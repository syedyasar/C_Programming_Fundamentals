// Find outputs
#include <stdio.h>
main()
{
	typedef  int*   int_ptr; // int*   is  given  another  name  int_ptr
	int_ptr    a , b; //  a   and  b   are   pointers   of  type  int_ptr
	printf("%d\n" , sizeof(a)); // 8B  becoz  'a'  is  pointer
	printf("%d\n" , sizeof(b)); // 8B  becoz  'b'  is  pointer
}


/*
1)  typedef  provides more clarity  and  better readability

2)  int_ptr    a , b , c
        has  more  clarity  over
     int  *a, *b , *c;
*/
