
//  long  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	long  x   =  25; // 'x' is  variable of  type  long
	printf("x : %ld \n" , x);  // 25
	printf("%d \n" , sizeof(x)); //  4
	printf("%ld \n" , LONG_MAX);  // 2 ^ 31 - 1
	printf("%ld \n" , LONG_MIN); // -2  ^ 31
}

/*
long
-------
1) long  is   an  extension  to  int

2) It  is  also  4B

3) Maximum   value  of    long  is  2^31-1  and    minimum  value   is  -2^31

4) LONG_MAX  and  LONG_MIN   are  maximum  and  minimum  values   of  long  integer,

5) They  are  predefined  macros  in  <limits.h>  file

6) int  and  long  are  distinguished  by  L  or  l
    i.e.  25L   is    long    and  25  is  integer

7) long    x;    ---->  Variable  x  can  hold  any  value  between  -2^31  to  2^31-1

8) Format  is  %ld

9)  long  int   x ;   is   same  as  long   x;
*/
