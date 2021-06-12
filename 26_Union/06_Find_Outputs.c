//Find outputs
#include <stdio.h>
#pragma pack (1)
struct  test
{
	short  a[10];
	float  b[5];
	char  c[20];
};
main()
{
	printf("size of structure  : %d \n" ,  sizeof(struct  test)); // 20 + 20 + 20 = 60B
}
