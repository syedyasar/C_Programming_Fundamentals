// Logical  error  demo  program 2 
#include <stdio.h>
main()
{
	int i;
	for(i = 1 ; i <= 3 ; i++);  //  logical  error  due  to  ;
    { 
			printf("%d\n" , i); //  4
			printf("Hyd\n");
			printf("Sec\n");
			printf("Cyb\n");
    }
    printf("Bye\n");
}



/*
1)   ;  is  executed  3  times  for  i = 1 , 2 , 3

2) Block  is  executed  only  once  when  i=4

3)  ;  is  treated  inside  the  loop  and  block  outside  the  loop

4) Incorrect  results  are  obtained  due  to  ;

5) for  loop  is  interpreted  in  a  different  manner  due  to  ;  after  i++

6) ;  is  called  null  statement  and  system  does  nothing   when  ;  is  executed
    i.e.  ;   means  do   nothing
*/

