//  Accessing  elements of array  thru  pointer
#include <stdio.h>
main()
{
		int   i;
		int *p;
		int  a[] = {10 , 20 ,  15, 18};
		printf("Array  using subscripts\n");
		for(i = 0 ; i <= 3 ; i++) 
				printf("%d\n" , a[i]); //  prints  a[i]  where   i  varies  from  0  to   3
		printf("Array  using  addresses\n");
		for(p =  a ;  p <=  a + 3 ; p++)  //   where  'a'  is  address  of  first  element  and  a+3  is  address  of  last  element
				printf("%d\n" , *p); // prints  *p   where  p  varies  from  a   to  a+3
}

/*
Array  can  be  accessed  in  2   ways
1)  a[i]  where   i  varies from 0 to n-1 (where  0  is  subscript of  first  element  and  n-1  is  subscript  of  last  element)
2) *p  where p  varies  from a  to  a+n-1(where  'a'  is  address  of  first element and a+n-1  is  address  of  last  element)
*/


