//  Display prime numbers between 2 and n  and  how many are they?
//  #include  "03_Check_if_Number_is_Prime" // prime function is substituted
#include <stdio.h>

int    prime(int  n)  //  n   is   25
{
	int  i;
    for(i = 2  ; i <= n / 2 ; i++) //  range  of   divisors is  2  to  n  /  2
    {
        if (n % i == 0) // if  'i'  is  a  divisor  of  'n' , n  is  not a  prime  number
				return  false;  // skipped		
    }
	return   true; // 'n'   is   prime  number
}


main()
{
    int i , n , ctr = 0;
    printf("Enter value of n : ");
    scanf("%d" , &n);  
    printf("Prime numbers \n");
    for(i = 2 ; i <= n ; i++)  // i =  11
    {
		if(prime(i)) //  if  'i'  is  prime  number ,  print  'i'  where  i  varies  from  2  to  n
        {
            printf("%d\n" , i);  
            ctr++; //  counts  number  of  prime numbers
        }
    }
    printf("Number  of prime numbers : %d\n" , ctr);  // 4
}


// comment main  function   in  03_Check_if_Number_is_Prime.c   before running the above program
