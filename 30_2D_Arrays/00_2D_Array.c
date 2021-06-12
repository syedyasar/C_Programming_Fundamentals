// 2-d  Array demo program
#include <stdio.h>
main()
{
	int   a[][4] = {10 , 20 , 30 , 40 , 50 , 60 , 70 ,80 , 90 , 100 ,  110 ,120 };  // Every  4  elements  form  a  row and  there  exists  12 /4 = 3  rows
	printf("size  of  array : %d \n" , sizeof(a)); //  3 * 4 * 4 = 48
	printf("\n");
	printf("a[0][0] :  %d \n" , a[0][0]); //  10
	printf("a[0][1] :  %d \n" , a[0][1]); // 20
	printf("a[0][2] :  %d \n" , a[0][2]); //  30
	printf("a[0][3] :  %d \n" , a[0][3]); //  40
	printf("\n");
	printf("a[1][0] :  %d \n" , a[1][0]); //  50
	printf("a[1][1] :  %d \n" , a[1][1]); // 60
	printf("a[1][2] :  %d \n" , a[1][2]); //  70
	printf("a[1][3] :  %d \n" , a[1][3]); //  80
	printf("\n");
	printf("a[2][0] :  %d \n" , a[2][0]); // 90
	printf("a[2][1] :  %d \n" , a[2][1]); // 100
	printf("a[2][2] :  %d \n" , a[2][2]); // 110
	printf("a[2][3] :  %d \n" , a[2][3]); // 120
}

/*
1) 4  indicates  every  4  elements  form  a  row.

2) There exists 12 / 4 = 3 rows

3) It  is  a  3 X 4  matrix
    i.e. 3 rows and each row contains 4 elements

4) First [] can be empty but not next []

5)  int  a[3];  ---> 1-d  array  due  to   single  []
     int  a[3][4];  ---> 2-d  array   due  to  double  []
     int  a[3][4][5];  ---> 3-d  array   due  to  triple  []
     int  a[3][4][5][6];  ---> 4-d  array
*/
