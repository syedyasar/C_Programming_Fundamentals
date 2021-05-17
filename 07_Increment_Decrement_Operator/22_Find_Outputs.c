// Find  outputs
#include <stdio.h>
main()
{
	int  x  =  10;
	printf("%d\n" , x + 1); //  11
	printf("%d\n" , x); // 10
	++x; 
	printf("%d\n" , x);  // 11
}

/*
Difference  between   x++   and  x+1

1) x+1 ---->  variable  'x' is unchanged  becoz  result of  x + 1 is  not  assigned to x

2) x++ --->  variable 'x' is modified
*/