// Save  in 05_Find_Largest.c  file
// Find  largest  command  line  input
#include <stdlib.h>
main(int  argc , char*  argv[])
{
	if (argc == 1)
		printf("Send  inputs  from  command  line\n");
	else
	{
		int  x , i;
		int  max = atoi(argv[1]); // First  input  is  copied  to  variable  max
		for(i = 2 ; i <= argc - 1 ; i++) //  Process  each  of  the  remaining  inputs  from  2nd  input
		{
			x = atoi(argv[i]);  // Each  input is  copied to  variable  'x'
			if(x > max) // Whichever  input > max , copy  that  input  to  max
				max = x;
		}
		printf("Largest number : %d \n" , max);
	}
}
/*
1)  05_Find_Largest  10    20     30     25     40     35    50
       0        1       2       3      4        5       6     7

2) 05_Find_Largest

3)  for(i = 2 ; i <= 6 ; i++)  --->  Program  works  only  for  6   inputs
     {
	 }

4) for(i = 2 ; i <= argc - 1 ; i++)  --->  Program  works  for any  number  of   inputs
     {
	 }

Note:
1) How  to  compile  the  program  ?   ----> Execute  ----> Compile

2) How  to  send  inputs  from  command  line ?  ---->  Execute  --->  Parameters  --->  10    20  30   25   40   35  --->  ok

3) How  to  run  the  program ?  ----->  Execute  ----> run
*/
