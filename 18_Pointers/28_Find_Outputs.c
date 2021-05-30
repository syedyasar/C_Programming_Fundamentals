//  Find output
#include <stdio.h>
main()
{
	int  *p;
	int  a  = 10;
	p = &a; //  p  points  to  variable  'a'
	printf("%d \n",*p); //  10
	int b = 20;
	p = &b; //  p  points  to  variable  'b'
	printf("%d \n",*p);  // 20
	//&a = &b;  //  Error  becoz  address  can  not   be  modified 
}

/*

1) Pointer   can  point  to  single  variable  but  not  to  multiple  variables

2) pointer   can  hold  single  address

3)  Address  in  the  pointer   is  overwritten  every  time  new  address  is  represented

4)  pointer   can  be  modified  but  not  address    of  variable
     &a = some  thing;  ---->   invalid
     &b = some  thing;  --->   invalid
      p = some  thing; ---> ok

*/
