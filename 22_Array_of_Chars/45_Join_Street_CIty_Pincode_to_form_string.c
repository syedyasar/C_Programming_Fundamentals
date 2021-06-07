//  Join  Street , city  and  pincode   to form a  string
#include <stdio.h>
main()
{
	char st[] = "Khiartabad" , city[] = "Hyderabad";
	int pc = 500004;
	char  a[40];
	sprintf(a , "%s , %s - %d", st ,  city , pc);  //  writes  values  of  st , city  and  pc   to  array   'a'
	printf("Array  a  :  %s \n" , a); // Khiartabad , Hyderabad - 500004
}

