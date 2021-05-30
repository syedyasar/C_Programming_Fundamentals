// Accessing  Array  elements
#include <stdio.h>
main()
{
	int  a[] = {10 , 20 , 15 , 18};
	printf("a[0] : %d \n" , a[0]); //  Element  at  subscript  0  is  10
	printf("a[1] : %d \n" , a[1]); //  Element  at  subscript  1  is  20
	printf("a[2] : %d \n" , a[2]);  //  Element  at  subscript  2  is  15
	printf("a[3] : %d \n" , a[3]); //  Element  at  subscript  3  is  18
	printf("\n");
	printf("0[a] : %d \n" , 0[a]); //  10
	printf("1[a] : %d \n" , 1[a]); // 20
	printf("2[a] : %d \n" , 2[a]); // 15
	printf("3[a] : %d \n" , 3[a]);  //  18
	printf("\n");
	printf("*a     : %d \n" , *a);  //  Element  at  address  'a'  is  10
	printf("*(a+1) : %d \n" , *(a + 1)); //  Element  at  address  a+1  is  20
	printf("*(a+2) : %d \n" , *(a + 2)); //  Element  at  address  a+2  is  15
	printf("*(a+3) : %d \n" , *(a + 3)); //  Element  at  address  a+3  is  18
}


/*
1)  Array  can  be  accessed  in  2  ways
     a)  Using  subscripts
	 b)  Using  addresses       

2) a[2]  is  element  at  subscript  2  i.e.  15
    
3) In    general,  a[i]  is  element  at  subscript  'i'

4) a[i]  and  i[a]  are  same

5) *(a + 2)  is  element  at  address  a + 2  i.e.  15
    
6) In  general,   *(a + i)  is  element  at  address  a + i

7)  a[i]  and  *(a + i)  are  same

8) Variable and pointer can be accessed in only one way  i.e. variable name  and pointer  name
*/