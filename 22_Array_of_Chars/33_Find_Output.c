// Find   outputs
#include <stdio.h>
#include <string.h>
main()
{
		char a[] = "15:38:46";
		char*    token = strtok(a , ":");   // returns  1st  token  "15"  becoz  it   is  followed  by  ':'
		while(token !=  NULL)  // Loop  is  executed  until  strtok  returns NULL
		{
				printf("%s\n" , token); // Each  token  of  the  string
				token = strtok(NULL , ":"); // Next  token  of  the  string
		}
}


//  while (token  !=  NULL)   is   same   as   while(token)  i.e.  !=  NULL  is  optional   in  the  condition