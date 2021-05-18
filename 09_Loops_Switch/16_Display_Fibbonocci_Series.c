// Display  Fibonacci  Series  --->   0 , 1, 1, 2 , 3 , 5 , 8 , 13 , ......

#include<stdio.h>
int  main()
{
        int   c , i , n;
        printf("How  Many  terms  ?  :  ");
        scanf("%d" , &n);    //  6
        int   a = 0; // 1st term 
        int  b = 1; // 2nd term
        printf("Fibonacci  series\n");  //  Heading 
        printf("%d \n%d \n" , a  , b); //  First  2  terms
		for(i  = 3 ; i <=  n    ; i++) //  i = 5  and  5 <= 4  --->  false
        {
                c = a + b;  //  c  =  2 + 3 = 5
                printf("%d\n" , c);  //  6th    term  i.e.  5
				a  =  b; //  a = 3
				b  =  c; // b = 5
        }
}


/*
1)  a,b,c  are   successive  terms  of  the  series
          Iteration            a                   b                      c
		  -----------------------------------------------------------------------------------
		         i = 1           1st  term     2nd   term       3rd   term
		         i = 2           2nd  term    3rd    term       4th   term
		         i = 3           3rd  term    4th    term        5th   term
				 and  so  on

2)  First  2  terms   are  printed    before  the  loop  and  remaining  n-2  terms  inside  the  loop

3)  Loop  is   executed  n-2  times.  So  i  varies  from  1  to  n-2  (or)  3  to  n
*/
