// Sort  inputs  passed  from  command line
// Save  the  program  in   prog8.c  file
#include <stdio.h>
#include <stdlib.h>
main(int   argc , char*  argv[])  // Array  argv   contains  filename  and  inputs
{
	if(argc > 1) // Is  at  least  one  input   passed  from command  line ?
	{
		int   a[argc - 1];  // Array  is  created  of  size argc - 1
		int   i;
		for(i = 1 ; i <= argc - 1 ; i++) // Copy  each  input  in  argv  array   to  array   'a'  in  the  form  of   integer
				a[i - 1]  =  atoi(argv[i]);
		sort(a , argc - 1); // Array   'a'  is  sorted
		printf("Sorted  Results\n");
		for(i = 0 ; i <=  argc - 2 ; i++) // Array  'a'  is  printed
				printf("%d\n" , a[i]);
	}
	else
			printf("Send  inputs  from   command  line \n");
}

/*
1)   prog8    10   20    15      5     12
         0         1     2       3      4       5

2)  prog8
*/

void  sort(int  *a , int n)
{
		int   i , ctr , temp;
		do
		{
			ctr = 0;
			for(i = 0 ; i <= n - 2 ; i++)
			{
				if(a[i] > a[i+1])
				{
					temp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = temp;
					ctr++;
				}
			}
		}
		while(ctr>0);
}


/*
         Array  argv												                 Array  'a'
  ----------------------------------------------------------------------------------------------------------------------------------------------------
1) It  is  array  of  strings								          1) It  is  array  of  integers  becoz  there  is  no  filename
    becoz   array  contains   filename                           in  the  array

2) It  is  initialized  by  OS  as  soon  as                  2) It  is  initialized  by  using  for  loop
    program  is   executed

3) Array  contains  filename  and  inputs				 3) Array  contains  only  inputs

4) Array  size  is  argc								             4) Array  size  is  argc - 1

5) Subscripts  are  0  to  argc - 1						     5) Subscipts  are  0  to  argc - 2
-------------------------------------------------------------------------------------------------------------------------------------------------------------
*/