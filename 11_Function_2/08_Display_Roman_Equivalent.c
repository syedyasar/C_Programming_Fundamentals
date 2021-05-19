/*
Display roman equivalent   of a number
1000 - M
900   - CM
500   -  D
400   -  CD
100   -  C
90     -   XC
50    -   L
40   -    XL
10   -   X
9   -    IX
5   -    V
4   -    IV
1   -   I
*/

#include <stdio.h>
void   roman(int   n)   //  n is 3878
{
	while(n >= 1000)  //  878 >=  1000  --->  true
    {
        printf("M");  
        n = n - 1000; //   878
    }
	
    if(n >= 900)
    {
        printf("CM");
        n = n - 900;
    }

    if(n >= 500)
    {
        printf("D"); //   
        n = n - 500; //  378
    }

	if(n >= 400)
    {
        printf("CD");
        n = n - 400;
    }
    
	while(n >= 100)
    {
        printf("C"); 
        n = n - 100; //  78
    }
    
	if(n >= 90)
    {
        printf("XC");
        n = n - 90;
    }
    
	if(n >= 50)
    {
        printf("L"); 
        n = n - 50; // 28
    }
    
	if(n >= 40)
    {
        printf("XL");
        n = n - 40;
    }
    
	while(n >= 10)
    {
        printf("X"); 
        n = n - 10; // 8
    }
    
	if(n >= 9)
    {
        printf("IX");
        n = n - 9;
    }
	
    if(n >= 5)
    {
        printf("V"); 
        n = n - 5; // 3
    }
    
	if(n >= 4)
    {
        printf("IV");
        n = n - 4;
    }
	
   	while(n >= 1)
    {
        printf("I"); 
        n = n - 1; // 0
    }
	printf("\n");
}

main()
{
    int  n;
    printf("Enter any number : ");
    scanf("%d" , &n); // 3878
    printf("Roman  Equivalent : ");
    roman(n);
}


/*
1) Handle in descending order 1000,900,500,......1

2) while is mandatory for 1000,100,10 and 1

3) if  or   while  is ok  for the rest

4)  int  x = roman(23);  --->  Error   becoz  LHS  variable  is  not allowed  for  void  function  due  to  mismatch

5)  printf("%v" , roman(23));  --->  Error   becoz   void  function can not  be  used  inside  printf  becoz  there is  no 
                                                      format   for  void 
*/
