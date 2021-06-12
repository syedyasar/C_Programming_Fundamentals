// structure  demo  program
#include  <stdio.h>
#pragma  pack  (1)  //  This  is  necessary  in  view  of  size
struct  emp
{
	int  empno;
	char  ename[20];
	float  sal;
	char  gender;
};  // ;   means  end  of  the  structure  definition  and  it  is  optional
main()
{
	struct  emp   a  = {25 , "Rama Rao" , 1000.65 , 'm' };
	printf("Employee  Number :  %d \n" , a . empno); // 25
	printf("Employee  Name  :  %s \n" , a . ename); // Rama  Rao
	printf("Salary :  %g \n" , a . sal); // 1000.65
	printf("Gender :  %c \n" , a . gender); // m
	//printf("Age :  %d \n" , a . age); // Error  becoz  age  is  not  a  valid  member  of  the  structure
	printf("Size of  structure :  %d \n" , sizeof(a));  // 4 + 20 + 4 + 1 = 29b
}


// sizeof(struct  emp)  and  sizeof(a)  are  same  i.e. 29B
