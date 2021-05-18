// Find outputs
#include <stdio.h>
void  f1(int , float);  //  Function  prototype  or  declaration
main()
{
	f1(25.8 , 10);  // Actual  parameters  are  typecasted
}
void  f1(int  x , float  y)
{
	printf("x : %d \n" , x);  //  25
	printf("y : %f \n" , y);//  10.0
}

//  Actual parameter  is  typecasted  when  type  is  different  from  that  of  formal parameter