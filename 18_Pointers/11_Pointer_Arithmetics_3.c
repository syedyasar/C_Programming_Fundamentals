#include <stdio.h>
main()
{
	int  *a;
	float*  b;
	char*  c;
	double  *d;
	printf("a :  %u \n" , a); //  garbage  address  (may be  1000)
	printf("b :  %u \n" , b); //  garbage  address  (may be  2000)
	printf("c :  %u \n" , c); //  garbage  address  (may be  3000)
	printf("d :  %u \n" , d); //  garbage  address  (may be  4000)
	a++;  //  a = a + 1 integer = 1000 + 4 = 1004
	b++;  //  b = b + 1  float = 2000 + 4 = 2004
	c++;  //  c = c + 1  char = 3000 + 1 = 3001
	d++;  // d = d +  1 double = 4000 + 8 = 4008
	printf("a :  %u \n" , a); // 1004
	printf("b :  %u \n" , b); // 2004
	printf("c :  %u \n" , c); // 3001
	printf("d :  %u \n" , d); // 4008
}