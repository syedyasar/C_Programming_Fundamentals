// Same prog with structure
#include <stdio.h>
struct  test  // test  is   structure  tag
{
	int   x; // First  4B
	int   y; // Next   4B
};
main()
{
	struct  test  a; // structure  is  created
	printf("size  of  structute : %d \n" , sizeof(a)); // 4 + 4 = 8B
	a . x = 25; // 25  is  represented  first  4B
	printf("%d\n" , a . y); //  Next  4B  ---> Garbage value
}