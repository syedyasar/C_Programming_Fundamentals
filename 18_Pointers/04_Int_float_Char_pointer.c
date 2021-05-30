// Int  pointer , float  pointer and  char  pointer  demo  program
#include <stdio.h>
main()
{
	int   a  = 25;
	float  b = 10.8;
	char  ch = 'g';
	int   *p1;  // p1  is  integer  pointer
	float  *p2;  // p2  is  float  pointer
	char  *p3; // p3  is   char  pointer
	p1 = &a;  // p1  points  to  variable  'a'  becoz  p1  contains  address  of  variable  'a'
	p2 = &b;   // p2  points  to  variable  'b'  becoz  p2  contains  address  of  variable  'b'
	p3 = &ch;  // p3  points  to  variable  ch  becoz  p3  contains  address  of  variable  ch
	printf("%d\n" , *p1);  //  that  value  where  p1  points  i.e. 25
	printf("%g\n" , *p2);  //  that  value  where  p2  points  i.e.  10.8
	printf("%c\n" , *p3); //  that  value  where  p3  points  i.e.  g
}



/*

1)  p1  is  a  pointer  to  integer,  p2  is  a  pointer  to  float  and    p3  is  a  pointer  to  character

2)  p1  is  an  int  pointer,  p2  is  a  float    pointer  and    p3  is  a  char    pointer

3)  float  pointer  does  not  mean  that  it  contains  float  address,  instead  it  points  to  a  float  variable.
	 
4)  Similarly,  char  pointer  points  to  char  variable

5)  float   b  =  10.8;
     int  *p2 =  &b ;  --->  Error  due  to mismatch  i.e. LHS  type  is  int*  and  RHS  type  is  float*

*/
