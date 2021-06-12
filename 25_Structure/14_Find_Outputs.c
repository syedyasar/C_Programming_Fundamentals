// Find outputs
#include <stdio.h>
main()
{
	typedef        char*        string; // char*  is  given  another  name string
    string     a = "Hyd" ,  b = "Sec" ;
	//string    c = 'g'; //  Error  due  to  mismatch
	printf("a :  %s\n" , a); // Hyd
	printf("b :  %s\n" , b); // Sec
}


/*
1) typedef  provides more clarity  and  better  readability

2)  string  a = "Hyd" , b = "Sec"
              has  more  clarity  over
	  char*  a = "Hyd" , *b = "Sec"
*/



