// Subscript demo  program
#include <stdio.h>
main()
{
	int  a[] = {10 , 20 , 15 , 18 , 5 , 12};
	printf("%d\n" , a[-1]); //  garbage  value  becoz  -1  is   invalid  subscript
	//printf("%d\n" , a(3)); //  Error  due  to   ()
	//printf("%d\n" , a[3.0]); //  Error  becoz  subscript  can  not  be  float
	//printf("%d\n" , a["Hyd"]);   //  Error  becoz  subscript  can  not  be  string
	printf("%d\n" , a[6]);  //  garbage  value  becoz  6  is   invalid  subscript
	int  i = 2;
	printf("%d\n" , a[i]); // a[2]  is   15
	int j = 3, k = 1;
	printf("%d\n"  , a[i + j * k]); // a[2 + 3 * 1] = a[5]  =  12
	printf("%d\n",a['\0']);  //  a[0]  is  10
}


/*
Subscript
----------------
1) If  array  size  is  n,  subscripts  are  0  to  n-1

2) Starting  subscript    is  always  0  and   last  subscript  is  array  size  - 1

3) 5th  element  subscript  is  4 , first  element  subscript  is  0  and   last  element  subscript  is   array size - 1

4) Subscript  must  be  integer

5) Subscript  must  be  enclosed  in  []    and    []  is  called  subscript  operator

6) Subscript  can  be  value , variable   or  expression
    Eg:  a[3] , a[i] , a[i + j * k]  are  valid

7) int  a[100]; --->  Subscripts  are  0  to  99  becoz  array  size is  100

8)  a['A']  is  valid  and   a['A']  is  a[65]

9)  a['\0']    is  a[0]  becoz  Ascii  value of '\0'  is  0

10) There is no subscript verification  in  'c'  language (Which  is   a  serious   drawback)
*/

