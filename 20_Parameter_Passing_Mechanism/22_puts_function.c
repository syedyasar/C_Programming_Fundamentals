//  puts   function
#include  <stdio.h>
main()
{
	puts("Hyd");  //  They  are  printed  in  different  lines
	puts("Sec");
	puts("Cyb");
}

/*
1)  puts  writes  a  string  to  console(monitor)

2) Control  goes   to  next  line  after  printing  the  string
     i.e.  '\n'  is  not  required

3) printf("Hyd");
     printf("Sec");
     printf("Cyb");  --->  They  are  printed  in  same  line

4) puts("Hyd\n");  
	puts("Sec\n");
	puts("Cyb\n");
	Outputs:
	Hyd
	<blank  line>
	Sec
	<blank line>
	Cyb
	<Blank  line>
*/
