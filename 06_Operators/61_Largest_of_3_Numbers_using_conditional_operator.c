// Find  largest  of  3  numbers  by  using conditional  operator   ?  :
#include<stdio.h>
int  main()
{
        int  a , b , c;
        printf("Enetr  any  3  numbers  \n");
        scanf("%d%d%d" , &a , &b , &c); //  25    25    25
        int  max = a > b ?  (a > c  ?  a  :  c)  :  (b > c ?  b  :  c);
        printf("Largest  number  :  %d\n" , max);
}


