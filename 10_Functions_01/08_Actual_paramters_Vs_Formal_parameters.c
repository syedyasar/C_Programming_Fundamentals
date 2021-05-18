// Actual  paramters  Vs  Formal  parameters
#include <stdio.h>
void   f1(int   x ,  float  y , char  ch)  // x , y  and  ch  are  formal  parameters  becoz  they  are  in the function header
{
	printf("x : %d \n" , x); // 25
	printf("y : %g \n" , y); // 10.8
	printf("ch : %c \n" , ch); // g
}
main()
{
	f1(25 , 10.8 , 'g');  // They  are  actual  parameters  becoz  they  are  in the function call
}



/*
Types  of  parameters
-------------------------------------
1) Parameters  in  the  function  call  are  called  actual  parameters  and
    those  in  the  function  header  are  called formal  parameters

2) Value  of  actual  parameter  is  copied  to  formal  parameter  when  function  is  called
*/
