//Test a number is prime or not
//prime number   has no divisiors
#include <stdio.h>
#include <stdbool.h>  // in view  of  true  and  false
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

// prime(25)  is  false
// prime(11)  is  true
// prime(2)  is  true

/*
case 1 : if   'i'   is  not  a  divisor  of  n,  increment  'i'

case 2 : if  'i'   is   a   divisor  of  n,   n   is   not   a  prime number  and  false  is   returned 

case 3 : If  there  are  no  divisiors  to  n,  n  is  prime  number  and   true  is   returned  
*/


main()
{
    int  n;
    printf("Enter any number :  ");
    scanf("%d" , &n); // 1
    if(n < 2)
        printf("Invalid    input \n");
    else
    if(prime(n)) 
            printf("Prime  Number\n");
    else
            printf("Not  a  prime number\n");
}
