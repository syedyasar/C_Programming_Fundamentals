/*
Test a number is perfect square or not
1) perfect_square(35)  =  false
2) perfect_square(49)  =  true

main()  ---> reads  input, call perfect_square  function and print msg
perfect_square(n)  --> returns  true  when n is  perfect  square and false  otherwise
*/
#include  <stdio.h>
#include  <math.h>
int  perfect_square(int   n)  // n  = 35
{
		int     a = sqrt(n);  //   a   is  int  part  of  sqrt  result
		return  a * a  == n; //  true  when  a*a  is  n  and  false  otherwise
}

// perfect_square(35)  is   0
// perfect_square(49)  is   non-zero

main()
{
		int  n;
		printf("Enter any number : ");
		scanf("%d"  , &n);  //  reads  input to  variable  'n'
		if (perfect_square(n)) // is  'n'  perfect  square  ?
				printf("Perfect Square \n");
		else
				printf("Not  a  perfect square  \n");
}
