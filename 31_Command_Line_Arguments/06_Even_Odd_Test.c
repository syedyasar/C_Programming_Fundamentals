// Save  in  06_Even_Odd_Test.c   file
// Test  command  line  input  is  even  or  odd
#include  <stdio.h>
#include  <stdlib.h>
main(int    argc , char*  argv[]) // Array  argv  contains filename  and  input
{
		if(argc  ==  1) // Is  input  passed  from  command  line ?
				printf("Send  input\n");
		else
		{
				int    x  =  atoi(argv[1)); // Copy  input  in argv  array  to  variable 'x'
				if(x  %  2  ==  0)  //  Is  'x'  even  number ?
						printf("Even  number \n");
				else
						printf("Odd  number  \n");
		}
}

/*
1) 06_Even_Odd_Test   25
2) 06_Even_Odd_Test   46
3) 06_Even_Odd_Test
*/
