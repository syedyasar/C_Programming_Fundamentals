// Identify  Error
#include <stdio.h>
main()
{
	if(1)
	{
			printf("Hello\n");
			break; // Error  becoz  break   is not allowed inside  if  
			printf("Bye\n");
	}
}