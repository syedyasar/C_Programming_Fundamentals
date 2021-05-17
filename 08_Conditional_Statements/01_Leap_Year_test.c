//  Test  year  is  leap  year  or  not
//  Leap  year  is  divisible    by  4  but  not  by  100  or  divisble   by  400
#include<stdio.h>
main()
{
        int   year;
        printf("Enter  4-digit  year  :  ");
        scanf("%d" , &year); 
		if ( year % 4 == 0  &&  year % 100  !=0  ||  year % 400 == 0)
				printf("Leap  year  \n");
        else
				printf("Not  a  leap  year\n");
}

 
/*
1) 2020  --->  true  &&   true   ||  false = true || false =  true 
	1900 ---> true && false ||  false = false || false = false
	2000  ---> true && false ||  true = false || true = true
	2021  ----> false && true || false =  false || false = false

2) If  at  least  one operand of  &&  is  false , result is false
    If  at  least  one operand of  ||  is  true , result is  true

3) &&  operator   is   used    when  both  the  conditions    are    to      be  satisfied (cond1   &&  cond2)

4) ||  operator   is  used   when  at  least  one  condition  need  to  be    satisfied (cond1  ||  cond2)

*/
