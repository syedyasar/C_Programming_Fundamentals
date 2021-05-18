// Same  program  by using while  loop
#include<stdio.h>
main()
{
        printf("First  20  even  numbers\n");
		int  i = 1;
		while(i <= 20) //  21   <=  20  ---> true
		{
				printf("%d\n" , 2 * i); //  2 , 4 , 6 , ...  40
				i++; //  21
		}
		printf("Bye\n");
}
				

/*
for(i=1;i<=20;i++)  ---> Initialization , condition  and increment  are  in the  same line in case of for  loop
								    but  in  case of while they are in different lines
*/

