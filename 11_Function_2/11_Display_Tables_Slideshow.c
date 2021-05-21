//  Same   program   but  tables  are  printed    like  a  slide  show
#include <stdio.h>  
#include <stdlib.h>  // in view of  system function

void    table(int  n)  
{
	int   i;
    for(i = 1 ; i <= 10 ; i++) // print  first 10  rows  of  mathematical  table
        printf("%4d  *  %2d  =  %d \n" , n , i , n * i); //  'n'  is  table  number ,  'i'  is   row  number ,  n * i  is   result
}

main()
{
    int  n , i;
    printf("How many tables ? : ");
    scanf("%d" , &n);  //  5
    for(i = 1 ; i <= n ; i++)  //  i = 2
    {
        printf("Table :  %d \n" , i); // Table  heading 
        table(i); //  table  i  is  printed  where  i  varies  from 1  to  n
        printf("Wait  for   5  sec \n");
        sleep(5);   // Next  table  is  printed  after  5  sec
        system("cls"); // existing  table  is  cleared  before  printing next  table
    }
}


/*
sleep()
------------
1) sleep(5); --->   program  execution  is  suspended  for  5  sec

2)  Execution  resumes  after  5  sec

3)  sleep  is  defined  in  <stdio.h>  file

4) Parameter  of  sleep  is  seconds
*/
