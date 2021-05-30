// Find  outputs of the program
#include <stdio.h>
void square(int , int*);
main()
{
	int  a = 3 , b = 4;
	square(a , &b);// function can  not  modify  value  'a'   but  value  of  'b'  is  modified
	printf("a : %d \n" , a); // 3
	printf("b : %d \n" , b); //  16
}



void square(int x , int *y)  // x   is   3  and  'y'  points  to  main  function  variable  'b'
{
		x = x * x;  // x   =  3 * 3 = 9
		*y = *y   *  *y;  // b = b * b = 4 * 4 = 16
}
