// Pointer  to  Array
#include <stdio.h>
main()
{
	int  i;
	int  a[] = {10 , 20 , 15, 18};
	int *p =  a;  //  p  points  to  array  'a'  or  1st  element  of   array  'a'
	printf("p[0] : %d \n" , p[0]); // 10
	printf("p[1] : %d \n" , p[1]);  // 20
	printf("p[2] : %d \n" , p[2]); // 15
	printf("p[3] : %d \n" , p[3]); // 18
	printf("\n");
	printf("*p  : %d \n" , *p);  // 10
	printf("*(p + 1)  : %d \n" , *(p + 1)); // 20
	printf("*(p + 2)  : %d \n" , *(p + 2)); // 15
	printf("*(p + 3)  : %d \n" , *(p + 3)); //  18
}


/*
1)  int  *p = a   --->  Address  of  array  'a'   is  assigned  to  p

2) So   p  points  to  array  'a'  or  first  element  of  array

3) How  to  assign  pointer  to  variable   ? --->   p = &variable; 

4) How  to  assign  pointer  to  pointer ? ---->  p = &pointer;  

5) How  to  assign  pointer  to  array  ?  ---->    p = arrayname;  (or)  p  = &arrayname;  (or)  p = &a[0];

**6) Subscript  operator  []  can  be  used  for  pointer  provided  pointer  points  to  array

7) p[i]  is  valid   becoz   p  points  to  array

8)  How  to  access  variable   thru  pointer  ?  ---->    *p

9)  How  to  access  array  thru  pointer  ?  ----->      p[i]  (or)  *(p+i)
*/