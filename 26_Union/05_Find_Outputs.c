//Find outputs
#include <stdio.h>
union  test
{
	short  a[10];  // First  10 * 2 = 20B
	float  b[5]; // First  5 * 4 = 20B
	char  c[20]; // First 20 * 1 = 20B
};
main()
{
	printf("size of union : %d \n" , sizeof(union  test));  // max(20 , 20 , 20) = 20
}