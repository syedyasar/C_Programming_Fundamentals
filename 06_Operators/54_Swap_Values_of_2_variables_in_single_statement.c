// Swap  values of  2  variables in  a   single  statement
#include  <stdio.h>
main()
{
        int  x , y;
        printf("Enter  any  2  numbers\n");
        scanf("%d %d" , &x , &y);  //  10   25
		printf("Before  Swap\n");
		printf("x  :  %d  \n" , x);  //  10
        printf("y  :  %d  \n" , y); // 25
        x = (x + y) - (y = x);                
		printf("After  Swap\n");
        printf("x  :  %d  \n" , x);  //  25
        printf("y  :  %d  \n" , y); // 10
}

