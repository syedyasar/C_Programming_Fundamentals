	// Swap  values of  2  variables by using 3rd  variable
#include  <stdio.h>
main()
{
        int  x , y;
        printf("Enter  any  2  numbers\n");
        scanf("%d %d" , &x , &y);  //  10   25
		printf("Before  Swap\n");
		printf("x  :  %d  \n" , x);  //  10
        printf("y  :  %d  \n" , y); // 25
        int   temp = x; 
		x = y; 
		y = temp; 
		printf("After  Swap\n");
        printf("x  :  %d  \n" , x);  //  25
        printf("y  :  %d  \n" , y); // 10
}
