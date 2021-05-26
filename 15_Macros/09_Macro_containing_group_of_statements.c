// Macro  contains  a  group  of  statements
#include  <stdio.h>
#define  pf  printf   // pf  is   a  macro  with  printf
#define  abc    pf("Hyd\n") ; pf("Sec\n") ;  pf("Cyb\n");    // abc  is  a  macro  with 3 statements
						
main()
{
	printf("Begin\n");
	abc   //  3 statements  are substituted
	printf("End\n");
}

/*
1) macro  abc  contains  3  statements

2) macro  pf  is  called inside  macro  abc
    i.e. A  macro  can  be  called  inside another macro

3) abc  ---> pf("Hyd\n") ; pf("Sec\n"); pf(Cyb\n");  --->  printf("Hyd\n"); printf("Sec\n"); printf("Cyb\n");

4)  #define  abc    { pf("Hyd\n") ; pf("Sec\n") ; pf("Cyb\n");  }   ---->  Braces  are  optional  even  though   there  is   more 
                                                                                                         than   one statement

5) Macro  can  not  be  in  more   than  one  line
*/





