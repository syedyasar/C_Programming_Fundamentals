// FInd Outputs

#include <stdio.h>
enum  color  {Red = 3 , Green , Blue = 2 , Yellow , White = 7 , Black = 5}; // enum  definition
typedef  enum  color  col; // enum  color  is  given a shortcut  name col
main()
{
	col    c = Yellow; //  'c'  is  variable  of  type  col
	printf("%d\n" , c); // 3
	c = 7;
	printf("%d\n" , c); // 7
	c = 100; // valid  even though  100  does  not  exist  in the  enumerator  list
	printf("%d\n" , c); // 100
	printf("Enter any number : ");
	scanf("%d" , &c); // input  must  be  integer  but  not  enumerator
	printf("%d\n" , c); // user  input
	printf("%d\n" , Red + Blue * Black); // 3 + 2 * 5 = 13
	printf("%d\n" , Red); // 3
	//c = pink; // Error  becoz  pink  is  not  a  valid  enumerator
}



/*
1) color is enum tag

2) Red , Green , Blue ,... are enumerators

3) Green  is  3 + 1 = 4   and   Yellow is  2 + 1 = 3 (previous value+1)

4) 2 enumerators may have same value but not same name (
    i.e. Red and Yellow have same value 3

5) If no value is assigned to first enumerator, value is 0

6) col  c = Yellow;  ----> 'c' is variable  of type col and 3 is assigned to variabe 'c' but not yellow

7) Arithmetic operations can be performed on enumerators becoz they are integers

8) "Red" is string  and type is char*
     Red   is  enumerator  and  type  is  int

9)  enum  color  {Red = 3 , Red = 5};   --->  Error  becoz  Red  enumerator  already  exists
*/
