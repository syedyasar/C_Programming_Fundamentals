/*
Print  >  when 1st input > 2nd  input,
         <  when 1st input <  2nd input
 and  =  when  inputs  are  same
 
 
 1)  inputs  10  and  20
      output :  <

2) inputs 70  and 60
    output : >

3) inputs 25 and 25
    ouput :  =
*/


#include <stdio.h>
int main()
{
int a,b;
printf("Enter  any  2  numbers \n");
scanf("%d%d", &a, &b); // 70  60
a > b ? printf(">") : (a < b ? printf("<") : printf("="));
printf("\n");
}	
