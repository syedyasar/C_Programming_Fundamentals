//  #  operator demo  program
#include  <stdio.h>
#define  pf(x)   printf( #x  " : %d \n" , x); 
main()
{
	int  a  = 25;
	pf(a)  //    printf("a : %d \n", a);  is  substituted  ---> a :  25
	int  b  = 35;
	pf(b)  //    printf("b : %d \n", b);  is  substituted  ---> b :  35 
}



/*
#define  pf(x)   printf( " #x   : %d \n" , x)
pf(a)  ---->  printf("#x :  %d \n", a);  ----> #x :  25
*/