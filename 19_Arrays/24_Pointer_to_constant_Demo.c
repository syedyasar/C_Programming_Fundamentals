//  Pointer  to  constant  demo  program
#include  <stdio.h>
main()
{
	int  i;
	int  a[] = {10 , 20 , 15 , 18};
	int  const  *p = a; //  p   points  to  1st  element  of  array   'a'  becoz   'a'  is  address  of  1st  element
	printf("p  :  %u  \n" , p);  //  Address   of  1st   element (may  be  1000)
	//(*p)++; //  Error  becoz   *p  can  not  be  modified   as  p  is  pointer  to  constant
	a[0]++; // valid  and  10  becomes  11
	p++;  // valid  and  p   moves  to  next   to  element  of   array
	
	printf("p  :  %u  \n" , p); //  address  of  2nd  element  20  (may  be   1004)
	for(i = 0 ; i <= 3 ; i++)
		printf("%d  \n" , a[i]);   //  11    20    15    18
}



/*
1)  p  can  be modified but not *p

2)  First  element 10  can be modified wrt  array  'a' but not  thru  ptr  'p'
     i.e. a[0]++  is  valid  but  not  (*p)++
*/
