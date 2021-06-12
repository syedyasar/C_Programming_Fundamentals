// call - by - address  demo  program
#include <stdio.h>
struct  date_tag
{
	int dd , mm , yy;
};
typedef  struct  date_tag  date;

void  f1(date*  p)  //  p   points  to  main  function  structure  'a'
{
		p -> dd++; // structure  'a'  is  incremented  thru  pointer 'p'
		p -> mm++;
		p -> yy++;
}

main()
{
	date  a = {15 , 8 , 1947};
	f1(&a);
	printf("%d  -  %d  -  %d  \n" , a . dd , a . mm , a . yy); // 16-9-1948
}


/*
Call-By-Address
--------------------------
1) Sending  address  of  structure  to  the  function  is  known  as  CBA

2) f1(&a);  ---->  f1  function  is  called  by  sending  address  of  structure  'a'

3) It  is  copied  to  formal  parameter  'p'
    i.e. date*   p = &a;

4) So,  p  points  to  main  function  structure  'a'

5) f1  function  modifies   structure  'a'  thru  pointer  p

6) f1  function   modifies   p -> dd , p -> mm , p -> yy  and     structure  'a'  is  modified  internally

7) To  modify  structure  in  a  function,  send  its  address  to  the  function

Note:
f1(variable);    --->  f1   function  can  access  value  of  the  variable  but  it  can  not  modify  variable
f2(&variable);  --->  f2  function  can  modify  value  of  variable   thru  pointer
f3(pointer);    --->  f3  function  can  modify  *pointer  but  not  pointer
f4(&pointer);  --->  f4  function  can  modify  pointer  thru  another  pointer
f5(structure);  --->  f5  function  can  not  modify  contents  of  the  structure
f6(&structure);  --->  f6  function  can  modify  contents  of  the  structure  thru  pointer
f7(array);   --->  f7  function   can  modify  contents  of  array  thru   pointer
*/