// same program using pointers
#include <stdio.h>
int  length(char  *a)
{
		char  *p = a;  //  'p'  points  to  1st  char  of  the  string  becoz  'a'  is  address  of  1st  char
		while(*p  !=  '\0')  // Keep  moving  pointer  until  '\0'  is  reached
					p++;  // pointer  'p'  moves  to  next  character  of   the  string
		return  p - a;  //   Last  address  -  base  address  is   string  length
}

/*
            a     a+1     a+2   a+3    a+4
a  --->   R      A        M       A       \0

1)  'p'  is  address  of  each  character  in the  string

2) *p  is   each  character  of   the  string

3) int  *p =  a  leads  to  error   becoz   type  of  'a'  is  char*

4) while(*p  !=  '\0')
          is   same   as
    while(*p)   --->   !=  '\0'   is  optional   in  the  condition

5) p + a , p * a and  p / a   are  invalid
    p -  a    is  valid   and  result  is  integer

6) Characters  of  the  string  can  be  accessed  in  2  ways
    a)   a[i]  ,  Initial  value  of   'i'  is  0 ,  type  of  'i'  is  int   but  not   float (subscript  can  not  be  float)
    b)   *p ,  initial  value  of  'p'  is    a , type  of  'p'  is  char*  but  not  int*  becoz  'p'  points  to  each  character  of  the  string
*/
main()  //  same  as   previous  program
{
	char  a[40];
	printf("Enter  any  string : ");
	gets(a);
	printf("String  length : %d \n" , length(a));
}




/*
Characters  of  the  string  can  be  accessed  in   2  ways
1) a[i]   ---> character at subscript 'i'   (int  i = 0)
2) *p  --> character  at  address  'p' (char*  p = a)
*/