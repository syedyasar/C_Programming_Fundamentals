/*
Find gcd and lcm of 2 numbers
1)  gcd(12, 15) = 3
2)  gcd(4 , 7) = 1
main()  --> reads  2 inputs , call  gcd  and lcm  functions and print  results
gcd(m,n)  ---> returns  gcd  of  m  and  n
largest  number  -  smallest  number  and  result  is  stored in the largest  variable ,  repeat  the  process until  
they  are  same
lcm(m,n)  --->  returns  lcm of  m  and  n
lcm(12 , 15) = 12 * 15 / gcd(12 , 15) = 180 / 3 = 60
*/



#include <stdio.h>
int  gcd(int   m , int   n)
{
		if ( m  == 0)
				return   n;
		else
		if (n == 0)
				return m;
		while(m !=  n)  //  Loop  is  executed  until  m = n
		{
			if (m > n) // largest number - smalles  number  and  result  is   stored  in  largest  variable
					m = m - n; 
			else
					n = n - m; 
		}
		return   m;  // m  or  n  is  gcd
} 

// gcd(12 , 15)  is   3
// gcd(4 , 7)  is   1

int  lcm(int  m , int  n) // m is  12, n  is  15
{
		return m * n / gcd(m , n); //  product  of  the  2  numbers / gcd  is  lcm
}

// lcm(12 , 15)  =  60

main()
{
		int  m ,  n;
		printf("Enter  any  2  numbers \n");
		scanf("%d%d" , &m , &n); // 12   15
		printf("Gcd :  %d \n" , gcd(m , n)); //   gcd(12 , 15)  =  3
		printf("Lcm :  %d \n" , lcm(m , n)); //  lcm(12 , 15) = 60
}

/*
1)  main  calls  lcm  and   gcd   functions  

2)  lcm  inturn   calls  gcd  function

3) Therefore  gcd  function  is  executed twice

4) gcd  and  lcm  can not be  integrated into a single  function  becoz   function  can  not  return 2  results
*/