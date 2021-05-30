/* Recursive power function
4.5 ^ 3 = 4.5 * 4.5 ^ 2
4.5 ^ -3 = 1 / 4.5 * 4.5 ^ -2
4.5 ^ 0 = 1
*/
#include  <stdio.h>
double  power(float  a , int  b) //  a  is  4.5 , b  is  0
{
		if (b > 0)
			return  a * power(a , b - 1);
		else
		if (b < 0)
				return  1 / a * power(a , b + 1);
		else
				return  1;
}
/*
1)  power(4.5 , 3) =  4.5 * power(4.5 , 2)
                             = 4.5 * 4.5 * power(4.5 , 1) 
                             = 4.5 * 4.5 * 4.5 * power(4.5 , 0)
                             = 4.5 * 4.5 * 4.5 * 1 = 4.5 ^ 3

2) power(4.5 , -3)  =  1 / 4.5 * power(4.5 , -2)
                              = 1 /  4.5 * 1 / 4.5 * power(4.5 , -1)
                              = 1 /  4.5 * 1 / 4.5 * 1 / 4.5 * power(4.5 , 0)
                              = 1 /  4.5 * 1 / 4.5 * 1 / 4.5 * 1 = 1 / 4.5 ^ 3

Number of  Function  calls :   abs(b) + 1
*/

int main()
{
	float  a;
	int  b;
	printf("Enter Base : ");
	scanf("%f" , &a); // 4.5
	printf("Enter  power : ");
	scanf("%d" , &b);  //  3
	printf("%g  ^  %d  :   %lg \n" , a , b , power(a , b));
}


