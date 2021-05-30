// Addresses  of  elements 
#include <stdio.h>
main()
{
	int  a[4]; 
	printf("&a[0] : %u\n" , &a[0]); //  Address   of  1st  element  ---> 1000
	printf("&a[1] : %u\n" , &a[1]);   //  Address   of  2nd  element  ---> 1004
	printf("&a[2] : %u\n" , &a[2]);  //  Address   of  3rd  element  ---> 1008
	printf("&a[3] : %u\n" , &a[3]);  //  Address   of  4th  element  ---> 1012
	printf("\n");
	printf("a     : %u\n" , a);   //  Address   of  1st  element  ---> 1000
	printf("a + 1 : %u\n" , a + 1);  //  Address   of  2nd  element  ---> 1004
	printf("a + 2 : %u\n" , a + 2);  //  Address   of  3rd  element  ---> 1008
	printf("a + 3 : %u\n" , a + 3);  //  Address   of  4th  element  ---> 1012
}



/*
1)  Addresses  can  be  represented  in  2  ways:

2)  int  a[]  =  {10 , 20 , 30 , 40};
     a[0] , a[1] , a[2] , a[3]  are  elements   ---->  10 , 20 , 30 , 40
     &a[0] , &a[1] , &a[2] , &a[3]  are  addresses  of  elements  --->  1000 , 1004 , 1008 , 1012

3)  In  general,  a[i]  is  ith   element   of   array   and 
     &a[i]  is  address  of  ith  element

4)  *a , *(a + 1) , *(a + 2) , *(a + 3)  are  elements   ---->  10 , 20 , 30 , 40
      a , a + 1 , a + 2 , a + 3  are  addresses  of  elements --->  1000 , 1004 , 1008 , 1012

5)  &a[0]   and   a   are  same  ---> Address  of  first  element  (1000)
     &a[1]   and    a + 1    are  same ---> Address    of  2nd    element  (1004)
     &a[2]   and    a + 2    are  same ---> Address    of  3rd    element  (1008)
     &a[3]   and    a + 3    are  same ---> Address    of  4th    element  (1012)

6) In  general,  &a[i]  and  a +  i  are  same

7) Let  a = 1000
            a + 1 = 1000 +  1  integer = 1000 + 4 = 1004
            a + 2 = 1000 +  2  integers = 1000 + 2 * 4 = 1008
            a + 3 = 1000 +  3  integers = 1000 + 3 * 4 = 1012

8) In  case  of  array  of  characters, 
    a + 3  =  Address  of  first  element + 3  characters = 1000 + 3 * 1 = 1003
*/
