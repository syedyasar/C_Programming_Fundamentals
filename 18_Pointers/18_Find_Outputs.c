// Are  variables  swapped ?
#include <stdio.h>
void  swap(int , int);
main()
{
    int  a , b;
    printf("Enter any 2 numbers \n");
    scanf("%d%d" , &a , &b);  // 10   25
    swap(a , b); // a  and  b  are  not  swapped
    printf("a : %d \n" , a); // 10
    printf("b : %d \n" , b); //  25
}
void swap(int x , int y)  //  x  is  10 ,  y   is   25
{
    int  temp;
    temp = x; //  x  and  y  are  swapped
    x = y; 
    y = temp; 
}



/*
1) Formal params x and y are swapped but changes are not reflected to actual parameters a and b

2) Therefore   swap is a useless function

3) swap  must  be  CBA  function  but  not  CBV
*/