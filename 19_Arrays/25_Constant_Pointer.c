//constant pointer  demo program
#include <stdio.h>
main()
{
	int  i;
	int  a[] = {10 , 20 , 15 , 18};
	int    *  const  p = a;  //  p   points  to  1st  element  10  becoz   'a'  is  address  of  1st  element
	printf("p : %u \n" ,  p); // Address  of  1st  element  10   (may  be  1000)
	(*p)++;  //  Valid  and  10  becomes  11
	//p++;  //  Error  becoz   'p'   is   a  constant  pointer
	for(i = 0 ; i <= 3 ; i++)
		printf("%d \n" , a[i]);   //  prints  a[i]  where   i  varies  from   0  to  3  --->  11   20    15   18
}

//  *p  can be  modified but  not  p