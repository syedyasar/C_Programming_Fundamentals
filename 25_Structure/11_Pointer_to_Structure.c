//  pointer  to  structure  demo  program
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
	struct  emp   a  =  { 25, "Rama Rao" , 1000.65 , 'm' };
	struct  emp*    p = &a; // Address  of  structure  'a'  is  assigned  to  p  and hence  'p'  points  to  structure  'a'
	printf("p -> empno  :  %d \n" , p -> empno); // 25
 	printf("p -> ename  :  %s \n" , p -> ename); // Rama  Rao
	printf("p -> sal  :  %g \n" , p -> sal); // 1000.65
	printf("p -> gender  :  %c \n" , p -> gender); //  m
	printf("\n");
	printf("(*p) . empno  :  %d \n" , (*p) . empno);  //  25
	printf("(*p) . ename  :  %s \n" , (*p) . ename); // Rama  Rao
	printf("(*p) . sal  :  %g \n" , (*p) .  sal); // 1000.65
	printf("(*p) . gender  :  %c \n" , (*p) . gender); // m
	//printf("*p . empno  :  %c \n" , *p . empno); //  Error  becoz  p.empno  is  executed  first  and  since 'p'  is  a  pointer ,  it must  be p -> empno  but  not  p . empno
	printf("\n");
	printf("sizeof(p) :  %d \n" , sizeof(p)); //  p  is  pointer  and  hence  8B in  Dev  c++
	printf("sizeof(*p) :  %d \n" , sizeof(*p)); // *p  is  structure  and  hence  29B
}



/*
1) Address  of  structure  'a'  is  assigned  to  pointer   'p'.
    So  'p'  points  to  structure  'a'

2) ->  operator   is  used   to  access  structure  through   pointer     where      '->'  is  arrow  operator

3)  p  is  pointer   and   *p  is  structure.

4)  *p  means  that   structure  where   'p'   points    i.e.    structure    'a'

5) Prove  that   *p  is   structure  --->    p = &a  --->  *p = *&a = a

6)   '.'  operator  is  used    to  access  member  wrt  structure  i.e.  structure . member
       ->  operator  is  used   to  access  member  thru  pointer   i.e.  pointer -> member

7) *p . empno  is  invalid  becoz   '.'  has  higher  priority  over  '*'
     Hence  p . empno  is  executed  first  and  it    leads  to  error.
     Since  p  is   a   pointer, It  must  be  p -> empno  but not   p.empno

8)  Therefore  *p   must  be  enclosed   in  ()
*/