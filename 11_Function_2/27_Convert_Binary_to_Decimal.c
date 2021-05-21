// convert binary number to decimal number
/*
             n                    Quotient        Reminder
        -----------------------------------------------------------------
         110101                  11010               1 * 2 ^ 0  =  1       
         11010                    1101                 0 * 2 ^ 1 = 0
         1101                      110                   1 * 2 ^ 2 = 4
         110                        11                     0 * 2 ^ 3  = 0
         11                          1                       1 * 2 ^ 4 = 16
         1                            0                       1 * 2 ^ 5 = 32
		                                                     ---------------------------
																Result : 53

main()  ---> reads  binary  number , call bin_dec  function and return  the  result
bin_dec()  --->  case 1 :  Valid binary  number(110101) , return  decimal  equivalent(53)
			            case 2 :  Invalid binary  number (12010) , return  -1
*/
#include<stdio.h>
#include<math.h>
int  bin_dec(int  n) //  n  is  binary  number
{
    int  rem , sum = 0;
	int  p = 0; // starting  power
    while(n > 0) // Loop  is  executed  until  'n'  becomes  0
    {
        rem = n % 10;//  Each  digit of  the  number  is  extracted
		if ( rem > 1) //  'n'  is  not  a  binary  number  when  rem  is  2 , 3 , ..... 9
				return   -1; 
        sum += rem * pow(2 , p); //  Each  reminder  is  multiplied with 2 ^ p  and  added  to  sum
        p++;  // powers  are  incremented  by  1
        n = n / 10;  //  modifies  value  of  'n'  to  avoid  infinite  loop
    }
    return   sum; //  decimal   equivalent
}
// bin_dec(110101)  =  53
// bin_dec(12010)  =  -1

main()
{
    int  n;
    printf("Enter any  binary number : ");
    scanf("%d" , &n);  
	int ans = bin_dec(n); //  returns either binary  equivalent  or  -1
	if (ans  == -1)
			printf("Invalid  binary  number\n");
	else
		printf("Decimal  Eqv : %d\n" , ans);
}

/*
1)  How  to  convert  octal numbber  to  decimal  numer  ?  ---> Function  is  not  required
     int   n  = 06247;  ---> octal  number due  to prefix  '0'
	 printf("%d" , n) ;  ---> octal  number is  converted  to  decimal  number

2)  How  to  convert  hexa-decimal  numer  to  hexa  decimal   number ?  ---> Function  is  not  required
     int   n  = 0XA7B9;   ---> Hexa decimal  number  due  to  prefix  0X
	 printf("%d" , n) ;  --->  Hexa  decimal  number is  converted  to  decimal  number

3)  int n =  0B101010;  --->  binary  number  due  to  prefix  0B
      printf("%d" , n);  --->  binary  nubber  is  converted  to decimal  number
Therefore  function  is  not  required to  convert  binary  to  decimal
*/


	