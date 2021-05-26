//   what  is  the  role of  ;  in   'c'  program
#include <stdio.h>
main()
{
	int  a = 25;;;;
    for(i = 1 ; i <= 3 ; i++) ; 
    {
	}
}



/*
1)  ;  is  statement  terminator  when  system  is  expecting  ;  and  null  statement  otherwise

2)  int  a = 25;;;;  ----> First  ;  is  statement  terminator and remaining  semicolons are  null  statements

3)  for(i = 1; i <= 3 ; i++);  ----> First  2  semicolons  are   statement  terminators  and  3rd  ;  is  null  statement
     {
     }

*/