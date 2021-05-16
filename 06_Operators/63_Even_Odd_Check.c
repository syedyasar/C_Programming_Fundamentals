// Test  a  number  is  even  or  odd  by using  ?  : 
#include<stdio.h>
int  main()
{
        int  x;
        printf("Enter  any  +ve  integer   :  ");
        scanf("%d" , &x); //  45
		x % 2 == 0 ? printf("Even Number\n") : printf("Odd Number \n");
}

/*
1)  =   is   assigment  and  ==  is  comparison
2)  x % 2 =  0   ---> Error  becoz  op1   must  be  variable  but  not  expression 
*/

