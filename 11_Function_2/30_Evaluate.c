//  Evaluate  1 / 1 -   1 / 2  +  1 / 4  -  1 / 6  + 1 / 8  -+  ...
#include <stdio.h>
float  series(int  n) // n  is  5
{
	float  sum = 1; // 1st  term 
	int  i , sign = -1; //sign  of  2nd  term
	for(i = 1 ; i <=  n - 1 ; i++)  //  Adds  remaining  n-1  temrs  of  the series  to  sum
	{
		sum += sign * 1.0 / (2 * i);  // sum = 1 - 0+ 0- 0+ 0
		sign = -sign; //  alternative -  and +
	}
	return  sum; // sum of  first  n  terms  
}

main()
{
		int  n;
		printf("How  many  terms ? : ");
		scanf("%d" , &n); // 5
		printf("Sum of  the series : %g \n" , series(n));
}

/*
1) Each  term  has  odd  denominator  except  1st  term . Hence  sum  is  initialized  to  1st  term  i.e.  1

2)  1 / (2 * i)  ---->  integer  result

3)  1.0 / (2 * i)  ---->  float  result
*/