//  typedef   demo  program
#include <stdio.h>
struct  emp
{
	int  empno;
	char  ename[20];
	float  sal;
};
typedef    int    integer;  //  int  is  given  another  name  integer
typedef   float   real; // float  is  given  a  new  name  real
typedef    char   character; // char  is   given  another  name  character
typedef   struct   emp   employee; // struct  emp  is  given a  shortcut  name  employee
//typedef   printf   pf; //  Error  becoz  printf  is  not  a  datatype
main()
{
	integer   a = 25;  //  'a'  is  variable  of  type  integer  (or)  int
	real   b  =  10.8; //  'b'  is  variable  of  type  real  (or)   float
	character   c = 'g';  //  'c'  is  variable  of  type  character  (or)  char
    employee   e = {32 , "Rama Rao", 10000.0}; //  'e'  is  structure  of  type   employee  (or)  struct  emp
	printf("a :  %d \n" , a); // 25
	printf("b :  %g \n" , b); //  10.8
	printf("c :  %c \n" , c); // g
	printf("e . empno  :  %d \n" , e . empno); // 32
	printf("e . ename  :  %s \n" , e . ename); // Rama  Rao
	printf("e . sal  :  %g \n" , e . sal); // 10000.0
}

/*
typedef
-------------
1) typedef  is  used   to  assign  another    name  to  existing  datatype

2) int  is  given  another  name  integer,
    float  is  given  a  new  name  real  and
	struct  emp  is  given  a  shortcut  name  employeee

3) old  name  is  not  lost

4) 'a'  is  variable    of  type  integer  (Or)  int

5) 'e'  is  structure  of  type  employee  (or)  struct  emp

6) typedef  printf   pf;  ---> Error  becoz   typedef    is  only  for  datatypes  but  not  for  functions

7)  #define is  used   to  assign  another      name  to  function
     Eg:  #define    pf    printf   --->  valid  and   pf   is   a   shortcut  name  to  function  printf
*/
