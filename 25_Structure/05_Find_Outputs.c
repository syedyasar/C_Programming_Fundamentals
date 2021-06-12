// Find  outputs
#include  <stdio.h>
#pragma  pack  (1)
struct  Emp
{
	int  empno;
	char  ename[20];
	float  sal;
	char  gender;
} a , b , c; //  a , b  and  c   are  structures  of  type Emp
main()
{
	printf("%d \n" , sizeof(a)); //  29B
	printf("%d \n" , sizeof(b)); // 29B
	printf("%d \n" , sizeof(c)); // 29B
	printf("%u \n" , &a); // address of  structure  'a'  may be  1000
	printf("%u \n" , &b); // address of  structure  'b'  may be  2000
	printf("%u \n" , &c); // address of  structure  'c'  may be  3000
}


/*
1)     struct  Emp
		{
				int  empno;
				char  ename[20];
				float  sal;
				char  gender;
		};  ---->  structure  definition
        struct  emp   a , b , c;    ---> structure  declaration

2) Structure  definition   and  declaration  can  be  combined  together
	struct  Emp
	{
		int  empno;
		char  ename[20];
		float  sal;
		char  gender;
	}a , b , c;
*/