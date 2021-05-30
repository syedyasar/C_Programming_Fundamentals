//constant pointer to constant 
#include <stdio.h>
main()
{
	int  i;
	int a[] = {10 , 20 , 15 , 18};
	const int * const p = a; //  p   points  to  1st  element  10  becoz   'a'  is  address  of  1st  element
	printf("p : %u \n" , p); // Address  of  1st  element  10   (may  be  1000)
	//(*p)++; //   Error  becoz  *p   can  not  be  modified
	//p++;  //  Error  becoz   pointer  can  not  be  modified 
	for(i = 0 ; i <=3 ; i++)
		printf("%d \n" , a[i]);  // prints  a[i]   where   i  varies  from  0   to   3   --->   10    20    15    18
}

//  Both  p   and  *p  can not be modified