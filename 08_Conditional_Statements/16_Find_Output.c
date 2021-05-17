// Find  output
#include<stdio.h>
main()
{
		int i = 5, j = 6, k = 0;
		if(i > j == k)  //   5 > 6   ==  0  --->  0  ==  0   ---> true
				printf("%d %d %d\n", i++, ++j, --k); // 5     7     -1
		else
				printf("%d %d %d\n", i, j, k);
}


