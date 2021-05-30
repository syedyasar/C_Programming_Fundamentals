// Array  demo  program
#include <stdio.h>
main()
{
	int  a[5];    // 'a'  is  array   of  integers
	float  b[7];  //  'b'  is   array  of   floats
	char c[20];   // 'c'  is   array  of  characters
	printf("%d\n" , sizeof(a)); // 5 * 4 = 20B
	printf("%d\n" , sizeof(b)); // 7 * 4 = 28B
	printf("%d\n" , sizeof(c)); // 20 * 1 = 20B
}


/*
1)  Array    'a'  can  hold  5  integers,  'b'  can  hold  7  floats  and   'c'  can  hold  20  characters

2) sizeof  operator  returns   size  of   array   interms  of  bytes
*/

	
