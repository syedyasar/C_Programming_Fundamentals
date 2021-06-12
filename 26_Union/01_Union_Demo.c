// union  demo  program
#include <stdio.h>
#pragma  pack (1)
union  emp  // Union  definition  and  emp  is  union  tag
{
	short  empno; // First  2B
	float  sal; // First 4B
	char  gender; // First  byte
}; // End  of  union  definition
main()
{
	union  emp  a;  // Union   is  created
	printf("size  of  union  :  %d\n" , sizeof(union  emp)); // max(2 , 4 , 1) = 4B
	a . gender = 'm'; //  'm'  is  represented in 1st  byte  of  union
	a . empno = 25; // 25  is  represented  in  first   2B   replacing  'm'
	a . sal = 1000.65; // 1000.65 is  represented  in  all  4B  replacing  25
	a . gender = 'f';  // 'f'  is  represented  in  1st  byte  replacing  1st  byte  of   1000.65  and  remaining  3B  are unchanged
	printf("Emp Number  :  %hd\n" , a . empno); // First  2B  ---> Garbage  value
	printf("Salary  :  %f\n" , a . sal); // First   4B  ---> garbage  value
	printf("Gender  :  %c\n"  , a . gender); // First  1B   ---> F
}
