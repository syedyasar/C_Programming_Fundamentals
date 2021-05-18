// Same  program in another way
#include<stdio.h>
int  main()
{
        int  i;
        printf("First  20  even  numbers\n");
        for( i = 2 ; i <= 40 ; i = i + 2 )  //  2 <= 40  ---> true
				printf("%d\n" , i); //  prints  'i'  where i  varies  from 2 to 40  in steps of  2
        printf("Bye\n");
}
