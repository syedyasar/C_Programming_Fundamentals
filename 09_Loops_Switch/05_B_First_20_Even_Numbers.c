// Same  program  in  another  way
#include<stdio.h>
main()
{
        int  i;
        printf("First  20  even  numbers\n");
		i = 1; // it can be written before  for  loop
		for ( ;  i <= 20 ; )  // 2 semicolons  are  mandatory  in   for  loop
		{
				printf("%d \n", 2 * i); //  2 , 4 , 6 , ...  40
				i++; // it  can  be  written at the end of for  loop  ---> 21
		}
}


				