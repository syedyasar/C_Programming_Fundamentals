//  Identify  error
#include <stdio.h>
int a;
main()
{
	extern  int   b;  //  'b'  is  global  to  main   function
	int  b = 30; //  Error  becoz  'b'  is  already  declared  (redeclaration)
    printf("Inside main  : %d\n" ,  b);  
}
int  b = 20;  

//  variable  'b'  is  declared  twice  inside  main  function   and hence  it  leads  to   error