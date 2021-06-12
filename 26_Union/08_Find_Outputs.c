// Find  outputs
#include <stdio.h>
#pragma pack (1)
struct    s1
{
	short   x;
	float   y;
	char  ch;
};
union   u1
{
	short   a;
	float  b;
	char  c;
	struct  s1  s;
};
main()
{
 	union  u1  u;
	printf("size of union : %d \n" , sizeof(u));
	u . a = 25;
	u . b = 10.8;
	u . c = 'g';
	u . s . x = 37;
	u . s . y = 45.6;
	u . s . ch = 's';
	u . b = 75.2;
	printf(" u . a : %d \n" , u . a);
	printf(" u . b : %g \n" , u . b);
	printf(" u . c : %c   \n" , u . c);
	printf(" u . s . x : %d \n" , u . s . x);
	printf(" u . s .  y : %g \n" , u . s . y);
	printf(" u . s . ch : %c \n" , u . s . ch);
}
