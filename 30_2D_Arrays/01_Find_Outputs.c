// Find  outputs
#include <stdio.h>
main()
{
	int  a[][4] = {10 , 20 , 30 , 40 , 50 , 60 , 70 ,80 , 90 , 100 ,  110 , 120 , 130 , 140}; // Remaining 2  elements of  4th  row  are  zeroes
	printf("size  of  array : %d \n" , sizeof(a)); //  4 * 4 * 4 = 64B
	printf("\n");
	printf("a[3][0] :  %d \n" , a[3][0]); // 130
	printf("a[3][1] :  %d \n" , a[3][1]); //  140
	printf("a[3][2] :  %d \n" , a[3][2]); //  0
	printf("a[3][3] :  %d \n" , a[3][3]); //  0
}

/*
1) It   is  a  4 X 4  matrix

2) Remaining  2  elements  of  4th  row  are  zeroes
*/