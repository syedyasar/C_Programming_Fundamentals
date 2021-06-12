//  Can  members  of  different  structures have  same  names ?  --->  Yes
#include <stdio.h>
struct  s1
{
	int   x;
} ; // ;  is  mandatory

struct  s2
{
	float   x;
} ;// ;  is  optional

main()
{
	struct  s1   a; // 'a'  is  structure  and  type  is  s1
	struct  s2   b;  // 'b'  is  structure  and  type  is  s2
	a  .  x = 25;
	b  .  x = 10.8;
	printf("%d \n" , a . x); // 25
	printf("%g \n" , b . x); // 10.8
}

/*

1)  Same  member  is  allowed  in different  structures
     i.e. Member  'x'  is  allowed  in  structures  s1  and  s2

2)  struct  s1
     {
         int  x;
     };
     
    struct  s1  --->  Error   becoz  struct  s1  is  already   defined
     {
         float   x;
     };

3) No  2  structures can have  same tag

*/
