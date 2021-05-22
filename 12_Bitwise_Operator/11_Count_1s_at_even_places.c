/*
Count number  of  1's  at even positions  of   the    number
                       512    256    128    64     32    16    8    4    2    1   ---> Weights
n  =  666  =      1         0        1       0       0      1     1    0    1    0

Input : 666
Output  :  4
*/
#include <stdio.h>
int  count(int  n) 
{
    int  ctr = 0;
    while(n > 0) // Loop  is  executed until  'n'  becomes  0
    {
		if(n & 2)  //  ctr  is  incremented when 2nd  bit  is  1  
                ctr++;		
		n = n >> 2;   // n = n / 4  -->  4th bit goes to 2nd place , 6th goes to 4th  place  and  so on
    }
    return  ctr; // Number of  1's  at even positions 
}
/*
Iteration      which  bit  is  tested
-------------------------------------------------------
     1                         2nd  bit
     2                         4th  bit
     3                         6th  bit
	 and  so  on
*/
main()
{
    int  n;
    printf("Enter any number : ");
    scanf("%d" , &n); // 666
    printf("Number   of  1's  at  even  posn : %d \n" , count(n)); 
}

/*
                                                                      16   8  4  2  1
                n  =  1 0 1 0       0  1  1  1      1 0 0 1    1  1   1  1
                2  =  0 0 0 0       0  0  0  0       0 0 0 0    0  0  1  0 
--------------------------------------------------------------------------------------------
      n & 2  =     0 0 0 0       0  0  0  0        0 0 0 0    0  0  1  0   =  2

1) Test 2nd bit of the number, weight of 2nd bit is 2

2) Hence it is n&2

3) n&2 is 2 when 2nd bit 1
    n&2 is 0 when 2nd bit 0

4) To count number of 1's  at  3rd , 6th , 9th , 12th , .... positions
     modifications are :
	 a) n & 4   becoz  weight of the 3rd bit is 4
	 b) n = n >> 3
*/