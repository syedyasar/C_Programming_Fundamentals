/*
display mathematical table of a number
main()  ---> reads  input  and  call   table  function
table(n)  ---> prints  matematical  table  for  number  'n'
*/

#include <stdio.h>
void    table(int  n)  
{
	int   i;
    for(i = 1 ; i <= 10 ; i++) // print  first 10  rows  of  mathematical  table
        printf("%4d  *  %2d  =  %d \n" , n , i , n * i); //  'n'  is  table  number ,  'i'  is   row  number ,  n * i  is   result
}
main()
{
    int n;
    printf("Enter  table  nuumber : ");
    scanf("%d" ,  &n); // 7
    printf("Table %d\n" , n); // table  heading  
	table(n); // prints  table  'n'
}
