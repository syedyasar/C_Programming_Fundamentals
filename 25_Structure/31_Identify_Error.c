// Identify  error
#include <stdio.h>
struct  s1
{
	int   x;
	float   y;
	struct   s1   p;  //  Error  becoz  p  must   be  pointer  but  not  structure
};
main()
{
}
