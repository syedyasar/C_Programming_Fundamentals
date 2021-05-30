/*
Add,subtract,multiply and divide 2 numbers
main()  ---> Reads  inputs , call  asmd  function and  print results
void  asmd(int  x  ,  int  y ,  int  *p1 , int  *p2 , int  *p3 , int  *p4)  --->  stores  results in  *p1 , *p2 , *p3  and  *p4
Input :  10  and  7
Sum :  17
Differnece :  3
Product  :  70
Quotient :  1.42
*/
#include <stdio.h>
void  asmd(int , int , int* , int* , int* , float*);
main()
{
		int  a , b , sum , diff , prod ;
		float   quot;
		printf("Enter  any  2  numbers  \n");
		scanf("%d %d" , &a , &b);
		asmd(a , b , &sum , &diff , &prod , &quot); // Function  is   storing  results  in  sum , diff , prod  and  quot  thru  pointers  p1 , p2 , p3  and  p4
		printf("Sum : %d \n" , sum);
		printf("Difference  : %d \n" , diff);
		printf("Product  : %d \n" , prod);
		printf("Quotient : %f \n" , quot);
}

void  asmd(int  x , int  y , int  *p1 , int  *p2 , int  *p3 , float  *p4) // p1 , p2 , p3  and  p4  are  pointers  to  main  function  variables sum ,  diff , prod  and  quot
{
		*p1 = x + y;
		*p2 = x - y;
		*p3 = x * y;
		*p4 = (float)  x / y;
}

//  asmd   function  is   returning  4  values  to  main  function  variables  sum , diff , prod  and  quot   thru   pointers  p1  , p2 , p3  and  p4