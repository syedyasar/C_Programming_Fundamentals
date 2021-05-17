// Find outputs
#include<stdio.h>
int main()
{
		int  a = 7 , b;
		b = a+++a;  //  is   interpreted as   b = a++   +    a
		printf("a : %d\n" , a);  // 8
		printf("b : %d\n" , b); //  14
}

/*
1) a = 7

2) b = 7 + 7 = 14

3) a = 8
*/





