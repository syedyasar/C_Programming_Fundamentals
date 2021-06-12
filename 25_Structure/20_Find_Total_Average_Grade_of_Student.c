/*
Find  total , avg  and  grade  of    a   student.
Inputs  are  roll number , student  name  and  marks of 3 subjects
1)  At  least   one subject  < 40 ---->  Fail
2)  avg >= 70  ---> Distinction
3) avg >= 60  --->  1st class
4) avg >= 50  --->  2nd  class
5) avg >= 40  --->  3rd class
*/


#include <stdio.h>
struct  student  // Defining  student  structure
{
	int  rno;
	char  sname[20];
	int  m[3]; // marks  of  3  subjects
	int  tot;
	float  avg;
	char*   grade;  // grade  is   a  pointer  to  string
}; // End  of  structure  definition

typedef  struct  student  stud; // struct  student   is  a  given  a  shortcut  name  stud

// sizeof(stud)  --->  4 + 20 + 12 + 4 + 4 + 8 = 52


stud  get()
{
	stud  s;  // structure  is   created
	printf("Enter Roll number : ");
	scanf("%d" ,  &s . rno);
	printf("Enter student   name  :  ");
	fflush(stdin);  // flushes   "\n"  between  rollnumber  and  studname
	gets(s . sname);
	printf("Enter  marks  of  3 subjects   :   ");
	scanf("%d%d%d" , &s . m[0] , &s . m[1] , &s . m[2]);
	return  s;  //  structure  is   returned  before  it  is  lost  i.e. 8  values  are  returned
} // structure  's'  is  lost

// get function returns  5 + 3 = 8  values
// student  name  is   not  read  when   fflush   is  not  used

void  compute(stud*   p) // p  points  to  main  function  structure  's'
{
	p -> tot = p -> m[0] + p -> m[1] + p -> m[2];
	p -> avg = p -> tot / 3.0;
	if (p -> m[0] < 40 || p -> m[1] < 40 || p -> m[2] < 40)  // at  least  one  subject  is  <   40
			p -> grade = "Fail";
	else
	if (p -> avg >= 70)
		p -> grade = "Distinction";
	else // Not  distinction
	if (p -> avg >= 60)
		p -> grade = "First Class";
	else // Not  1st  class
	if (p -> avg >= 50)
		p -> grade = "Second Class";
	else // Not  even 2nd  class
			p -> grade = "Third Class";
}

void disp(stud  s)
{
	printf("Roll No : %d \n" , s . rno);
	printf("Stud Name : %s \n" , s . sname);
	printf("Total marks: %d \n" , s . tot);
	printf("Avg marks : %f \n" , s . avg);
	printf("Grade : %s \n" , s . grade);
}

/*
main()
{
	stud   s = get();  // Reads  roll number , stud  name  and  marks  of  3  subjects  into  structure  's'
	compute(&s);  // Results   are  stored  in  structure  's'
	disp(s);  // prints  contents  of  the  structure
}
*/


/*
1) Handle Fail at the begining but not at the end

2) compute(s)   ---->  Results  are  stored  in  Formal  parameter  structure  but  not  reflected  to  actual
								  parameter   structure  's'

3) Therefore  send  &s  to  compute  function  so  that  results  are  reflected  to  structure  's'
*/



