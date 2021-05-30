// NULL  pointer demo program
#include <stdio.h>
main()
{
	int    a = 25;
    int  *p1 = &a;   //  p1   points  to  variable   'a'
	int  *p2 = NULL; //  p2  points  to  no  variable 
	int  *p3;        //  p3  points  to  an  arbitary  location
    //int  *p4 = -1; //  Error  becoz  pointer  can  not  hold  value  like  -1
	printf("%d\n" , *p1);     //  25
	//printf("%d\n" , *p2);   //  Error  becoz  p2  points  to  no  variable  
	//printf("%d\n" , *p3);   // Error  
}


/*

NULL   pointer
-----------------------
1) NULL  means  no  address

2) When  a  pointer  is  not  initialized, It  contains garbage   address. Hence  initialize  the pointer to NULL 
     to  avoid   garbage  address

3) int  *p = NULL;  ---->  No  address  is  assigned  to  p . So  p   is  an  empty  pointer   and  it  points  to  no  variable

4) NULL   is  a  predefined  macro  in  <stdio.h>

5) NULL   is   nothing  but   0  (i.e.  #define  NULL  0)

6) It  is  a  pointer  constant

7) NULL++    and    NULL--  are  invalid  becoz   constant    can  not  be  modified

8)   25  is  int  constant
     10.8f  is  float  constant
     'g'  is  char  constant
     "Hyd"  is  string  constant
    NULL  is  pointer  constant

9)  constant    is  also  called  literal


*/
