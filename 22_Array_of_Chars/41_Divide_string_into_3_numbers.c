// Divide string into 3 numbers
#include <stdio.h>
main()
{
	int a , b , c;
    sscanf("123456789012" , "%3d %2d %4d", &a , &b , &c);
	printf("a : %d \n" , a); // 123   due  to   %3d (3   digit  integer)
	printf("b : %d \n" , b); // 45   due  to   %2d (2   digit  integer)
	printf("c : %d \n" , c); // 6789   due  to  %4d( 4  digit  integer)
}

/*
1)  Since  there  are  no  delimeters  in the  string   and    %3d ,  %2d  and  %4d    are   required

2) "012"   is   ignored

3) sscanf("1234567890" , "%d %d %d", &a , &b , &c);  ----->   a   is  1234567890 ,  b   and  c    are  garbage

*/
