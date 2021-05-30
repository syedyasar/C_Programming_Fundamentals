// Pointer to Pointer demo program
#include <stdio.h>
main()
{
        int    a = 25; // a   is  variable  with  value  25
		int    *b = &a; // b  points  to  variable  'a'
		int  **c = &b;  // c  points  to  pointer  'b'
		printf("a : %d\n" , a); // 25
		printf("*b : %d\n" , *b);  // that  value  where 'b'  points  --->  25
		printf("**c : %d\n" , **c); //  25
		printf("b :  %u\n" , b);  //  address  of  variable   'a' (may  be  1000)
		printf("&a :  %u\n" , &a); //  address  of  variable  'a'(1000)
		printf("*c : %u\n" , *c); //  that  address  where  'c'   points  (may  be  1000)
		printf("c  :  %u\n" , c);  //  address  of  pointer  'b' (may  be  2000)
		printf("&b  :  %u\n" , &b); //  address  of  pointer  'b' (2000)
		//printf("%u\n" , &&a); //  Error  becoz  &  can  not  be  used  multiple  times
		int  ***d = &c;   //  d   points  to  double  pointer  'c'
		printf("***d  :  %d\n" , ***d); // 25
}



/*
1)  Address  of  variable  'a'  is  assigned  to  pointer  b  and     hence   b  points    to  variable  'a'

2) Address  of  pointer  'b'  is  assigned  to  c  and    hence  c  points    to  pointer  b.
    'c' is  called double  pointer

3) a  is  variable, b  is  pointer  and c  is  pointer  to  pointer.

4) Type  of  a  is  int,  b  is  int*  and  c  is  int**

5) a  contains  value , b  contains  address  and   c  contains  address  of  address

6)  c  is  address  of  address  (2000)
     *c  is  address(1000)
     **c  is  value  (25)
 
 7) *c  internally  access  pointer  b  and 
     **c  internally  access  variable  a

8)  a , *b  and  **c  are  25
     &a , b  and  *c  are  address  1000
     &b  and  c  are  address  of  address  2000

9) Address  of  pointer  'c'  is  assigned  to   d   and    hence  d  points    to   double   pointer  'c'.
    'd' is  called  triple   pointer
	 
10)  d  is  a  pointer  to  double  pointer  c
       ***d  is  25

11)  As  number   of  *'s  increase,  program   complexity  also  increases.

12)  It  becomes  difficult  to  understand  the  program   and  execution  becomes  slow.
       So   Using  too  many  *'s  is  a  bad  programming
*/