//  int  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	int    x   =  25; // x  is  variable of  type  int
	printf("x : %d \n" , x); //  x : 25
	printf("%d \n" , sizeof(x));  //  4 bytes
	printf("%d \n" , INT_MAX); //  2 ^ 31 - 1
	printf("%d \n" , INT_MIN);  //  -2 ^ 31
	x = INT_MAX + 1;
    printf("%d \n" , x);  //  minimum value
	x = INT_MIN - 1;
	printf("%d \n" , x); // maximum value
}

/*
int
----
1) int  is  an  extension  to  short

2) It  takes  4B  of  memory  space    i.e.  32  bits.

3) First  bit  is  sign  bit  and    remaining  31  bits  are  magnitude  bits.

4) Sign  bit   is   0   ----> +ve  magnitude  and
    Sign  bit  is  1  ---->  -ve  magnitude.
     Eg    :      1010    0101    1110  0110  1010    0101    1110  0110  -->  32  bits

5) Maximum  value  of   integer    is   2 ^ 31 - 1   and    Minimum  value  of    integer   is  -2 ^ 31

6) INT_MAX   and  INT_MIN   are   maximum    and  minimum  values  of  integer  and   they   are  
    predefined  macros  in  <limits.h>  file

7) int    x;  --->      variable  x  can  hold  any  value  between  -2^31    and    2^31-1

8) Format is  %d or %i for  int
*/

