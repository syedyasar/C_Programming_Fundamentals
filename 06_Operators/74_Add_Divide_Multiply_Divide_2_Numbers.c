//  Add ,   subtrcat ,   multiply  and  divide  2  numbers
//  Also  find  reminder ,   sqrt  of  1st  input  and  a  ^  b
#include  <stdio.h>
#include  <math.h>
main()
{
		int    x , y;
		printf("Enter  any  2  numbers  \n");
		scanf("%d%d" , &x , &y); // 10   7
		printf("Sum  :  %d  \n" , x + y); // 10 + 7 = 17
		printf("Difference  :  %d  \n" , x - y); // 10 - 7 = 3
		printf("Product  :  %d  \n" , x * y); //  10 * 7 = 70
		printf("Quotient  :  %g    \n"   ,   (float)x / y); // 10.0 / 7 = 1.42
		printf("Reminder  :  %d    \n"   ,   x  %  y  ); //  10 % 7 = 3 
		printf("Sqrt  of  1st  input    :  %g    \n"   ,   sqrt(x)); // sqrt(10) = 3.1
		printf("Power    :  %f   \n"   ,   pow(x , y)); // 10 ^ 7 =  10000000
}


/*
10 / 7 = 1
10.0 / 7 = 1.42
sqrt(25)  is   5.0  ---> sqrt   function  always  returns  float   result   and   hence  %g  for  sqrt  function
pow(10,7) is  10000000.0  ---> Even  pow   function  always  returns  float   result  and    hence  %g  for  pow   function
*/
