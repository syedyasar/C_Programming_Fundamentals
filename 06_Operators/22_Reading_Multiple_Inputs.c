// How  to  read   multiple  inputs ?
#include <stdio.h>
main()
{
	int  a , b , c;
	printf("Enter 3  integer inputs \n");
	scanf("%d%d%d" , &a , &b , &c); // 10   20    30
	printf("a : %d \n" , a);  // a :  10
	printf("b : %d \n" , b);  // b : 20
	printf("c : %d \n" , c);  // c : 30
}

/*

1) inputs  can  be separated  by  spacebar, tab  or  enter key

2)  %  is  called format specifier

3) There  can  be  spaces  between   formats
     i.e.   %d               %d                %d
*/

