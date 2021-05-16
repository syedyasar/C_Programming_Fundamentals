//  Identify  Error
#include  <stdio.h>
main()
{
	//int    x    =  "25";  //  Error  becoz  string can  not  be  converted to  int
	//char    a[]  =  75; //  Error  becoz  char  array  can  hold  string  but not  integer
	printf("%d\n" , 10.8); // garbage value  due to wrong  format
	printf("%f\n" , 25);  //  garbage value  due to wrong  format
}



/*

1)  int  x = "25"  ---> int  variable can not  hold  string

2)  char  can  be  converted to  int  but not  string  to  int

3)   printf  does not perform type casting
*/
