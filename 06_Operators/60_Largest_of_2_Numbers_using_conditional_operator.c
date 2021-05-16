//  Find  largest  of  2  numbers  by  using  conditional  operator  ?  :  
#include <stdio.h>
main()
{
        int  a , b;
        printf("Enter  any  2  numbers  \n");
        scanf("%d %d" , &a , &b);    //  25    25
        int  max   =  a > b    ?    a  :   b;
        printf("Largest  number  :  %d\n" , max);
}


//  Replace  >  with  <  for  smallest  number
