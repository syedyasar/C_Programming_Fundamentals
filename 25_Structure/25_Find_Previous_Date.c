/*  Find  previous   date  for  the  input  date
1) input --->  1-1-2000
    output date --->  31-12-1999
2) input --> 1-8-2000
    output -->  31-7-2000
3) input ---> 1-3-2000
    output --->  29-2-2000
3) input  --->  10-6-2000
    output  --->  9-6-2000

main()  ---->  same  as   previous  program
get()   ---->  same  as   previous  program
disp()   ---->  same  as   previous  program
leap()   ---->  same  as   previous  program
test()  ---->  same  as   previous  program
last()   ---->  same  as   previous  program
prev()  --->  same  as  next  function  but  few  changes  are  to  be  made
*/

#include <stdio.h>
#include <stdbool.h>  //  for   bool    type

struct  date_tag // structure  definition
{
	int  dd , mm , yy; // members  of   the   structure
}; // End  of  the  structure  definition

typedef  struct  date_tag   date; //  struct  date_tag  is  given  a  shortcut  name   date

date   get();  //  Global   Function   prototypes
void    disp(date  a);
bool   leap(int  year);
int    last(date   a);
void  prev(date*   p);
void   test(date  *p);


date  get()
{
	date  a;  // structure  is  created  with  3  members
	printf("Enter  date , month  and  4-digit  year  :  ");
	scanf("%d-%d-%d" , &a . dd , &a . mm , &a . yy); //  Reads  inputs  to   structure  'a'
	test(&a);  // Is   user  entered  date  valid ?
    return  a; //  structure  'a'  is   returned  before  it  is  lost  --->  3  values  are  returned
} 

void  disp(date  a)
{
	printf("%d - %d - %d \n" , a . dd , a . mm , a . yy);
}


bool  leap(int  year)
{
	return( year % 4 == 0 && year %100 !=0 ||  year % 400 == 0); 
}



int  last(date  a) 
{
	static  int  m[] = { 0   , 31 , 29  , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};
	if (leap(a . yy))  
			m[2] = 29;
    else
			m[2] = 28;
	return  m[a . mm]; 
}




void  prev(date*   p) // p  points  to  main  function  structure  'a'
{
		p ->dd--; 
		if(p -> dd ==0) 
		{
				if(p -> mm == 1){
				p -> mm =12;
				p -> yy--;
				}  
				else{
				p -> mm--;	
				}
				p -> dd = last(*p);
		}
}


main()
{
	date  a = get();  // Reads  date , month  and  year  into  structure  'a'
	prev(&a); // stores  next  date  in  the  structure  replacing  existing  date
	printf("Last Date  :  ");
	disp(a);  // prints  contents  of  structure  'a'
}


//  main ()  ----> next()  ---> last()  ---> leap()


void  test(date*  p)
{
	while (p -> mm < 1 || p -> mm > 12 || p -> dd < 1 ||  p -> dd > last(*p))
	{
		printf("Invalid  and  reenter : ");
		scanf("%d-%d-%d" , &p -> dd , &p -> mm , &p -> yy);
	}
}
