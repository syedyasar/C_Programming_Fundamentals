//  Save  in  13a_Extern_B.c
#include <stdio.h>
extern  int   x; // treats  'x'  as   global to  current  file  as  well
void  f2()
{
	printf("%d\n" , x);  // 0
}
void  f3()
{
	printf("%d\n" , x);  //  0
}
