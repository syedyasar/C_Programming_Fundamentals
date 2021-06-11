// Find outputs
#include <stdio.h>
main()
{
	printf("Hello\n");
	main(); //  It  is  a  function  call  to  main   and   recursion
	printf("Bye\n"); // Not  executed   due  to   infinite   recursion
}
