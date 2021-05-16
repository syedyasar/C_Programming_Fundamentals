// Find  outputs
#include <stdio.h>
main()
{
	printf("%s\n" , "Hyd"); //  Hyd
	printf("%5s\n" , "Hyd"); //   <2 spaces>Hyd
	printf("%-5s\n" , "Hyd"); //  Hyd<2 spaces>
	printf("%2s\n" , "Hyd"); //   smaller  width  2  is ignored and Full  string  is  printed ---> Hyd
}

/*
1) %5s ----> string  in  a   width    of  5   characters  with  leading  spaces

2) %-5s ----> string  in  a   width    of  5   characters  with  trialing  spaces
*/

