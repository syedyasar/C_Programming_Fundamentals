// Same program but  expression is enclosed in  brackets
#include  <stdio.h>
#define CUBE(x)    ((x) *  (x) * (x)) 
main()
{
	float  r = 3.5;
	printf("%f\n" , CUBE(r));  //  ((r) * (r) * (r))  is  substituted ---> Result : 3.5 ^ 3
	int  x  =  5;
	printf("%d\n" , CUBE(x)); //  ((x) * (x) * (x))  is  substituted ---> Result : 125
	printf("%d\n" , CUBE(4 + 2)); //  ((4+2) * (4+2) * (4+2))  is  substituted ---> Result : 216
	printf("%d\n" , 27 / CUBE(2 + 1));  //  27 / //  ((2+1) * (2+1) * (2+1)) ---> Result : 1
}

// Both   parameter x  and  expresssion x * x *  x  must  be  enclosed  in   brackets  otherwise  incorrect  results
