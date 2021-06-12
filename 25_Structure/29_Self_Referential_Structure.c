// Self  Referential  Structure(SRS)  demo  program
#include <stdio.h>
struct   emp
{
	int  empno;
	char ename[20];
	float  sal;
	struct  emp   *link; // link  is   a  pointer   to   emp   structure
};
main()
{
	struct  emp   a = {10 , "Rama Rao" ,  10000.0};
	struct  emp   b = {20 , "Sita" , 20000.0};
	a . link = &b; // a.link  points   to  structure  'b'
	b . link = &a; // b.link  points  to  structure  'a'
	printf("b :   %d \t %s \t %g \n" , a . link -> empno , a . link -> ename ,  a . link -> sal); //  structure  'b'  is  printed  wrt  structure  'a'
	printf("a :   %d \t %s \t %g  \n" , b . link -> empno ,  b . link -> ename , b . link -> sal);  //  structure  'a'  is  printed  wrt  structure  'b'
}


/*
Self  Referential  Structure(SRS)
-----------------------------------------------------
1) If  a  structure  contains  address  of  another  structure  and  if   both  the  structures  are  of  same    type,
    it  is  known  as  SRS
    i.e. Similar  type  of  structures  are  linked

2) a . link = &b;  ---->  Address  of  structure  'b'  is  assigned  to  a . link.

3) So  a . link  points  to  structure  'b'  and  structures    'a'  and  'b'  are  of  same  type  i.e.  struct  emp.
    This   is  known  as   SRS

4) SRS  is  used  in  designing  Linked  list programs

5) struct  emp  is  used  as  a  data  type  of   member  link.
    Therefore  struct  emp  is  SRS
*/
