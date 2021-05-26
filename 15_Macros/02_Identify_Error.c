// Identify error
#include <stdio.h>
#define  PI  3.14159;  
main()
{
	float  r = 3.5;
	float  area  =  PI * r  * r; //  ;   is  also   substituted   when  macro   PI  is   callled   and  ;   in  the  middle   of  an  expression   leads  to  error
	printf("Area : %f \n",area);
}

//  PI  *  r  *   r    ----> 3.14159;  * r *  r  ----> Error  due  to  ;   in  the middle  of  an  expression
