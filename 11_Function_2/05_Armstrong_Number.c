/*
Test a number is armstrong number or not
Sum of the cubes of the digits  is same as given number
1) armstrong(153)  ---> true
    n = 153
	sum =  0 + 27 + 125 + 1 = 153
	n  ==  sum  ---> 153  ==  153  ---> true

2) armstrong(124)  ---> false
    n = 124
	sum =  0 + 64 + 8 + 1 = 73
	n  ==  sum  ---> 124  ==  73  ---> false

3) armstrong(407)  ---> true
    n = 407
	sum =  0 + 343 + 0 + 64 =  407
	n  ==  sum  ---> 407  ==  407 ---> true

main()  ---> reads  input , call  armstrong  function  and  print  msg
armstrong(n)  --->  returns  true  when 'n'  is  armstrong  number   and false otherwise
*/
#include <stdio.h>
#include <math.h>
int  armstrong(int  n) 
{
		int  rem , sum = 0;
		int   a = n; //  original  value  is  copied  to  another  variable  'a'   before  'n'  is  modified
		while(n > 0)  //  Loop  is  executed until  'n'  becomes  0
		{
			rem = n % 10; //  Each   digit  of the number  is  extracted
			sum +=  pow(rem , 3);  //  cube  each   digit  of  the  number  and  add  to  sum
			n = n / 10; //  value  of  'n'  is  modified  to  avoid  infinite  loop
		}
		return   a == sum;  //  true  when  sum  of  the  cubes  of  the  digits   is  same as  given  number  and  false  otherwise
}

// armstrong(153)  is   non-zero
// armstrong(124)  is   0

main()
{
		int  n;
		printf("Enter any number : ");
		scanf("%d" , &n); // 124
		if (armstrong(n))
				printf("Armstrong  number \n");
		else
				printf("Not  an  Armstrong  number \n");
}

//  if (armstrong(n))  can  also  be  written  as  if  (armstrong(n) != 0)
