// Identify error
#include <stdio.h>
#define  PI  =3.14159
main()
{
	float  r = 3.5;
	float  area = PI * r  * r; // =  is  also   substituted  when  macro  PI  is   callled
	printf("Area : %g \n" , area);
}


/*
1)  float  area = PI * r * r  becomes   float   area == 3.14159 * r * r ---> == is  not  allowed  in  declaration  statement

2)  No  ;  and  =  in  the  macro  definition
*/
