// Macro  with  parameters
#include  <stdio.h>
#define  CUBE(x)    x *  x * x   //  Macro  contains  expression
main()
{
	float  r = 3.5;
	printf("%f\n" , CUBE(r));  //  r * r * r  is   substituted  ---> Result : 3.5 ^ 3
	int  x  =  5;
	printf("%d\n" , CUBE(x));  // x * x * x  is  substituted  ---> Result :  125
	printf("%d\n" , CUBE(4 + 2)); //  4+2 * 4+2 * 4+2  is  substituted  ---> Result :  22
	printf("%d\n" , 27 /  CUBE(2 + 1)); // 27 / 2+ 1 * 2+ 1 * 2+1 ---> Result :  18
}



/*
1) CUBE is  a macro  with parameter  x

2) Macro CUBE contains expression x * x  * x

3) CUBE(r)  ---->  r * r * r is substituted

4) Parameter  x  is  replaced  with  r  when  macro  CUBE  is  called

5) CUBE(4+2)  ---> 4 + 2  *  4 + 2  *  4 + 2  ---> Incorrect result  becoz  parameter   'x'   is not enclosed in  brackets

6) Preprocessor does only substitution but not execution.
    It  is   OS   which    does executio
*/
