// Find  outputs
#include <stdio.h>
union  test  //  test  is  union  tag
{
	int  x; //  First  4B
	int  y; //  First   4B
};
main()
{
	union  test   a; // union  is   created
	printf("size of the union : %d \n" , sizeof(a)); // max(4 , 4) = 4
	a . x = 25; //  25   is  represented in  first  4B  of  union
	printf("%d\n" , a . y);  // First   4B   ----> 25
}
