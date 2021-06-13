//  atoi  function  demo  program
#include <stdio.h>
#include <stdlib.h> // atoi   function
main()
{
		printf("%d \n" , atoi("25"));  //  "25"  is  converted  to   25
		printf("%d \n" , atoi("10.8"));   //  "10.8"  is  converted  to   10
		printf("%d \n" , atoi("0075"));  //  "0075"  is  converted  to   75
		printf("%d \n" , atoi("Hyd"));  //  garbage
		//int  x = "25";  //  Error  due  to  mismatch
		int  y = atoi("25"); //   25
		printf("%d\n" , y); //  25
}

// There  is  no typecasting  from  string  to  integer . Hence atoi  function  is  used to convert  string to  integer