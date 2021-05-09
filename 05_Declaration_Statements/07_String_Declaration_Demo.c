
// String  declaration
#include <stdio.h>
main()
{
		//string  s;  //  Error  becoz  there  is  no string  data type 
		char  a[] = "Rama Rao"; // Array  is  initialized with  string
		printf("%s \n" , a); // String  in  array   a  ---> Rama  Rao
		printf("%u  \n" , &a);// Address of  array  ---> may  be  1000
		printf("%u  \n " , a); // Address of  array  ---> same 1000
		printf("%d \n" , sizeof(a));  // size of array  ---> 9 bytes
}



/*
1)  Format  for  printing address  is  %u

2) Addresses are always +ve  

3)  -ve  addresses  are not supported
*/


