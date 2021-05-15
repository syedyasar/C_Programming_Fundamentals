
// Multiple assignment  demo  program
#include <stdio.h>
main()
{
	int  a , b , c;
	a = b = c = 25;
	printf(" a : %d  \n" ,  a); // 25
	printf(" b : %d  \n" ,  b);  // 25
	printf(" c : %d  \n" ,  c);  // 25
}

/*
1) a = b = c = 25; ---->   Assignment  Operators  are  evaluated  from  right  to  left.

2)  a  = b = c = 25  --->  a = b = 25  ---> a = 25 ---->  25
     i.e.  25    is  assigned  to  variables  c, b  and  a. 

3) All  the  3  variables   contain  same  value  25

4)  a  = 25;
     b  = 25;
	 c  = 25;
	 The  above  3  statements  can be  reduced  to   a  single statement 
	 i.e.   a = b = c = 25

5) a = b = c = 25  is called multiple assignment  i.e. Same value is assigned to different  variables
*/

