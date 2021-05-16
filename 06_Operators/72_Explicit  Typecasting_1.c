//  Explicit  Typecasting  demo   program
#include  <stdio.h>
main()
{
	int  a  =  9 , b  =  2;
	printf("%d\n" , a  /  b); //  9 / 2 = 4
	printf("%g\n" , (float)a  /  b); //  9.0 / 2 = 4.5
	printf("%g\n" , a  / (float)b);   // 9 / 2.0  =  4.5
	printf("a : %d  \n" , a); //  it is  9  but  not  9.0
	printf("b : %d  \n" , b); //  it is 2  but not  2.0
}

/*
Explicit    typecasting
-----------------------------------
1)  Typecasting    is    made    by    programmer.

2)  ()    are   mandatory     to    cast    a    variable  or  value.

3) (float) a  ---->   variable 'a' is converted to float

4) Typecast is not for the whole program
*/
