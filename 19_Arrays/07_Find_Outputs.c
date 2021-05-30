// What  is  the  difference  between  *(a + 1)  and  *a + 1
#include <stdio.h>
main()
{
	int  a[] = {10 , 20 , 15 , 18};
	printf("*(a + 1) : %d \n" , *(a + 1)); //  *(a+1)   =  Element  at  address  a+1  =  20
	printf("*a + 1   : %d \n" , *a + 1); // *a + 1 =  (Element  at  address  a) + 1 = 10 + 1 =  11
}



/*
*a , *(a + 1) , *(a + 2) , *(a + 3)  are  10 , 20 , 15 , 18
*a , *a + 1 , *a + 2 , *a + 3  are  10 , 11 , 12 , 13
*/
