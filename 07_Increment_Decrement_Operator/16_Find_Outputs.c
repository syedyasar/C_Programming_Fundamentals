//Find outputs
#include<stdio.h>
int main()
{
		int  a = 7;
		int  b =  a--   +    ++a   +   a++   +   --a;
		printf("a : %d\n" , a); // 7
		printf("b : %d\n" , b); //   28 
}


/*
1) Evaluate  preincrement and decrement
     a  is   7

2) Execute  the statement
   b = 7 + 7 + 7 + 7 = 28

3) Evaluate postincrement and  decrement
   a  is   7
*/

