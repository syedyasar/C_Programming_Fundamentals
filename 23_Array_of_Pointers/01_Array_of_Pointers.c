// Array  of  pointers  demo  program
#include  <stdio.h>
main()
{
	int   i;
	int   a[]  =  {10 , 20 , 30 , 40}; //  Array  of  elements
	int*    p[]  =  {a , a + 1 , a + 2 , a + 3}; //  Array  of  addresses  i.e. Array  of  pointers
	for(i = 0 ; i <= 3 ; i++)  //  Array  'a'  is  printed
		printf("%d \n" , a[i]); // Prints  a[i]  where  i  varies from  0  to  3   --> 10   20   30   40
	printf("\n");
	for(i = 0 ; i <= 3 ; i++) // Array  'p'  is  printed
		printf("%u\n" , p[i]); // prints  p[i]  where  i varies  from  0  to  3   --->  1000    1004    1008   1012
	printf("\n");
	for(i = 0 ; i <= 3 ; i++) // Array  'p'  is  printed
		printf("%u\n" , p+i); // prints  p[i]  where  i varies  from  0  to  3   --->  1000    1004    1008   1012
	printf("\n");
	for(i = 0 ; i <= 3 ;  i++)  // prints  array  'a'  indirectly  thru  array  'p'
		printf("%d\n" , *p[i]); // *p[i]  internally  access   a[i]  --->  10   20   30   40
}





/*
1) 10 , 20 , 30 , 40  are  elements   and   type  is  int

2)  a , a + 1 , a + 2 , a + 3  are  addresses  of  elements  and  type  is  int*

3)  p , p + 1 , p + 2,  p + 3  are  addresses  of  addresss  and   type  is  int**

4) Array  'a'  can  be  accessed  in  4  ways
    a)  a[0] , a[1] , a[2] , a[3]  are  elements  10 , 20 , 30 , 40

	b)  *a , *(a+1) , *(a+2) , *(a+3)  are  also  10 , 20 , 30 , 40

    c)  p[0] , p[1] , p[2] , p[3]  are  addresses  a , a + 1 , a + 2 , a + 3
         *p[0] , *p[1] , *p[2] , *p[3]  are  elements  10 , 20 , 30 ,  40
          In  general,  p[i]  is  address  and  *p[i]  is  value
          Array  'a'  can  be  accessed  thru  array  'p'  by  *p[i]
         *p[i]  internally  access  a[i]

    d) *p , *(p + 1) , *(p + 2) , *(p + 3)  are  addresses    a , a + 1 , a + 2 , a + 3
         **p , **(p + 1) , **(p + 2) , **(p + 3)  are  elements  10 , 20 , 30 , 40

5) What  is  the  difference  between
    a)  int  a[4];    --->  arrays  of  elements
	         and
    b)  int  *a[4];    --->  array  of  pointers
*/
