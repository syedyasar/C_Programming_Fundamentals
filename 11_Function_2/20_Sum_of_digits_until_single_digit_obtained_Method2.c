// Same  program  in  another  way
#include <stdio.h>
int  single_digit(int  n)  
{
    int  rem = n % 9; //  18 % 9 = 0
	if (rem  == 0)
			return  9;  //  if  n  is  divisible  by  9 , 9  is  returned
	else
			return  rem; // if  n  is  not  divisible  by  9 , n % 9  is  returned
}

//  single_digit(199)  is  1 
//  single_digit(3276)  is  9
//  single_digit(32567)  is  5
//  single_digit(18)  is  9

main()
{
    int  n , single_digit(int);
    printf("Enter any number : ");
    scanf("%d" , &n);//199
    printf("Single  digit  result : %d \n" , single_digit(n));  
}

// 199 --->  19  ---> 10  --->   1
// 3276  ---> 18  --->  9
// 32567  --->  23  --->   5