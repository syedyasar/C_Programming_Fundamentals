//Find outputs
#include<stdio.h>
int main()
{
		int  a = 7;
		int  b = a++   +   ++a   +   a++   +   ++a;
		printf("a : %d \n" , a); // 11
		printf("b : %d \n " , b);  //   36
}




/*

1. Preincrement and decrement  are  evaluated
    There  are  2  preincrements
    i.e. a is 9

2. Statement  is  executed
     i.e. b  =  9 + 9 + 9 + 9 = 36

3. Post  increment and decrement  are  evaluated
    There  are  2 post increments
	i.e. a  is  11

4) Last parameter is first evaluated but not last operand
*/

