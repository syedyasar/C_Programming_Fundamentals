//  unsigned  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	unsigned    x   =  25; //  'x'  is  variable  of  type  unsigned
	printf("x : %u \n" , x);   //  25
	printf("%d \n" , sizeof(x));  // 4  bytes
	printf("%u \n" , UINT_MAX); // 2 ^ 32 - 1
	//printf("%u \n" , UINT_MIN);  //  Error   becoz  macro  does not exist
	x = UINT_MAX + 1; //  minimum value  i.e.  0
	printf("%u \n" , x); // 0
	x = -1; //  min value  -  1  is  max  value
    printf("%u \n", x);  //  2  ^ 32  -  1
}


/*
unsigned
----------------
1) It  takes  4B  of  memory  space    i.e.  32  bits.

2)  All  32  bits  are  magnitude  bits  and  there  is  no  sign  bit

3) Maximum value  of   unsigned   integer   is  2 ^ 32 - 1  
    and 
	minimum   is  0

4) -ve  numbers  can  not  be  represented  becoz  they  are  signed numbers

5)  UINT_MAX  is  maximum  value  of  unsigned  integer  and  there  is  no  macro  for  minimum  value 
     becoz  it   is  0

6) It  is  a    predefined  macro  in  <limits.h>  file

7)  unsigned    x;  ---->    variable  x  can  hold  any  value  between  0  and  2 ^ 32 - 1

8) 25U is unsigned  integer

9) Format  is   %u


 Data  type            Size        Format        Value            Range
-------------------------------------------------------------------------------------------------------------------------------------------
      short               2B              %hd            25                -2 ^ 15  to 2 ^ 15 - 1
      int                 4B              %d             75                -2 ^ 31 to 2 ^ 31 - 1
      long                4B              %ld            75L               -2 ^ 31 to 2 ^ 31 - 1
      long  long          8B              %lld           75LL              -2 ^ 63  to 2 ^ 63 - 1
      unsigned            4B              %u             75U                0  to 2 ^ 32 - 1
-----------------------------------------------------------------------------------------------------------------------------------------------
1)   +ve  numbers  are  called  unsigned  numbers  and  -ve  numbers  are  called  signed  numbers

2)  Sizes  vary  from  compiler  to  compiler  and   they  are  not  fixed.

3)  int  is  2B  in  Turbo-C  compiler    and    4B  in  Gcc  compiler
*/
