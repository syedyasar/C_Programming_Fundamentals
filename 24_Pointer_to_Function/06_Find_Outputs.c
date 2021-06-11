// Find outputs
#include <stdio.h>
main()
{
	printf("%u \n" , &main);  //  Address  of  main   function
	printf("%u \n" , main);  //  Address  of  main   function
	printf("%u \n" , main()); //  Function  call   to  main (i.e. Recursion)  and  leads   to    infinite   recursion
}


//  Above program  informs at what address main is loaded

