//  long  long   demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	long    long   x   =  25LL; // 'x'  is   variable  of  type  long  long 
	printf("x : %lld \n" , x); // 25
	printf("%d \n" , sizeof(x));  //  8 bytes
	printf("%lld \n" , LONG_LONG_MAX);  //  2 ^ 63 - 1
	printf("%lld \n" , LONG_LONG_MIN);  // -2 ^ 63
}


/*
long  long
----------------
1) long  long is an extension  to  long

2) It  takes  8B  of  memory  space    i.e.  64  bits.

3) First  bit  is  sign  bit  and   remaining  63    are  magnitude  bits.

4) Sign  bit  is  0  --->   +ve  magnitude.
    Sign  bit  is  1  --->   -ve  magnitude.

5) Maximum  value  of    long  long  int  is  2 ^ 63 - 1  and  
    minimum  is  -2 ^ 63

6) long  and  long  long    are  distinguished  by  LL

7) 25L  is  long  and  25LL  is  long  long  int

8) LONG_LONG_MAX    and   LONG_LONG_MIN   are   maximum    and  minimum  values   of  long  long  integer 

9) They  are  predefined  macros  in  <limits.h>  file

10) long  long    x;  --->    variable  x  can  hold  any  value  between  -2^63  to  2^63-1

11) Format  is   %lld
*/
