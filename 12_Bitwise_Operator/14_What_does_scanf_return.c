//  what scanf returns ? 
#include <stdio.h>
main()
{
		int  a , b , c;
		printf("Enter any  3  numbers \n");
		int   x = scanf("%d %d %d" , &a , &b , &c);  // It  reads  3  inputs  and   returns  3
		printf("x : %d \n"  , x );  // 3
		printf("a : %d \n"  , a );  
		printf("b : %d \n"  , b );  
		printf("c : %d \n"  , c );  
}



/*
1) scanf  reads  inputs  and  returns  number  of  inputs

2) Hence  Return  type  of  scanf  is  int  but  not  void
*/