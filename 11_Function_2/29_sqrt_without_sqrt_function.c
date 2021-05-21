// Find   square  root  of   a   number  without  using  sqrt  function
#include<stdio.h>
float  sqroot(float  x) 
{ 
	float  b , a = x; // Initilzation
	do
	{
			b = a; //  copies  value  of  'a'  to   b  and   then  'a'  is  modified
			a = (a + x / a) / 2; 
	}
	while (a != b); // Loop  is  executed  until  a  and  b  are  same
	return  a;  // a  or  b   is   sqrt(x)
}

/*   a =  ( a + x / a ) / 2 ---> 2a  =  a + x / a  ---> a = x / a  ---> a ^ 2 =  x  --->  a = sqrt(x)
                                             x = 49
      Iteration        b                a = ( a + x / a ) / 2                            b != a
   -------------------------------------------------------------------------------------------------------------------
         1                 49             a = ( 49 + 49 / 49 ) / 2 = 25                 true
         2                 25             a = ( 25 + 49 / 25 ) / 2 = 13.48            true
         3                 13.48        a = ( 13.48 + 49 / 13.48 ) / 2 = 8.56    true
         4                 8.56          a = ( 8.56  + 49 / 8.56 ) / 2 = 7.14       true
         5                 7.14          a = ( 7.14  + 49 / 7.14 ) / 2 = 7.00       true
         6                 7.00          a = ( 7.00  + 49 / 7.00 ) / 2 = 7.00       false
	 
*/
main()
{ 
	float  x; 
	printf("Enter any  number :  ");
	scanf("%f"  , &x);  //  49
	printf("Square  root  :  %g \n" ,  sqroot (x));
}


//x=a*a --> a= x/a --> 2*a = x/a +a --> a = (x/a + a)/2
