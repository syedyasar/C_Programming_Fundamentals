//  How  to  copy  contents of a  structure to another structure ?
#include  <stdio.h>
#pragma  pack (1)
struct  emp
{
	int  empno;
	char  ename[20];
	float  sal;
	char  gender;
};
main()
{
	struct  emp   a  =  {25 , "Rama  Rao" , 1000.65 , 'm'};
	struct  emp   b = a; // values  of   structure  'a'  are  copied  to  'b'
	printf("%d \n" , b . empno); // 25
	printf("%s \n" , b . ename); // Rama  Rao
	printf("%g \n" , b . sal); // 1000.65
	printf("%c \n" , b . gender); // m
}

/*
1)  b . empno = a . empno;
     strcpy(b . ename , a . ename);
     b . sal = a . sal;
     b . gender = a . gender;

2)  Each  member  need  not  be  copied  separately.  The  above  4  stmts  can  be  replaced  with  a  single
	 statement   b = a

3)  variable1 = variable2;    --->  valid   and  value  is  copied

4)  ptr1 =  ptr2;  --->  valid  and  address  is  copied

5)  structure1 = structure2;  --->  valid  and   values  are  copied

6)  array1 = array2;    --->  invalid   and   for  loop  is required   to  copy  contents  of  an  array  to  a  different
                                           array

7)  str1 = str2;      --->  invalid  and  strcpy()  is required   to  copy  string  from  an  array  to  a  different  array
*/