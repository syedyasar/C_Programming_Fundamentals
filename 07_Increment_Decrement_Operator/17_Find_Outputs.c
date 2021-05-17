// Find outputs
#include<stdio.h>
int main()
{
		int  a = 7;
		a = ++a * a++;
		printf("a : %d\n" , a);  // 65
}


/*
1)  a = 8

2) a = 8 * 8 = 64

3) a = 65
*/