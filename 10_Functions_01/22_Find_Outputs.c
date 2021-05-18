//  Find outputs
#include <stdio.h>
void   outer()
{
	printf("Outer function\n");
	void  inner1()
	{
		printf( "1st inner function\n");
	}
	void  inner2()
	{
		printf("2nd inner function\n");
	}
	inner2();
    printf("Hello\n");
    inner1();
    printf("End of outer function\n");
}
main()
{
	printf("Begin\n");
	outer();
	printf("Bye\n");
}
