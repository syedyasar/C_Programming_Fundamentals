// Print  File  page  wise  and  page  length = 20

#include  <stdio.h>
#include  <conio.h>
#include  <stdlib.h> // system()

void   disp(FILE*   fp)          // fp  points  to  file  opened  in   main  function
{
	char    a[80];
	int    ctr  =  0;
	rewind(fp);                  // moves  fp  to  the  begining  of  the  file
	fgets(a  ,  79  ,  fp);      //  Reads  1st  line  of  the  file  to  array  'a'	
	while(!feof(fp))             //  Loop  is  executed  until  EOF  is  reached
	{
		printf("%s" , a);        //  Prints  each  line of  the  file
		ctr++;                   //  counts  number  of  lines  in  the  file		
		if (ctr  %  20  ==  0)   // Suspends  program  execution  for  every  20  lines
		{
			system("pause");     // Prints  next  20  lines  after  user  strikes  a  key
			system("cls");       // clears  existing  20  lines  before  printing  next  20  lines
		}		
		fgets(a ,  79  ,  fp);   //  Reads  next  line  of  the  file  to  array  'a'		
	} // while		
}



/*

If  file  contains  103  lines:
1) while  loop  is  executed  103  times

2) If  condition  is  true  5  times
    i.e. At  the  end  of  20th , 40th , 60th , 80th  and  100th  lines

3) 6  pages  of  outpus,  first  5  pages  contains  20  lines  each  and  6th  page  contains  3  lines

*/


main(int  argc  ,  char*argv[])  // Array  argv  contains  filename  passed  from   command line
{
	FILE*   fp  =  fopen(argv[1]  ,  "r"); // Opens  file  passed  from  command  line  in  read  mode
	if(fp  ==  NULL) // Is  file  existing
		printf("File  %s  does  not  exist  \n"  ,  argv[1]);
	else
	{
		disp(fp); // File is  printed  pagewise
		fclose(fp); // File   is  closed
	}
}


/*

1) prog2a   a.txt  --->  a.txt  file  is  printed  pagewise  and  argv[1]  is  "a.txt"

2) prog2a   c:\srinivas\a.txt  --->  File  of  a  differnet  directory  is  printed  and  argv[1]  is   "c:\srinivas\a.txt"

3) prog2a   prog2a.c  --->  same  program  is  printed,  argv[0]  is  prog2a.exe  and  argv[1]  is   prog2a.c

4)  fopen(__FILE__  ,  "r")  ---> Opens  current  file  i.e.  prog2a.c

*/

