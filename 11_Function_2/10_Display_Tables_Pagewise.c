//display tables 1 , 2 , 3 .... n page wise
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  //  system  function 

void    table(int  n)  
{
	int   i;
    for(i = 1 ; i <= 10 ; i++) // print  first 10  rows  of  mathematical  table
        printf("%4d  *  %2d  =  %d \n" , n , i , n * i); //  'n'  is  table  number ,  'i'  is   row  number ,  n * i  is   result
}

main()
{
	int   i , n;
	printf("How  many  tables  ?  :  ");
	scanf("%d" , &n); 
	for(i = 1 ; i <= n ; i++)  
	{
			table(i);  //  prints  table  'i'  where  i  varies  from  1  to  n
			printf("Press  any  key to continue \n");
			getch(); // next  table  is  printed after  user  strikes a  key
			system("cls"); // Existing  table  is  cleared  before  printing next  table
	}
}

/*
1)  Comment main function in   09_Mathematical_Table  before running the   above  program.

2) If main is not commented ,   there   are   2    mains   and  leads to  error
*/
