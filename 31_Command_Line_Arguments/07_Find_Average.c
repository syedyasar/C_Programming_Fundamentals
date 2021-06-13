// Save  the  program  in   07_Find_Average.c
// Find  average of  command  line  inputs
#include  <stdlib.h>
main(int  argc , char*  argv[]) // Array  argv   contains  filename and inputs
{
	if(argc > 1) // Is  at  least  one  input  passed from command line ?
	{
		float  sum = 0;
		int  i;
		for(i = 1 ; i <= argc - 1 ; i++) // Process  each   input of  argv  array
				sum += atof(argv[i]); // Add  each  input in   argv  array   to  sum
		printf("Average :  %g\n" , sum / (argc - 1));  // sum of inputs / Number of inputs  is  avg
	}
	else
		printf("Send  inputs  from  command  line\n");
}

/*
1) 07_Find_Average   10.8      25      42.6   17    9.2
        0          1         2          3      4       5

2) 07_Find_Average

3) Use  atoi()   function   when  all  command  line  inputs  are  integers

4) Use  atof()  function  when   command  line  inputs  are  integers  and  floats
*/
