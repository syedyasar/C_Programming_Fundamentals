//  Reverse a number and test whether it is palindrome or not
#include <stdio.h>
int   reverse(int  n) 
{
    int rem , sum = 0;
    while(n > 0)  // Loop  is  executed  until  'n'  becomes  0
    {
        rem = n % 10; // Each  digit  of  the  number
        sum = sum * 10 + rem;  
        n = n / 10; //  'n'  value  is  modified  to  avoid  infinite  loop
    }
    return  sum; //  reverse  number
}

int   palindrome(int  n) // 121
{
    return    n == reverse(n);   //  true  when  given number and  reverse  number are  same and false otherwise
}

// main  calls  paindrome  function  and  it  inturn  calls  reverse  function


main()
{
    int  n;
    printf("Enter  any  number : ");
    scanf("%d" , &n); //  121
    printf("Reverse   Number  :  %d\n" , reverse(n)); 
    if(palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not  Palindrome\n");
}



/*
1) main() calls   reverse() and palindrome()  functions

2) palindrome() calls  reverse()  function

3) Thus reverse function is executed twice  becoz  both main and palindrom call reverse function
*/
