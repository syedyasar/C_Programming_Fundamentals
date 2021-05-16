//  Explicit  Typecasting  demo  prog2
#include  <stdio.h>
main()
{
	float    a  =  9.8 ,   b  =  5.6;
	//printf("%f\n" , a  %  b); //  Error  becoz  %  can  not  have  float  operands
	printf("%d\n" , (int)a    %  (int)b); //  9  % 5 = 4
	printf("a  :  %g  \n" , a); //  it  is  9.8  but  not   9
	printf("b  :  %g  \n" , b); //  it  is  5.6  but  not   5
}


/*
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
       int    x                                                                                                   (int)x
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1)  It    is    Declaration    becoz      ()    are    missing            1)    It    is    Typecast    due    to    ()

2)    x    is    variable    of    type    int                                     2)    variable  x    is    converted    to    int


*/
