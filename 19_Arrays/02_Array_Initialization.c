// Array  initialization and accessing array  elements
#include <stdio.h>
main()
{
	int  a[] = {10 , 20 , 15 , 18}; // size  of  array  is   4  becoz  there  are  4  elements  on  right  side
	printf("a[0] : %d \n" , a[0]); // Element  at  subscript  0 ---> 10 
	printf("a[1] : %d \n" , a[1]); // Element  at  subscript  1 --->  20
	printf("a[2] : %d \n" , a[2]);  // Element  at  subscript  2 --->  15
	printf("a[3] : %d \n" , a[3]); // Element  at  subscript  3 ---> 18
	printf("Size : %d \n", sizeof(a)); // 4 * 4 = 16B
}
