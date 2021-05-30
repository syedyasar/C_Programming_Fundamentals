//  Find  outputs
#include <stdio.h>
main()
{
		int i;
		int  a[] = {10 , 20 ,  30 , 40 , 50};
		int  *p = a;
		
		
//		printf("%d\n" , how  to  print  10);
//		printf("%d\n" , how  to  print  20);
//		printf("%d\n" , how  to  print  30);
//		printf("%d\n" , how  to  print  40);
//		printf("%d\n" , how  to  print  50);
//		printf("%d\n" , p[-1]); //Garbage
		
		
		
//Method 1
		printf("%d\n" , p[0]);
		printf("%d\n" , p[1]);		
		printf("%d\n" , p[2]);
		printf("%d\n" , p[3]);		
		printf("%d\n" , p[4]);


		printf("\n\n");

//Method 2

		printf("%d\n" , *(p));
		printf("%d\n" , *(p+1));
		printf("%d\n" , *(p+2));		
		printf("%d\n" , *(p+3));		
		printf("%d\n" , *(p+4));




		
		
}

