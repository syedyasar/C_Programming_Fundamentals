//  ftoa   function demo program
#include <stdio.h>
#include <stdlib.h>
main()
{
		char  a[20];
		ftoa(123.9274 , a , 2); //  float  to string  conversion  ---> 123.9274  is  converted to "123.93"  and  is  represented in  array  'a'
		printf("%s\n" , a); //  string  in  array   'a'  ---> 123.93
}



/*
1)  ftoa  function converts  float  number  to  string

2)  It  is  also  defined  in  <stdlib.h>

3)  It  has  3  parameters
     a)  float  number
     b)  Array  (char  array)
     c)  precision  i.e.  number  of  digits  after  decimal  point

4) ftoa  is  not  supported by gcc compiler
Note:
1) How  to convert   float   to   integer ?  ----> (int)10.8  --->  10
2) How  to convert   float   to   char ?  ----> (char)65.8  --->  'A'
3) How  to convert   float   to   string ?  ---->  ftoa(10.85 , array , 2)
*/
