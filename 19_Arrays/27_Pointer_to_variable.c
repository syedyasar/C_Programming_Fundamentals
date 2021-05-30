//  pointer to variable 
#include <stdio.h>
main()
{
	int a[] = {10 , 20 , 15 , 18};
	int  *p = a;  //  p   points  to  1st  element  10   becoz  'a'  is  address  of  1st  element
	printf("%u\n" , p);  //  Address  of  1st  element   10  (may  be  1000)
	(*p)++;  // valid  and  10  becomes  11
	p++;  // valid   and  p  moves  to   next  element  20
	printf("%u\n" , p);  //  Address  of   2nd  element   10  (may  be  1004)
	int  i;
	for(i = 0 ; i <= 3 ; i++)
			printf("%d\n" , a[i]); //  11   20    15   18
}



// Both  p   and *p  can be modified 
