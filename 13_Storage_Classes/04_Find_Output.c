// Find  outputs
#include <stdio.h>
int  x = 10;  // GV
main()
{
	printf("%d\n" , x); // Gv  is  printed  becoz  there is  no   LV  ---> 10
	int  x = 20;  // LV
	printf("%d\n" , x); // LV  is  printed ---> 20
}
