//  Divide  telephone  number  into  std  code , area  code  and phone number
#include <stdio.h>
#include <string.h>
main()
{
		char a[] = "(040)233-04078";
		printf("%s\n",a);
		printf("Std  code  :   %s \n"  ,  strtok(a +1  , ")") ); //   returns  "040"  becoz  it  is  followed  by  ")"
		printf("Area  code :  %s \n"  , strtok(NULL , "-"));  //  returns  "233"  becoz  it  is  followed  by  "-"
		printf("Phone  number  :  %s \n"  ,   strtok(NULL , "\0"));  //  returns  "04078"  becoz  it  is  followed  by  "\0"
}


/*
"Rama  Rao" + 1 = "ama  Rao"
"Rama  Rao" + 2 = "ma  Rao"
"Rama  Rao" + 5 = "Rao"
*/
