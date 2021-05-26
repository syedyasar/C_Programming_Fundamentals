// Find  output
#include  <stdio.h>
#define  pf(x)   printf("x : %d \n" , x) ; // pf  is  a  macro  with  printf  statement 
main()
{
	int  a  = 25;
	pf(a); // printf("x : %d \n" , a);;   is   substituted  --->  x : 25
}


/*
1)  Parameter  'x'  is  replaced with 'a' when macro pf is called

2)  'x'  is  replaced with  'a' outside the  quotes but not inside  the  quotes

3) There  are  2  semicolons at  the end of  printf
*/
