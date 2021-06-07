#include<stdio.h>
main()
{
	char *a =  "Hyd";  //  'a'  points   to  "Hyd"
	char *b  = "Hyd"; // 'b'  points  to  same  string  becoz  string is  reusable
	if(a == b) //  True   becoz  'a'  and  'b'   point  to  same  string
		   printf("Strings  are same\n");
    else
		   printf("Strings are different\n");
}


/*
1)  String   is  reusable  but  not  array

2) There  may  be  several   arrays  with  same   string
*/