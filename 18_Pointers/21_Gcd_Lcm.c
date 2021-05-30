/*  Find  gcd and lcm of 2 numbers
main()  ---> reads   2    inputs ,  call  gcd_lcm  function and print  results
gcd_lcm()  --->  returns  gcd  and lcm   results

Function call :   gcd_lcm(a , b , &g , &l);
*/
#include  <stdio.h>
void  gcd_lcm(int , int , int * ,  int*);
main()
{
	int  a , b , g , l;
	printf("Enter  any  2  numbers \n");
	scanf("%d%d" , &a , &b); // reads   inputs  to  variables  'a'  and  'b'
	gcd_lcm(a , b , &g , &l); //  Function  is  storing  results  in  g  and  l    thru   pointers  p1  and  p2
	printf("Gcd : %d \n" , g);
	printf("Lcm : %d \n" , l);
}
void  gcd_lcm(int  m , int  n , int  *p1 , int*  p2) // p1  and  p2   are  pointers  to  main  function  variables  g  and  l
{
	int   x = m;  //  Values  of  m  and  n  are  copied   x  and   y  before  m and n  are  modified
	int   y = n;  
	while(m != n)  // Loop   is   executed  until  m  = n
	{
		if (m > n)  //  Result  of   Largest  number  -   smallest  number   is  stored  in  largest  variable
			m = m - n;
		else 
			n = n - m;  
	}
	*p1 = m; //  m   or  n   is   gcd
	*p2 = x * y / (*p1);  //  product  of   inputs  /   gcd   is   lcm
}



/*
1) x*y/*p1 ---> Error  becoz    /* is begining of the comment  and   error as there is no end of the comment

2) x*y/(*p1) --> alternative 1


3) x*y/   *p1  --> alternative 2

4) x*y/m    --> alternative 3

5) *p2 = m * n / (*p1)  ---> Wrong result as m and n are modified

6) gcd_lcm function returns 2 values indirectly to main function variables g and l thru pointers p1 and p2
*/