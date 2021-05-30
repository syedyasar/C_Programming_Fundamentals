//  itoa   function demo program
#include <stdio.h>
#include <stdlib.h>  //  for  itoa   function
main()
{
	char  a[20]; // 'a'  is  an  array of size  20
	itoa(25 , a , 10); //  25  is  converted  to  "25"  and is  represented  in  array  'a'  in  decimal  form
	printf("%s\n" , a); // string  in  array   'a'    --->  25
    itoa(25 , a , 2); //  25  is  converted  to  "25"  and is  represented  in  array  'a' in   binary  form  --->  "11001"
	printf("%s\n" , a);  //  string  in  array  'a'  --->  11001
    itoa(25 , a , 8); //  25  is  converted  to  "25"  and is  represented  in  array  'a' in   octal   form  --->  "31"
	printf("%s\n",  a); // 31
	itoa(25 , a , 16);  //  25  is  converted  to  "25"  and is  represented  in  array  'a' in   hex dec  form  --->  "19"
	printf("%s\n" , a); // 19
}




/*
1)  itoa  function    converts  integer  to  string

2)  It  is    defined  in  <stdlib.h>

3)  It  has    3  parameters
     a)  int  number
     b)  Array(i.e. char  array)
     c)  Base(2 , 8 , 10  or  16)

4) (float)25  ---> integer to  float conversion ---> 25  is  converted to 25.0
    (char)65  ---> integer to  char conversion ---> 65  is  converted to  'A'
    (string)25  ---> Error becoz there is no string data type
    itoa(25, a , 10);  ---> integer to  string conversion ---> 25  is  converted to  "25"
*/



