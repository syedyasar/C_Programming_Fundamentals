// condtional operator  within conditional operator  is called nested conditional operator

// same program in another way
#include<stdio.h>
int  main()
{
        int  a , b , c;
        printf("Enetr  any  3  numbers  \n");
        scanf("%d%d%d" , &a , &b , &c); 
		int   ans1  =  a > b ? a : b; // ans1  is  largest  of  a  and  b
		int   ans2 = ans1 > c ? ans1 : c; // ans2  is  largest  of  ans1  and  c
		printf("Largest  number  :  %d\n" , ans2);
}


