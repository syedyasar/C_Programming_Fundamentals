// Find  outputs
#include <stdio.h>
main()
{
	int  a[]  = {10 , 20 , 15 , 18};
	//a++;  //  Error  becoz  address  of   array  can  not be  modified
	(*a)++;  // valid  and  10  becomes  11
	printf("*a : %d \n" , *a); //  11
}

/*
1) *a  can  be  modified  but  not  'a'
     i.e.    value  can  be  modified  but  not  address

2)  This  is  similar  to  constant  pointer

**3)   So  Every  array  name  behaves  like  a  constant  pointer
*/