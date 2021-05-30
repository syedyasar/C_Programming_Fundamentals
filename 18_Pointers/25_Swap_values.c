//  Swap  values  and  addresses(pointers)
#include  <stdio.h>
void  swap(int** , int**);

main()
{
	int  a , b;
	int  *x , *y;
	x = &a;  // Address  of  variable  'a'  is  asssigned  to   x  and  hence  'x'  points  to  variable   'a'
	y = &b; // Address  of  variable  'b'  is  asssigned  to   y  and  hence  'y'  points  to  variable   'b'
	printf("Enter  any  2  numbers  \n");
	scanf("%d%d"  , x  ,  y); //  Reads  inputs  to  variables  'a'  and  'b'   thru   pointers  'x'  and  'y'
	printf("Before   swap\n");
	printf("  a  :  %d  \t    b  :  %d  \n" , a , b);  // 10    25
	printf("  x  :  %u  \t    y  :  %u  \n" , x , y);  //  1000  2000
	swap(&x , &y);  //  Addresses   of  pointers  are  sent  to  the  function
	printf("After  swap\n");
	printf("  a  :  %d  \t    b  :  %d  \n" , a , b);  //  25   10
	printf("  x  :  %u  \t    y  :  %u  \n" , x , y);  //  2000   1000
}
void  swap(int  **p1 , int  **p2)
{
	int   temp1 =  **p1; // swapping  **p1  and  **p2  is  nothing  but  swapping  main   function  variables  'a'  and  'b' (values  are swapped)
	**p1  =  **p2;
	**p2 = temp1;

	int*  temp2 =  *p1; // swapping  *p1  and  *p2  is  nothing  but  swapping  main   function  pointers   'x'  and  'y' (Addresses  are swapped)
	*p1 = *p2;
	*p2 = temp2;
}




/*
1) Variable   is  necessary(like  temp1)  to  swap  values

2) Ptr  is  necessary(like  temp2)  to  swap  pointers

3) To  swap  values ,   send  addresses  to  the  function

4) To  swap  addresses ,   send  addresses  of  addresses  to  the  function

5)  Addresses  can   be  swapped  before   swapping   values  in  the  above  function
*/
