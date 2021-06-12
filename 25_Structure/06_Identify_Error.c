// Identify  error
#include  <stdio.h>
#include  <string.h>
struct  emp
{
	int  empno;
	char  ename[20];
	float  sal;
	char  gender;
};
main()
{
	//struct  emp   a  =  { "Rajesh" , 25, 'm' , 2000.0} ; // Error  becoz  order  of  values is  different  from  that  of  members in  the structure  definition
	struct  emp  b ; // Okay
    //b  = {25 , "Rama  Rao" , 1000.65 , 'm'}; //  Error  becoz  structure  can  not  be  initialized  later
    strcpy(b . ename ,  "Rama  Rao");   //  Each member  can  be  initialized  separately and  order  is  not  important
    b . empno = 25;
    b . gender = 'm';
    b . sal = 1000.65;
	printf("%d\n" , b . empno); // 25
	printf("%s\n" , b . ename);  // Rama Rao
	printf("%g\n" , b . sal);  // 1000.65
	printf("%c\n" , b . gender); //  m
}


/*
1)  Can  i   initialize  variable  later ?  --->  Yes
     Eg :  int   x;
             x = 25;  ---> Okay

2) Can  i   initialize  pointer  later ?  --->  Yes
     Eg :  int*   p;
             p = &x;  ---->  Okay

3) Can  i   initialize  array  later ?  --->  No
     Eg :  int   a[4];
             a = {10 , 20 , 30 , 40}; ---->  Error

4) Can  i   initialize  structure  later ?  --->  No
     Eg :  struct  emp   a;
             a = {25 , "Rama Rao" , 1000.65 , 'm'};  ---->  Error
*/
