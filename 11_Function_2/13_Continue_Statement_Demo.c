// continue  statement  demo  program 
#include <stdio.h>
void  f1(); // Function  prototype  is  mandatory  becoz  f1  function is defined after main 
main()
{
    printf("main function\n");
    f1(); // Function  call
    printf("Back to main\n");
}
void f1()
{
	int i;
    for(i = 1 ; i <= 7 ; i++)   
    {
        printf("%d\n" , i); 
        if(i % 3 == 0) 
                continue; //  following  statements  are  skipped
        printf("Hello\n");  
    }
    printf("Outside  Loop\n");
}

/*
continue  statement
-----------------------------------
1)  When  continue  statement  is  executed,  remaining  statements  inside  the  loop  are    skipped  and  control    
     goes    to    next  iteration  of  loop

2)  continue  is  used   to  skip  the   iteration

3)  for, while  and  do..while  loops   can  use  continue  but  not  if  and  switch

4)  while  (cond)
     {
	    	.....
			if  (cond)
				continue;  ---> Goes  to  next  iteration  of  loop
			....    ---->   They  are  skipped
     }

*/