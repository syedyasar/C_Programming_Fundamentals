// Find outputs
#include <stdio.h>
main()
{
	printf("%d\n" , sizeof(10.8f)); // 10.8f  is   float  and  hence   4 bytes
	printf("%d\n" , sizeof(10.8));  // 10.8 is  double and hence 8 bytes
}

