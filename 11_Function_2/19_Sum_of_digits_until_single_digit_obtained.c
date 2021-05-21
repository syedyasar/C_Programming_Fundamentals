//  Find sum of the digits of the number repeatedly until single digit number is obtained
#include <stdio.h>
//#include "01_Sum_of_Digits_of_Number"  // sod   function  is  substituted


int   sod(int  n)   //  n  is   9247
{
    int   rem , sum = 0; 
    while(n > 0)  //  Loop  is  executed  until  'n'  becomes  0
    {
        rem = n % 10;  //  Each  digit  of  the  number  is  extracted
        sum += rem; //  Each  digit  is  added  to  sum
        n = n / 10; //   'n'  is  modified  to  avoid  infinite  loop
	}
	return   sum;  // sum  of  the  digits  of  the  number
}


int  single_digit(int  n)  
{
    while(n >= 10)  
             n  = sod(n);  
    return   n; 
}


// n  =  199  --->  19  --->  10  --->  1
/*
sod(199) = 19
sod(19) = 10
sod(10) = 1
*/


main()
{
    int  n , single_digit(int);
    printf("Enter any number : ");
    scanf("%d" , &n);//199
    printf("Single  digit  result : %d \n" , single_digit(n));  
}

//comment main function in   prog1.c file before running the program
//  199  ---->  19  --->  10  --->  1
//  main  calls  single_digit  function   and   it  inturn  calls  sod   function
