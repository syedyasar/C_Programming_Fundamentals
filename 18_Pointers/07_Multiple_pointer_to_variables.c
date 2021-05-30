// Multiple  pointers  to variable
#include <stdio.h>
main()
{
        float    m = 10.8; 
		float   *p1 , *p2 , *p3; 
		p1 = p2 = p3 = &m; // p1 , p2  and  p3  point to same variable  m
		printf("%g\n" , *p1); //  that  value  where  p1  points  ---> 10.8 
		printf("%g\n" , *p2); //  that  value  where  p2  points  ---> 10.8
		printf("%g\n" , *p3);  //  that  value  where  p3  points  ---> 10.8
		printf("%g\n" , m);  // 10.8		
		printf("%d\n" , sizeof(p1));  //  p1  is  a  pointer  and 8B in  dev c++ 
		printf("%d\n" , sizeof(*p1)); // *p1  is  float  value  10.8  and  hence 4B
}




/*
1) Variabe    can  have  multiple  pointers

2) Let  p1  contains  address  2000  but  it  is  not  int  *p1

3) See  where  the  pointer  points  but  not  what  pointer  contains

4)  It  is  float  *p1  becoz   p1  points  to  float  variable  'm'

5)  Addresses  can  not  be  claimed as  integers

6) int  *a , *b , *c;   ---->  a , b  , c  are  pointers
    int *   a , b,  c;  ---->  a  is  pointer  but  b  and  c  are  variables
    Consider  int*   a , b , c;  --->   a  is  pointer  of   type  is  int* and   b  and  c  are  variables  of   type   int
    (*  is  only  for  'a'   but  not  for  b  and  c)
*/



