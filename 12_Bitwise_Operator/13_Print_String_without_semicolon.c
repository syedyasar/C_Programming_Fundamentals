//  Print   a   string    without  using    ;  in  the  program
#include <stdio.h>
main()
{
	if(printf("Hyd\n"))
	{
	}
}


/*
1)  printf  displays  "Hyd\n"  and  returns 4

2)  if  becomes
     if(4)    ---->  true
     {
     }

3)  Nothing  is  executed  inside  'if'   becoz  there  are  no  stmts  inside  if

4) if  printf  is  used  as  statement,  ;  is  mandatory

5) Hence  printf  is  used  as  condition  and  condition  does  not  require  ;
*/
