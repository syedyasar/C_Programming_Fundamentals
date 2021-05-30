/*  Recursive  function  to  find  Sum of  the  digits
sod(678) = 678 % 10 + sod(678 / 10)
               =  8 + sod(67)
			    = 8 + 67 % 10 + sod(67 / 10)
				= 8 + 7 + sod(6)
				= 8 + 7 + 6 % 10 + sod(6 / 10)
				= 8 + 7 + 6 + sod(0)
				= 8 + 7 + 6 + 0 = 21
There  are   4   function  calls  in  sod(678).
There  are   n+1   function  calls  for  n-digit  number
*/
#include  <stdio.h>
int  sod(int  n)
{
	if(n > 0)
			return   n % 10 + sod(n / 10);
	else
			return  0;
}
main()
{
	int  n;
	printf("Enter  any  number : ");
	scanf("%d" , &n);  
	printf("Sum of the digits :  %d \n" , sod(n));
}

//  Modify   if   condition  to  n  ==  0  when  the  2  return  statements  are  interchnaged