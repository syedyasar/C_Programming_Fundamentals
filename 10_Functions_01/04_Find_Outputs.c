// Find output
#include <stdio.h>
f1()   //  default  return  type  of  f1   function  is  int
{
	return  10.8; // float  is  converted  to  int  and  10  is  returned  
}
main()
{
	printf("%d\n" , f1());   //  10
	printf("%f\n" ,  f1());  //  garbage value  due  to  incorrect  format   %f
}


