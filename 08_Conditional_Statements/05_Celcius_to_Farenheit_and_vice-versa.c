//  Convert  celsius  temp  to  farenheit  and  vice-versa
#include<stdio.h>
int  main()
{
        float  temp;
        int  ch;
		printf("Enter  1-convert  celsius   to  farenheit  and  2 - convert  farenheit   to  celsius  :  ");
        scanf("%d" , &ch);  //  2
        if(ch == 1)
        {
                printf("Enter  celsius  temp  :  ");
                scanf("%f" , &temp);  //  100
                printf("Farenheit  Eqv  :    %g  \n" , 1.8 * temp + 32); // 212
        }
        else
        if(ch == 2)
        {
                printf("Enter  Farenheit  temp  :  ");
                scanf("%f" , &temp);  //  150
                printf("Celsius  Eqv  :    %g  \n"  , (temp - 32) / 1.8);
        }
        else
                printf("Invalid  input  \n");
}


//  ==   must  be  used  in  the  condition  but  not  =