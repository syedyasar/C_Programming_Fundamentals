// Same  prog  by using do .. while  loop
#include<stdio.h>
main()
{
        printf("First  20  even  numbers\n");
		int i = 1;
		do
		{
			printf("%d\n", 2 * i); //  2 , 4 , 6 , 8 , .....40
			i++;   //  21
		}
		while (i <= 20);  // 21 <= 20  ---> false
		printf("Bye\n");
}
