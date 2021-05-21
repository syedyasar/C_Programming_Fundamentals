//  write  a  function  for  n!   and  use the function to calculate 0! , 1! , 2! ,....... n!
#include <stdio.h>
long  long  fact(int   n)  
{
    long  long  prod = 1;
	int i;
    for(i = 1 ; i <=  n ; i++)  
		prod *= i;  // Multiply  'i'  with  prod  where  'i'  varies  from 1  to  n
    return  prod; // n!
}


/*
1) fact(5)  is  120

2) fact(0)  is  1

3) fact   function  can  return  valid  result  upto  12! when return type is int

4) fact   function  can  return  valid  result  upto  20! when return type is  long  long

5) for(i = n ; i >= 1 ; i--)
		prod *= i;  --->  multiply 'i'  with  prod  where  i  varies  from  n  downto 1  insteps  of  -1
*/



main()
{
    int  i , n;
	printf("Enter  any  +ve  integer  or  0  :  ");
    scanf("%d" , &n); 
    for(i = 0 ; i <= n ; i++) 
		printf("%d  !=  %lld \n" , i , fact(i)); //  i  and  i!   are  printed  where i  varies  from  0  to  n
}




