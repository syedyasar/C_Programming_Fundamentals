
//  Multiple  Assignment  demo program
#include <stdio.h>
main()
{
	int  a = 5 , b = 6 , c = 7;
	a += b += c += 8; 
	printf("c : %d  \n" ,  c);  // 15
	printf("b : %d  \n" ,  b); // 21
	printf("a : %d  \n" ,  a);  // 26
}





//  	a += b += c += 8; ---> a += b += 15  ---> a += 21  ---> 26

