/*
Print   employee   data  passed  from  command line
Save  the  program  in  prog9 . c file
*/
#include <stdlib.h>
#include <stdbool.h>
struct  emp
{
	int  empno;
	char  ename[20];
	float  sal;
	char  gender;
	bool  married;
};

main(int  argc , char*  argv[]) // Array   argv  contains filename  and  inputs
{
	if(argc > 1) // Is  at  least  one  input  passed  from  command  line ?
	{
		struct  emp  a; // structure  is  created  with  5  members
		a . empno = atoi(argv[1]); // All the  inputs  in  argv   array   are  copied  to  structure  'a'
		strcpy(a . ename , argv[2]);
		a . sal = atof(argv[3]);
		a . gender = argv[4][0];
		if (stricmp(argv[5] , "true") == 0)  //  'i'  means  ignore  case
				a . married = true;
		else
				a . married = false;
		printf("Emp Number   :  %d \n" , a . empno);  // structure  'a'  is   printed
		printf("Emp  Name  :  %s \n" , a . ename);
		printf("Salary  :  %g\n" , a . sal);
		printf("Gender :  %c \n" , a . gender);
		printf("Married  ?   :  %d \n" , a . married);
	}
	else
			printf("Send inputs from command line\n");
}



/*
1) prog9   25   "Rama rao"    1000.65     m   true
        0       1          2                    3            4     5

2) prog9

3) prog9    25  Rama  Rao   10000.65    m    true   --->  Garbage   results   becoz   Rama  Rao  is  not  enclosed  in  quotes

4) prog9   Rajesh   25    true   20000.0    m    --->  Garbage   results   becoz   inputs  are  passed  in   differnet  order

5) How  to  convert  string  to  integer ? --->  atoi()
    How  to  convert  string  to  float ?  --->   atof()
    How  to  convert  string  to  character ? --->  string[0]
    i.e.  "m"[0]  is  'm'  ---->  "m"  is  converted  to  'm'
*/
