// Find  output
#include <stdio.h>
int   f1()
{
		printf("Hyd\n");
		printf("Sec\n");
		printf("Cyb\n");
}
main()
{
		printf("%d \n" , f1());  // Garbage value
}


/*
1)   use  void   when  function does  not  wish  to  return  any value

2)  If  return type  is int , some thing  must  be  returned and  if  nothing  is   returned  ,  garbage  value
     is   retruned   by  default 
*/