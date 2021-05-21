// Display pascal's  triangle
/*
									              0c0
						                    1c0         1c1
	                                     2c0         2c1        2c2
	                                  3c0         3c1          3c2          3c3
*/

//#include "22_NPR_NCR.c"  //  ncr, npr  and  fact   function   are   substituted




long  long  fact(int   n)  
{
    long  long  prod = 1;
	int i;
    for(i = 1 ; i <=  n ; i++)  
		prod *= i;  // Multiply  'i'  with  prod  where  'i'  varies  from 1  to  n
    return  prod; // n!
}

int  ncr(int  n , int  r) //n  is  5 ,  r  is  2
{
    return fact(n) /  (fact(r) * fact(n - r));   //  return  fact(5) / (fact(2) * fact(3) = return  120 / (2 * 6) = return 120 / 12 = return 10
}

int  npr(int  n , int  r)   // n  is  5 ,  r  is  2
{
    return fact(n) / fact(n - r); // return  fact(5) / fact(3) =  return 120 / 6 = return 20
}

void   spaces(int  s)   //   s  =  36
{
	int  i;
    for(i = 1 ; i <= s ; i++)   
           printf(" ");  //  36  spaces
}

void  pascal_triangle(int   n)  // n=4 
{
    int  i ,  j ,  s = 40;

    for(i = 0 ; i <= n - 1   ; i++) //  It  is  controlling  lines  i.e. n  lines  --->  0  to  n-1
    {
        spaces(s);  //  's'  number of  spaces  are  printed
        for(j = 0 ; j <= i ; j++) // It  is  controlling  values in  the  line
              printf("%d     " , ncr(i , j));  //  prints  i C j    where  j  varies from  0  to  i
        s = s - 2; 
        printf("\n"); // Goes  to  next  line
    }
}

main()
{
    int n;
    printf("How many lines ?   :  ");
    scanf("%d" , &n); // 4
    pascal_triangle(n);//display n lines of pascal's triangle
}

/*
1) main  function   calls pascal_triangle  function ,  
    pascal_triangle function  calls ncr function  and 
	ncr calls fact function

2) comment main function in  22_NPR_NCR.c  before  running  the  above  program

3) The above program contains 6  functions but only  5 are executed

4) npr function is substituted but not executed  becoz  it is not called



outer loop  index  i       inner  loop  index j
-----------------------------------------------------------------------
				0                                  0
				1                                  0
													1
				2                                  0
													1
													2
				3								    0
													1
													2
													3
*/
