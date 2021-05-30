/*
Find    largest   ,   smallest  and  middle  of  3  numbers
main() --->  reads  3  inputs ,  calls  lsm  function and prints  results
lsm()  --->  returning  largest , smallest  and  middle  number

Function call :  ---> lsm(a , b , c , &max , &mid , &min);
*/
#include  <stdio.h>
void  lsm(int , int , int , int* , int* , int*);
main()
{
	int  a , b , c , max , min , mid;
	printf("Enter  any  3  numbers  \n");
	scanf("%d%d%d" , &a , &b , &c);  // 10   20   7
	lsm(a , b , c , &max , &min , &mid); 
	printf("Largest  number  :  %d\n" , max); 
	printf("middle  number :  %d\n" , mid); 
	printf("smallest  number :  %d\n" , min); 
}

void  lsm(int  x , int  y , int  z , int*   p1 , int*    p2 , int*      p3)  
{
	*p1 = x;  
	if  (y > *p1) 
			*p1 = y; 
	if  (z > *p1) 
			*p1 = z;
	*p2 = x; 
	if  (y < *p2) 
		*p2 = y;
	if  (z < *p2) 
			*p2 = z; 
	*p3 = (x +  y + z) - (*p1 + *p2); 
}




/*
1)  *p1 , *p2  and  *p3  internally  refer  to  main  function  variables  max  , min  and  mid

2)  Which  ever  number   >  *p1 ,   copy  that  number  to  *p1

3)  Similarly ,   Which  ever  number   is  <    *p2 ,   copy  that  number  to  *p2

4)  lsm  function  can  access  x , y , z , p1 , p2  and  p3  directly   becoz  they  are  parameters  of  lsm  function

5)  lsm  can  access  max  , min  and  mid  indirectly  by    *p1 , *p2  and  *p3

6)  lsm  can  not  access  a , b , c  becoz   they  are  main  funcion  variables  and  they  do  not  have  any  pointers

7)  lsm  function  is  returning  3  values  indirectly.  They  are  returned  to  main  function  variables  max , min  and
     mid   through   pointers  p1 , p2  and  p3
*/