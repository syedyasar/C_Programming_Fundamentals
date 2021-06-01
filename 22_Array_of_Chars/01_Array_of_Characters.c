// Array  of  characters  demo  program
#include  <stdio.h>
main()
{
	char  a[] = "Rama Rao";  // Array  is  initialized  with  string  and  array  size  is  8 + 1 = 9
	printf("%s\n" ,  a); // string  in   array   'a'  --->  Rama   Rao
	printf("%d\n" , sizeof(a)); // size   of  array  is  9 * 1 =  9B
	//int  b[] = "Rama Rao";  //  Error  becoz   int  array  can  not  hold  string
	char  c[10];
	//c = "Rama Rao";   //  Error  becoz   array   can  not  be  initialized  later
}



/*
1)  char  a[] = "Rama Rao"
				can  not  be  divided into  2  statements
	  char  a[10];
      a = "Rama Rao";

2)  Variable  and   pointer  can  be   initialized   later   but   not   array
*/


