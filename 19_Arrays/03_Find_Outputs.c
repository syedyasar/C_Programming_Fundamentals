// Find  outputs
#include <stdio.h>
main()
{
	int  a[7] = {10 , 20 , 15 , 18}; // Since  array  size  is  7 , remaining  3   elements  are  0's
	printf("a[0] : %d \n" , a[0]); //  10
	printf("a[1] : %d \n" , a[1]);  //  20
	printf("a[2] : %d \n" , a[2]); // 15
	printf("a[3] : %d \n" , a[3]); // 18
	printf("a[4] : %d \n" , a[4]); // 0
	printf("a[5] : %d \n" , a[5]); // 0
	printf("a[6] : %d \n" , a[6]); // 0
	printf("Size : %d \n" , sizeof(a)); //  7 * 4 = 28B
}



	