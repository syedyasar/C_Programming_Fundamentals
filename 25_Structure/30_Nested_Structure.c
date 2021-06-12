//  Nested structure   demo  program
#include <stdio.h>
struct   emp
{
	int  empno;
	char ename[20];
	float  sal;
	struct  stud   *link; //   This  is  nested  structure  but    not  SRS  becoz  struct   emp  contains  struct  stud
};
struct  stud
{
	int  rno;
	char  sname[20];
	int  marks;
	struct  emp  *next;  //   This  is  nested  structure  but    not  SRS  becoz  struct  stud  contains  struct  emp
};
main()
{
	struct  emp   a = {10 , "Rama Rao" , 10000.0};
	struct  stud   b = {20 , "Sita" , 250};
	a . link = &b;  //  a.link  points  to  structure  'b'
	b . next = &a; // b.next  points  to  structure  'a'
	printf("b :   %d \t %s \t %d  \n" , a . link -> rno , a . link -> sname , a . link -> marks); // structure  'b'  is  printed  wrt   structure  'a'
	printf("a :   %d \t %s \t %g  \n" , b . next -> empno , b . next -> ename , b . next -> sal);  // structure  'a'  is  printed  wrt   structure  'b'
}

/*
1) a . link = &b;  ---->   Address  of  structure  'b'  is  assigned  to  a . link

2) a . link   points  to  structure  'b'

3) structures  'a'  and  'b'  are  of  different  types

4) This  is  nested  structure  (but  not  SRS)    becoz    different  types  of  structures  are  linked
*/