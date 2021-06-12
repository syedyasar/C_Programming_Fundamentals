// Find  outputs
#include <stdio.h>
main()
{
	int  a[][4] = {{10 , 20} , {30 , 40 , 50} , {60 , 70 ,80 , 90}};
	printf("size  of  array : %d \n" , sizeof(a)); //  3 * 4 * 4 = 48B
	printf("\n");
	printf("a[0][0] :  %d \n" , a[0][0]); // 10
	printf("a[0][1] :  %d \n" , a[0][1]); //  20
	printf("a[0][2] :  %d \n" , a[0][2]); // 0
	printf("a[0][3] :  %d \n" , a[0][3]); //  0
	printf("\n");
	printf("a[1][0] :  %d \n" , a[1][0]); //  30
	printf("a[1][1] :  %d \n" , a[1][1]); //  40
	printf("a[1][2] :  %d \n" , a[1][2]); //  50
	printf("a[1][3] :  %d \n" , a[1][3]); //  0
	printf("\n");
	printf("a[2][0] :  %d \n" , a[2][0]); //  60
	printf("a[2][1] :  %d \n" , a[2][1]); // 70
	printf("a[2][2] :  %d \n" , a[2][2]); // 80
	printf("a[2][3] :  %d \n" , a[2][3]); //  90
}


/*
Remaining  2  elements  of  first  row  are  0's   and    last  element  of  2nd  row  is  also  0  becoz  each  row
contains  4  elements
*/