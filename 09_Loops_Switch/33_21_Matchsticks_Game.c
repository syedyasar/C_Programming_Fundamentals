/*
There are 21 matchsticks. User can pick 1 , 2 , 3 or 4  macth sticks. Computer picks after user  and  whoever 
picks  the last matchstick, they  lose the game.  Write a program such that computer always wins

User  :                3          1          2       4        1
Computer :         2          4          3       1

Logic : Total  is   5
*/
#include<stdio.h>
main()
{
	int  pick  ,  n = 21; // Number  of  matchsticks
	while(n > 1) //  Loop  is  executed  until  n  becomes  1
	{
		printf("How many match sticks you  pick (1 , 2 ,  3 or  4) ?  :  ");
		scanf("%d" , &pick); 
		while(pick > 4  ||  pick < 1) // Loop  is  executed until  user  input  is  valid ?
		{
			printf("Input  can  not  be   >  4 nor  <  1,  Reenter  :  ");
			scanf("%d" , &pick); 
		}
		printf("Computer  picks  %d matchsticks\n" , 5 - pick); 
		n =  n - 5; // value  of  'n'  is  modified  to  avoid  infinite loop
	} // while
	printf("Sorry  ,  You have lost the game  !!!   \n");
}
