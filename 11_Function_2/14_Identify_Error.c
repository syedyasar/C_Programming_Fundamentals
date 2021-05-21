// Identify  Error
#include <stdio.h>
main()
{
	if(1)
	{
			printf("Hello\n");
			continue;  // Error  becoz  continue is not allowed inside  if  
			printf("Bye\n");
	}
}