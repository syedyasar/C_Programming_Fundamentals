// How  to  send  an  array  to  a  function ?
#include <stdio.h>
void  f1(int*);
main()
{
	int  i;
	int  a[] = {10 , 20 , 30 , 40};
	f1(a); //  Address  of  array   'a'  is  sent  to  f1   function
	for(i = 0 ; i <= 3 ; i++) 
				printf("%d\n" , a[i]); //  prints  a[i]  where  'i'  varies  from  0  to  3   --->  11   21   31    41
}
void  f1(int   *p) // p   points   to  main   function  array  'a'
{
	int  i;
	for(i = 0 ; i <= 3 ; i++) // Incrementing  elements  of   array   thru   pointer  'p'
				p[i]++; 
}


/*
1) To  send  an  array  to  a  function,  send  address  of  array

2) Sending  address  of  array  is  as  good  as sending  whole  array  to  the  function

3) Don't  send  each  element  of  array  separately  to  the  function.
    i.e.  f1(a[0] , a[1] , a[2] , a[3])  is  not  a  good  idea  becoz   too  many  parameterss  are  involved
    Hence  f1(a)  is  enough

4) Array  supports  both  CBV  and  CBA  but  CBV  is  not  preferred  becoz  of   too  many  parameters

5) Hence CBA   is  used  for  arrays

6) Address  of  array  'a'   is  copied  to  formal  parameter  'p'
    i.e.  int  *p = a  --->  p  points  to  main  function  array  'a'

7)  f1  function  can  modify  elements  of  array  'a'  thru  pointer  'p'

8)  f1  function  modifies  p[0] , p[1] , p[2] , p[3]     and    Array  'a'  is  modified  internally

9)  In  general,  if  a  function  modifies    elements  of  array,  changes  are  automatically  visible  to  calling
    function  without  return  statement

10)  This  is  possible  becoz  address  of  array  is  passed  from  function  call

11)  int  *p  and  int  p[]  are  same  in  formal  parameter  becoz   actual  paramter  is  array

12)   f1(variable);  --->  f1  function  can  not  modify  value  of  variable
        f2(&variable);  --->  f2  function  can  modify  value  of  variable   thru  pointer
        f3(ptr);  --->    f3  function  can  not  modify   pointer  but   it  can  modify  *ptr 
		f4(&ptr);    --->  f4  function  can  modify   pointer  through   another  pointer
	    f5(arrayname);  -->  f5  function  can  modify  elements  of  array  through   pointer
*/
