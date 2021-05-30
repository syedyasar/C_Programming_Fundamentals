// pointer demo program
#include <stdio.h>
main()
{
	int  a = 25;
	int*   p;  	//  p  is  a  pointer  with  garbage  address
	p  =  &a;  //  p  points  to  variable  'a'  becoz  it  contains address  of  varibale 'a'
	printf("p : %u\n" , p); // Address  of  variable  'a'
	printf("*p  :  %d\n" , *p); // That  value  where  'p'  points  i.e.  25
	printf("&p :  %u\n" , &p);  //  Address of  pointer  'p'
}
