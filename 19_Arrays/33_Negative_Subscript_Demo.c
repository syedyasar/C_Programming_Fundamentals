//  -ve  subscripts  demo  program
#include <stdio.h>
main()
{
		int  a[] = {10 , 20 ,  30 , 40 , 50};
		int  *p = a + 2;   //  p   points  to  3rd  element  30  becoz  a+2  is  address  of   3rd  element
		printf("p[-2]  :   %d \n" , p[-2]);  //  10
		printf("p[-1]  :   %d \n" , p[-1]); //  20
		printf("p[0]  :   %d \n" , p[0]); //  30
		printf("p[1]  :   %d \n" , p[1]);  //   40
		printf("p[2]  :   %d \n" , p[2]);   //  50
		printf("*(p - 2)   :   %d \n" , *(p - 2));   
		printf("*(p - 1)   :   %d \n" , *(p - 1));   
		printf("*p  :   %d \n" , *p);   
		printf("*(p + 1)   :   %d \n" , *(p + 1));   
		printf("*(p + 2)   :   %d \n" , *(p + 2));   
		printf("a[-1]  :  %d\n" , a[-1]);  //  garbage  value  becoz  -1   is  invalid  subscript  wrt   array   'a'
}

 

/*
1)  Wherever  pointer  points, subscript  of  that  element  is  0 , following  subscripts are +ve and    preceding are -ve

2) -ve subscripts are allowed for  pointers but  not for  arrays

3) 'a' is  an  array  and p is pointer

4) p[-1]  is   20
    a[-1]  is  garbage value

5)  p[-2]  and  *(p-2)   are  same, 
     p[-1]  and  *(p-1)   are  same, 
	 p[0]  and  *p  are  same, 
	 p[1]  and  *(p+1)   are  same,
	 p[2]  and  *(p+2)   are  same.
	 In   general   p[i]  and  *(p+i)  are  same
*/