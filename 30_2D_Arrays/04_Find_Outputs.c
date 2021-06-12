// Find  outputs
#include <stdio.h>
main()
{
	static  int  a[3][4]; // Matrix  is  automatically   initialized  to  0's  becoz  it  is   a  static  matrix
	printf("a[0][0] :  %d \n" , a[0][0]); // 0
	printf("a[0][1] :  %d \n" , a[0][1]); //  0
	printf("a[0][2] :  %d \n" , a[0][2]); //  0
	printf("a[0][3] :  %d \n" , a[0][3]); //  0
	printf("\n");
	printf("a[1][0] :  %d \n" , a[1][0]); //  0
	printf("a[1][1] :  %d \n" , a[1][1]); //  0
	printf("a[1][2] :  %d \n" , a[1][2]); //  0
	printf("a[1][3] :  %d \n" , a[1][3]); //  0
	printf("\n");
	printf("a[2][0] :  %d \n" , a[2][0]); //  0
	printf("a[2][1] :  %d \n" , a[2][1]); //  0
	printf("a[2][2] :  %d \n" , a[2][2]); //  0
	printf("a[2][3] :  %d \n" , a[2][3]); //  0
}
