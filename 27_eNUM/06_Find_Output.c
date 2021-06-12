// Find output
#include <stdio.h>
enum  marital_status  {Bachelor , Married , Divorced , Widowed}; // values of  enumerators  are  0  to  3
struct  emp
{
	int   empno;
	char  ename[20];
	float   sal;
	enum  marital_status   ms; // ms  is  a  member  of  type  enum  marital_status
};
main()
{
	struct  emp  a = {25 , "Rama Rao" , 10000.0 , Married}; // structure  contains 1  but  not  Married
	printf("%d\n"  ,  a . ms); //  1
}

/*
1) structure ,  union and enum have same syntax. They  demand definition  ,  declaration  ,  tag  and  members

2) enum is used to define user defined data type i.e. EDT(Enumerated  Data  Type)

3)   int , float , char , .... are PDT's (Primitive  Data  Types)
      com , stud , date , .... are ADT's(Abstract  Data  Types)
      bool , col , .... are EDT's (Enumerated  Data  Types)
*/
