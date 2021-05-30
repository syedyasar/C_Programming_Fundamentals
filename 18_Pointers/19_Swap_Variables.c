// Swap values of 2 variables  using   pointers
#include <stdio.h>
void  swap(int* , int*);
main()
{
    int  a , b;
    printf("Enter any 2 numbers \n");
    scanf("%d%d" ,  &a , &b);  // Reads  inputs  to  variables  a  and  b
	swap(&a , &b); //  Function  can  swap  values  of  'a'  and  'b'   thru  pointers  'x'  and  'y'
    printf("a : %d \n"  , a);  // 25 
    printf("b : %d \n" , b);  //  10
}
void swap(int*  x , int*  y) //  x  and  y  are  pointers  to  main  function  variables  'a'  and  'b'
{
    int   temp = *x;  // swapping  *x and *y  is  as  good  as  swapping  main  function  variables  a  and  b
	*x = *y;
	*y = temp;
}

/*
1) swap must be CBA  function but not CBV

2) Send addresses to  swap  function so that function can swap values at those addresses

3)  swap   function  can   not  swap  variables  'a'  and  'b'   directly   becoz   they  are  main   function   variables.
      Hence  swap   them   indirectly   thru   pointers   'x'  and   'y'
*/
