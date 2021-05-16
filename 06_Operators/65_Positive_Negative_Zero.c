//  Display  1  if  input  is  +ve , -1  if  input  is  -ve  and  0  if  input  is  0  by  using  ?  :
#include<stdio.h>
int  main()
{
        int  x;
        printf("Enter  +ve  number   ,   -ve  number  or  0  :  ");
        scanf("%d" , &x); //  25
        int  y  =  x > 0  ?  1  :  (x < 0 ?  -1 :  0);
		printf("Result  :  %d  \n" , y);  //  1
}


/*
Print  >  when 1st input > 2nd  input,
         <  when 1st input <  2nd input
 and  =  when  inputs  are  same
*/

