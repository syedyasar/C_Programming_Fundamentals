//  *=  operator  demo  program
#include <stdio.h>
main()
{
	int  a = 3 , b = 4 , c = 5;
	a*= b + c;  // a = a * (b+c) = 3 * 9 = 27
	printf("a : %d  \n" ,  a);  // 27
}


//   LHS  op=  RHS   ---->  LHS =  LHS  op  (RHS)


