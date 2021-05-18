// Find  outputs
#include<stdio.h>
int  main()
{
        int  a = 1 , b;
        switch(a)
        {
                case  1  :  b = 10;   
                case  2  :  b = 20;  
                case  3  :  b = 30;
        }
        printf("b  :  %d \n" , b); // 30 
}


/*
1)  output  is  30   becoz  there  is  no  break at the end of  case  1

2)  output  is  10  when  there  is  break  at  the  end  of  case  1

3)  output  is  20  when  there  is  break  at  the  end  of  case  2
*/