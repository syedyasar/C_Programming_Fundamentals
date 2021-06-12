//  Array  of  structures   initialization
#include <stdio.h>
#pragma  pack (1)
struct  emp
{
	int  empno; // 4B
	char  ename[20]; // 20B
	float  sal; // 4B
};
main()
{
	int i;
	struct  emp    a[] = {{10 , "Rama  Rao" , 10000.0} , {20 , "Sita" , 20000.0} , {15 , "Rajesh"  , 15000.0}}; //  Array  of   3  structures
	printf("%d \n" , sizeof(a)); // 3 * 28 = 84B
	for(i = 0 ; i <= 2 ; i++) // Prints  array  of  structures
		printf("%d \t %-10s \t %g \n" , a[i] . empno , a[i] . ename , a[i] . sal);
}


/*
1) Array  of  3  structures  and  each  structure  is  of  type  emp.

2) Structures  are  a[0] , a[1] , a[2]
*/
