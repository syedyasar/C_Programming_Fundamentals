//  +ve  subscripts  demo  program
#include <stdio.h>
main()
{
		int i;
		int  a[] = {10 , 20 ,  30 , 40 , 50};
		int  *p = a - 1;  
//		printf("%d\n" , How  to  print  10);
//		printf("%d\n" , How  to  print  20);
//		printf("%d\n" , How  to  print  30);
//		printf("%d\n" , How  to  print  40);
//		printf("%d\n" , How  to  print  50);
//		printf("%d\n" , p[0]);

		printf("%d\n" , p[1]);  //10
		printf("%d\n" , p[2]);  //20
		printf("%d\n" , p[3]);  //30
		printf("%d\n" , p[4]);  //40
		printf("%d\n" , p[5]);  //50
		printf("%d\n" , p[0]);  // Garbage
}
