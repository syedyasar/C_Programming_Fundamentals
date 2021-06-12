// Addresses  of members
#include  <stdio.h>
#pragma  pack  (1)
struct  emp
{
	int  empno;
	char  ename[20];
	float  sal;
	char  gender;
};


main()
{
	struct  emp   a = {25 , "Rama Rao" , 1000.65 , 'm'};
	printf("%u\n" , &a . empno); // Address  of  empno  --->  may  be  1000
	printf("%u\n" , a . ename); // Address  of  ename  --->  1000 + 4 = 1004
	printf("%u\n" , &a . ename); // Address  of  ename  --->  1000 + 4 = 1004
	printf("%s\n" , a . ename); //  Rama  Rao
	printf("%u \n" , &a . sal);// Address  of  sal  --->  1004 + 20 = 1024
	printf("%u \n" , &a . gender); // Address  of   gender  --->  1024 + 4 = 1028
	printf("%u\n" , &a); // Address  of  structure  'a'   --->  1000
}

/*
1)  First  4B  is  for  empno ,  next  20B  is  for  ename , next  4B  is  for  sal,  next  1B  is  for  gender

2)  Address  of  structure  (&a)  and  address  of  first  member  (&a.empno)  are  same

3) &a.ename  and  a.ename are same
*/
