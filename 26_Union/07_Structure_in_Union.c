//Structure in union
#include <stdio.h>
#pragma pack (1)

struct    s1 // it  must be  defined  before  union
{
	short  x; // First  2B
	float  y;  // Next  4B
	char  ch; // Next  1B
};

union   u1
{
	short   a; // First  2B
	float   b;  // First  4B
	char  c; // First  1B
	struct  s1  s; // First  7B
};

// Inner  structure  must  be  defined  before  outer  union

main()
{
 	union  u1  u; // Union  is  craated
	printf("size of union : %d \n" , sizeof(u)); // max(2 , 4 , 1 , 7) = 7B
	u . a = 25; //  25   is   represented  in  first  2B
	u . b = 10.8;  //  10.8  is   represented  in  first  4B   replacing   25
	u . c = 'g'; //   'g'    is   represented  in  first  byte  replacing  first  byte  of  10.8
	u . s . x = 37;  //  37   is   represented  in  first  2B  replacing  'g'
	u . s . y = 45.6; //  45.6   is   represented  in   next   4B
	u . s . ch = 's'; // 's'  is  represented  in  last   byte
	u . a = 65;  // 65  is  represented  in  first 2B replacing  37  and  remaining  5  bytes  are  unchanged
	printf("u . a : %d \n" , u . a); //  First  2B  --->  65
	printf("u . b : %f \n" , u . b); // First  4B  ---> Garbage  value
	printf("u . c : %c   \n" , u . c); // First  1B  ---> Garbage  value
	printf("u . s . x : %d \n" , u . s . x); //  First  2B   --->  65
	printf("u . s . y : %g \n" , u . s . y); // Next   4B  --->  45.6
	printf("u . s . ch : %c \n" , u . s . ch); // Last   1B  --->  s
}
