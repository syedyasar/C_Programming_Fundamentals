// pointer to function demo program
#include <stdio.h>
int  fact(int n)  // Recursive  function
{
	if (n > 0)
		return  n * fact(n - 1);
	else
		return  1;
}
main()
{
	int  (*p)(int); // p  can   point  to  that   function which  has  2  int  parameter
	p =  fact;  
	printf("%d \n" , fact(3)); // Direct  call
	printf("%d \n" , p(4)); // Indirect  call
	printf("%d \n" , (*p)(5)); // Indirect  call
}
