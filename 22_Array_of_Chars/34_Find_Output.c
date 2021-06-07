// Find   outputs
#include <stdio.h>
#include <string.h>
main()
{
		char a[] = "Hyd is green city";
		char*  token = strtok(a , " ");  // returns   1st   token  "Hyd"  becoz  it  is  followed   by  "  "
		while(token  !=  NULL) // Loop  is  executed  until   strtok  returns   NULL
		{
				printf("%s\n" , token);  //  Each  token  of   the  string
				token = strtok(NULL , " ");  // Next  token  of  the  string
		}
}
