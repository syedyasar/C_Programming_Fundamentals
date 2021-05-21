/*
Find number  of  2000 , 500 , 200 , 100 , 50 , 20 , 10 , 5 , 2 ,  1 in a number
Hint : 10  if  statements
*/
#include <stdio.h>
void  denom(int  n) 
{
    int  ans = n / 2000; //  Number of  2000's  in  the  number 
    if(ans > 0) //  print  ans   when  at  least  one  2000  exists 
    {
        printf("2000 : %d\n" , ans);  
        n = n % 2000; //  modifies  value  of  'n'
    }
    ans = n / 500; //  Number  of  500's  in  the  number
    if(ans > 0) // prints  ans  when  at  least  one 500  exists
    {
        printf("500 : %d\n" , ans); 
        n = n % 500; //  modifies  value of  'n'
    }
    ans = n / 200; 
    if(ans > 0) 
    {
        printf("200 : %d\n" , ans);  
        n= n % 200; 
    }
    ans = n / 100; 
    if(ans > 0) 
    {
        printf("100 : %d\n" , ans); 
        n = n % 100;
    }
    ans = n / 50;
    if(ans > 0)  
    {
        printf("50 : %d\n" , ans); 
        n = n % 50; 
    }
    ans = n / 20; 
    if(ans > 0)
    {
        printf("20 : %d\n" , ans); 
        n = n % 20;  
    }
    ans = n / 10; 
    if(ans > 0)
    {
        printf("10 : %d\n" , ans); 
        n = n % 10; 
    }
    ans = n / 5;  
    if(ans > 0)
    {
        printf("5 : %d\n" , ans); 
        n = n % 5; 
    }
    ans = n / 2; 
    if(ans > 0) 
    {
        printf("2 : %d\n" , ans); 
        n = n % 2;
    }
    ans = n / 1;  
    if(ans > 0) 
    {
        printf("1 : %d\n" , ans); 
        n = n % 1; 
    }
}

main()
{
    int  n;
    printf("Enter  any  number : ");
    scanf("%d" , &n);  
    printf("Denominations \n");
    denom(n); // Prints  all  the  denomination  in the  number
}


/*
1)  int  ans  = denom(7888);  --->  Error  becoz  void  function can  not  have  LHS  variable  due  to  mismatch  issue

2) printf("%v" , denom(7888)); ---> Error  becoz  void  function can  not  be  called  inside  printf due  to  format  issue
*/
