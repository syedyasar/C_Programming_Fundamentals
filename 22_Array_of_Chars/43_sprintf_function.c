//  sprintf   function  demo  program


#include <stdio.h>
main()
{
	int h = 15 , m = 38 , s = 46;
	char  a[10];
    sprintf(a , "%d  :  %d  :   %d" , h , m , s);  //  Writes  values  of  h , m   and  to   array   'a'  along  with  colons
	printf("Array  a  --->  %s \n" , a);  // 15  :  38  :  46
}



/*
sprintf()
---------------
1) sprintf   function  writes  values  of  h , m , s  to  array  'a'  along  with  ':'

2) Array  'a'  contains  "15:38:46"

3) sprintf   joins  hours , minutes  and  seconds  to  form    a  string  and  string  is  written  to  array  'a'

4) sprintf  is  defined  in  <stdio.h>  file

5) printf  writes  to  monitor  but
    sprintf  writes  to  array(i.e. char  array)  and  array  is  the  first  parameter   to    sprintf

6) sscanf  does   split  and  sprintf  does   join

*/
