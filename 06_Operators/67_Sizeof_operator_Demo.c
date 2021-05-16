//  sizeof()  demo  program
#include<stdio.h>
int  main()
{
        printf("size  of  int  :  %d    bytes  \n" , sizeof(int));  //  4
        printf("size  of  float  :  %d  bytes\n" , sizeof(float)); //  4
        printf("size  of  char  :  %d   byte\n" , sizeof(char));  //   1
        printf("size  of  long  :  %d    bytes  \n" , sizeof(long)); //  4
		printf("size  of  double  :  %d      bytes\n" , sizeof(double)); //  8 
		printf("size  of  long  long  :  %d      bytes\n" , sizeof(long  long)); //  8 
        printf("size  of  short    :  %d      bytes\n" , sizeof(short));  //  2
        printf("size  of  unsigned  :  %d      bytes\n" , sizeof(unsigned)); //   4
		printf("size  of  unsigned  char  :  %d      byte\n" , sizeof(unsigned  char)); //  1 
}


/*

	sizeof()    operator
-----------------------------
1)  int    is    4B    on    gcc    compiler    and    2B    on    Turbo    'c'    compiler

2)  Sizes    vary    from    system    to    sytem

3)  sizeof    operator    is    used      to    determine    size    of    a    variable    in    your    system

4)  It    always    returns    integer    result
     Hence   %d    is    used      for    sizeof    operator.

5)  It   is   possible    to    determine    size    of    variable , array , pointer , structure , union , ......    by    using    sizeof
     operator

6) sizeof(Variable   or    Value    or   Datatype)  are  same


*/


