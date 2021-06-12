// Repeat  student  program  for  'n'  students
#include "20_Find_Total_Average_Grade_of_Student.c" //  structure  def  ,   typedef  ,   get() , compute()  and  disp()   functions  are  substituted
#include <stdio.h>
main()
{
	int  n , i;
	printf("How many students ?  :  ");
	scanf("%d" , &n);
	stud  a[n];  // Array   of  'n'  structures  and  each structure  is  of  type  stud
	for(i = 0 ; i <= n - 1 ; i++)
			a[i] = get(); // Reads  each student  data  to  structure  a[i]  where   i   varies  from  0  to  n-1
	for(i = 0 ; i <= n - 1 ; i++)
			compute(&a[i]); // stores  results  in  structure  a[i]
	for(i = 0 ; i <= n - 1 ; i++) // Prints  array  of  structures
			printf("%4d \t %20s \t %3d \t %5.2f \t %20s \n" , a[i] . rno , a[i] . sname , a[i] . tot , a[i] . avg , a[i] . grade);
}

//comment main function in 20_Find_Total_Average_Grade_of_Student.c file
