// Find  outputs
#include <stdio.h>
main()
{
	int  a[3][4];  // Matrix  contains  garbage  values becoz  it  is  not  initialized
	printf("size  of  array : %d \n" , sizeof(a)); // 3 * 4 * 4 = 48B
	printf("\n");
	printf("a[0][0] :  %d \n" , a[0][0]); // garbage value
	printf("a[0][1] :  %d \n" , a[0][1]); // garbage value
	printf("a[0][2] :  %d \n" , a[0][2]); // garbage value
	printf("a[0][3] :  %d \n" , a[0][3]); // garbage value
	printf("\n");
	printf("a[1][0] :  %d \n" , a[1][0]); // garbage value
	printf("a[1][1] :  %d \n" , a[1][1]); // garbage value
	printf("a[1][2] :  %d \n" , a[1][2]); // garbage value
	printf("a[1][3] :  %d \n" , a[1][3]); // garbage value
	printf("\n");
	printf("a[2][0] :  %d \n" , a[2][0]); // garbage value
	printf("a[2][1] :  %d \n" , a[2][1]); // garbage value
	printf("a[2][2] :  %d \n" , a[2][2]); // garbage value
	printf("a[2][3] :  %d \n" , a[2][3]); // garbage value
}
