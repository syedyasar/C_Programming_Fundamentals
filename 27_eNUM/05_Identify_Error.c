// Identify  Error
#include <stdio.h>
//enum  test  {a = 10.8 , b = 20.6}; // Error  becoz  enumerators  can  not  be  floats
enum  sample   {x = 'A' , y}; // Valid
main()
{
	printf("%d\n" , x); // Ascii  value  of  'A'  --->  65
	printf("%c\n" , y); // y  is  'A' + 1 = 'B'
}