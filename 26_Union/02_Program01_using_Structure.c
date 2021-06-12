// same  program with structure
#include <stdio.h>
#pragma pack (1)
struct emp
{
	short  empno; // First  2B
	float  sal; // Next 4B
	char  gender; // Next 1B
};
main()
{
	struct  emp  a; // structure  is  created
	printf("Size  of  structure : %d\n" , sizeof(struct  emp)); // 2 + 4 + 1 = 7B
	a . gender = 'm';
	a . empno = 25;
	a . sal = 1000.65;
	a . gender = 'f';
	printf("Emp no : %d \n" ,  a . empno); //  25
	printf("Salary : %g \n" , a . sal); //  1000.65
	printf("Gender : %c \n" , a . gender); // f
}
