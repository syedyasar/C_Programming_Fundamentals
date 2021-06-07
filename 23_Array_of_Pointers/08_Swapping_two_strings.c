// How   to   swap strings ?
#include <stdio.h>
#include <string.h>
main()
{
	char  a[20] , b[20] , temp[20];
	printf("Enter any 2 strings \n");
	gets(a);
	gets(b);
	strcpy(temp , a);  //  String  in  array  'a'  is  copied  to  array  temp
	strcpy(a , b); //  String  in  array  'b'  is  copied  to  array   'a'
	strcpy(b , temp); //  String  in  array  temp   is  copied  to  array   'b'
	printf("a :  %s \n" , a);
	printf("b :  %s \n" , b);
}



/*
1)  = opearator  is  used   to   swap   integers , floats , characters  and  pointers
     i.e.   temp  =  a;
             a  =  b;
             b  =  temp;

2) strcpy   is  used   for swapping strings
*/


