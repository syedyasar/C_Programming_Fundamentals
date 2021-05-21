//convert decimal number to binary number
/*
         n      Quotient    Reminder
		 ----------------------------------------
        25          12             1 * 10 ^ 0 = 1
		12           6              0  * 10 ^ 1 = 0
	  	 6            3              0 * 10 ^ 2 = 0
	  	 3            1              1 * 10 ^ 3 =  1000
	  	 1            0              1  * 10 ^ 4  =  10000
		                                                  -----------------
														     11001
dec_bin(25) = 11001

main()  ---> reads input , call dec_bin  function and  prints  result
dec_bin()  ---> returns  binary  equivalent
*/
#include<stdio.h>
#include<math.h>
int  dec_bin(int  n)//  n  is  25
{
    int  rem , sum = 0;
	int  p = 0; // starting  power
    while(n > 0) // Loop  is  executed  until  'n'  becomes  0
    {
        rem = n % 2;// possible  reminders  are  0  and  1
        sum += rem * pow(10 , p); //  Each  reminder  is  multiplied with 10 ^ p  and  added  to  sum
        p++;  // powers  are  incremented  by  1
        n = n / 2;  //  modifies  value  of  'n'  to  avoid  infinite  loop
    }
    return   sum; //  binary  equivalent
}
//  Multiply  reminders  with  10 ^ 0 , 10 ^ 1 , 10 ^ 2 and  so  on.  It  is  as  good  as  taking  reminders  in  the  reverse 
//  order
main()
{
    int  n;
    printf("Enter any decimal number : ");
    scanf("%d" , &n); 
    printf("Binary Eqv : %d\n" , dec_bin(n)); // Function  returns  binary  equivalent
}

/*
1)  How  to  convert  decimal  numer  to  octal  number ?  ---> Function  is  not  required
     int   n  = 9248;  ---> decimal  number 
	 printf("%o" , n) ;  ---> decimal  number is  converted  to octal  due  to  %o

2)  How  to  convert  decimal  numer  to  hexa  decimal   number ?  ---> Function  is  not  required
     int   n  = 9248;  ---> decimal  number 
	 printf("%x" , n) ;  ---> decimal  number is  converted  to  hexa decimal   due  to  %x

3) int n = 25;
    printf("%b" , n);  --->  Error  becoz  there is  no  %b  format  and  hence  function is  required to   convert  decimal 
	                                  to  binary
*/


	