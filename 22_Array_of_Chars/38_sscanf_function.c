// sscanf  function demo program
#include <stdio.h>
main()
{
	int  h , m , s;
	sscanf("15:38:46" , "%d:%d:%d" , &h , &m , &s); // Reads  15  to  variable h , 38  to m , 46  to  s
	printf("h : %d \n" , h); // 15
	printf("m : %d \n" , m); // 38
	printf("s : %d \n" , s); // 46
}





/*
sscanf   function
------------------------------
1) sscanf  function   reads  15  to  variable   h , 38   to   m , 46  to  s

2) It  divides  string  into  hours , minutes  and  seconds

3) ":"  is  necessary  between  the  formats   becoz  since  string  contains  ":"

4) scanf  reads  from  keyboard  and
     sscanf  reads  from   string  and  string  is  the  first  parameter  to    sscanf  function

5) sscanf  is  defined  in  <stdio.h>  file
*/
