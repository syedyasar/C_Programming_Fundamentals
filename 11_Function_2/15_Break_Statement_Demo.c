// break  statement  demo  program 
#include <stdio.h>
void  f1();  //  prototype is mandatory
main()
{
    printf("main function\n");
    f1(); 
    printf("Back to main\n");
}
void f1()
{
	int i;
    for(i = 1 ; i <= 7 ; i++)  
    {
        printf("%d\n" , i);
        if(i % 3 == 0)
                break;
        printf("Hello\n");
    }
    printf("Outside  Loop\n");
}

/*
break  statement
-----------------------------
1)  When  break  is  executed,  control  goes  out  of  loop

2)  Remaining  statements  inside  loop  are  skipped  along  with  remaining  iterations

3)  Next  statement  executed  after  break  is  statement  outside  the  loop

4)  break  is  used    to  go  out  of  loop

5)  for, while , do..while  and  switch  can  use  break  but  not  if

6)  if  also  can  use  break  provided   it   is  enclosed  in  a  loop

7)  while  (cond)
     {
	    	.....
			if  (cond)
				break; ---> goes   out  of  loop
			....   ---> They  are  skipped
      }
      statement;  --->  It  is  executed  after  break
*/