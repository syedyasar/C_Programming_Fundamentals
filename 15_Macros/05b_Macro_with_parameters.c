//  Same  program  but  parameter  'x'  is  enclosed  in  ()
#include  <stdio.h>
#define CUBE(x)    (x) *  (x) * (x)
main()
{
	float  r = 3.5;
	printf("%g \n" , CUBE(r)); // (r) * (r) * (r)  is  substituted ---> Result : 3.5 ^ 3
	int  x  =  5;
	printf("%d\n" , CUBE(x));  // (x) * (x) * (x)  is  substituted---> Result :  125
	printf("%d\n" , CUBE(4 + 2)); // (4+2) * (4+2) * (4+2)  is  substituted ---> Result : 216
	printf("%d\n" , 27 / CUBE(2 + 1)); // 27 / (2+1) * (2+1) * (2+1)  ---> Result : 81
}

//  27 / CUBE(2 + 1)  leads to  incorrect  result  bcoz expression  (x) * (x) * (x)  is  not  in  brackets