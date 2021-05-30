// Find outputs
#include <stdio.h>
main()
{
	int i;
	int  a[] = {};  // valid  and  size  is   0  becoz  braces  are  empty
	printf("size  of  array   a  :   %d\n" , sizeof(a));  // 0 * 4 = 0B
	int b[5] = {}; // Array   'b'   contains    5  zeroes
	printf("Array   b\n");
	for(i = 0 ; i <= 4 ; i++)  
			printf("%d\n" , b[i]); //  prints  b[i]  where  'i'  varies  from  0  to  4  --->  0   0   0   0    0
	int  c[5];  //  Array   'c'  contains   5  garbage  values
	printf("Array   c\n");
	for(i = 0 ; i <= 4 ; i++)   //   Initializes  Array  'c'  with   10  , 20 , 30 , 40  and  50
	{
				c[i] = 10 * (i + 1);  
				printf("%d\n" , c[i]);  //  prints  c[i]  where   i varies  from  0  to  4
	}
}
/*
1) int  a[5];
    a = {10 , 20 , 30 , 40 , 50} ;  --->  Error  becoz  array  can  not  be  initialized  later

2)  int  a[5];
     for(i = 0 ; i <= 4 ; i++)  --->  Array  can  be  initialized  later  by  using  for  loop
	 		a[i] = 10 * (i+1);  ---> OKay
			 
		i         a[i]
		----------------
		0         a[0] = 10 * (0 + 1) = 10
		1         a[1] = 10 * (1 + 1) = 20
		2         a[2] = 10 * (2 + 1) = 30
		3         a[3] = 10 * (3 + 1) = 40
		4         a[4] = 10 * (4 + 1) = 50
*/