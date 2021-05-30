// void  pointer  demo  program
#include <stdio.h>
main()
{
	int    a =  25;
    float  b = 10.8;
	void    *p;
	p = &a; // void  pointer  points  to  int  variable  'a'
	//printf("%d\n" , *p); //  Error  becoz  variable  can  not  be  accessed  thru   void  pointer
	printf("%d\n" , * (int *) p); //  void   pointer  is  converted  to  int  pointer  and  then  variable  is  accessed  by  *p   --->  25
	p = &b; //  void  pointer  is  modified  to   float   variable  'b'
	//printf("%f\n", *p);    //  Error  becoz  variable  can  not  be  accessed  thru   void  pointer
	printf("%g\n", *(float  *)p); //  void   pointer  is  converted  to   float  pointer  and  then  variable  is  accessed  by  *p   --->  10.8
}


/*
1) int  pointer  can  point  to  int  variable,
    float  pointer  can  point  to  float  variable  and 
    char  pointer  can  point  to  char  variable.

2) void  pointer  can  point  to  any  type  of  variable
    i.e.  int  variable , float  variable , char  variable and  so  on

3) It  can  also  point  to  array , structure , function , file and  so on

4)  p  points  to  int  variable  'a'  when  p=&a  is  executed
     
5) If  p  is  int  pointer,  *p  is  25
    Since  p  is  void  pointer,  *p  is  invalid
	i.e.  Variable  can  not  be  accessed  thru  void  pointer

6)  Thus  dereferencing  void   pointer  is  not  allowed

7) Typecast  void  pointer  to  int  pointer  and  then  access  variable  by  *p
     i.e.  *(int    *)p  is  25

8) Similarly, p  points  to  float    variable  'b'  when  p=&b  is  executed
    If  p  is  float  pointer,  *p  is  10.8

9) Typecast    void  pointer  to  float  pointer  and  then  access  variable  by  *p
     i.e.   *(float  *)p  is  10.8

*/