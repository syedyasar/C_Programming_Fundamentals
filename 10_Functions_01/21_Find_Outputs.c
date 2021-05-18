//  Find outputs
#include <stdio.h>
int  f1(int   x)  //  x  is  30
{
	int  f2()
	{
	     return 10; 
	}
	return f2() + 20 + x;  // f2() + 20 + 30 =  10 + 20 + 30 = 60
}
main()
{
	printf("%d\n" , f1(30));  //  60
}


