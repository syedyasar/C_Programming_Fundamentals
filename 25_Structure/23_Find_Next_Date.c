// Find next date
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
void  next(date*   p);
void   test(date  *p);


date  get()
{
	date  a;  // structure  is  created  with  3  members
	printf("Enter  date , month  and  4-digit  year  :  ");
	scanf("%d-%d-%d" , &a . dd , &a . mm , &a . yy); //  Reads  inputs  to   structure  'a'
	test(&a);  // Is   user  entered  date  valid ?
    return  a; //  structure  'a'  is   returned  before  it  is  lost  --->  3  values  are  returned
} // structure  'a'  is  lost

//  main   function   calls  get   function  and   it  inturn   calls  test   function

void  disp(date  a)
{
	printf("%d - %d - %d \n" , a . dd , a . mm , a . yy); // Prints   values  of  structure  'a'
}


bool  leap(int  year)
{
	return( year % 4 == 0 && year %100 !=0 ||  year % 400 == 0); // leap  year  is  divisible  4   but  not  by  100   or   divisible  by  400
}

/*
1) leap(a.yy)  is    function   call
    leap(2020)   --->  true
    leap(1900)  --->   true &&  false ||  false =  false || false = false
    leap(2000)   --->  true  &&  false ||  true  =  false || true = true
    leap(2021)   ---> false

2)  2012 , 2016 , 2020   ---->  Leap  year  for  every   4  years
     1700 , 1800 , 1900  ---->  No  Leap  year  for  every  100  years
     1600 , 2000 , 2400  ----> Leap  year  for  every  400  years

3)   int  leap(int  a.yy)  --->  Error  becoz  '.'  is  not  allowed  in   the  formal  parameter
      {
      }

4) No  operator  is  allowed  in  the  formal  parameter  except  * (*  means  pointer)

5) . , -> , [] , +  , /  , ......   are  not  allowed  in  the  formal  parameter

6)  Actual  paramter  can  be  structure  member   but  not   formal  parameter  and  formal  parameter   must
     be  variable   like  year
*/


int  last(date  a)  // a.mm   is   2  and  a. yy  is  1999
{
	static  int  m[] = { 0   , 31 , 29  , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31}; // Last  day  of  each  month
	if (leap(a . yy))  // m[2]  is  modified  to  29   or  28   based  on  a.yy  is  leap   year  or  not
			m[2] = 29;
    else
			m[2] = 28;
	return  m[a . mm]; // last  day  of  month  in  structure  'a'
}


/*
1)  If  structure  'a'  contains   6th  month ,  last   function  returns  m[6]  i.e. 30

2)  If  structure  'a'  contains   10th  month ,  last   function  returns  m[10]  i.e. 31

3)  If  structure  'a'  contains   2nd  month ,  last   function  returns  m[2]  i.e. 28  or  29  based  on  a.yy  is  leap
     year   or  nnot

4)  Advantage  of  1st  0  in  array  'm'   is  that  month  number  and  subscript   are   same

5) Advantage  of  static   array  is  that   array   'm'  is  initialized  once  and  only  once  but  not   every   time
    function  is   called. Execution  time  is  saved  becoz  repeated   initialization   is   avoided
*/

void  next(date*   p) // p  points  to  main  function  structure  'a'
{
		p ->dd++; // date  is  incremented  by  1
		if(p -> dd > last(*p)) // if  date is  >  last  day  of  month, go  to  1st of  next  month
		{
				p -> dd = 1;
				p -> mm++;
				if(p -> mm > 12) // if  month  >  last month , go to 1st month  of  next  year
				{
						p -> mm = 1;
						p -> yy++;
				}
		}
}
/*
main()
{
	date  a = get();  // Reads  date , month  and  year  into  structure  'a'
	next(&a); // stores  next  date  in  the  structure  replacing  existing  date
	printf("Next Date  :  ");
	disp(a);  // prints  contents  of  structure  'a'
}
*/

//  main ()  ----> next()  ---> last()  ---> leap()


void  test(date*  p)
{
	while (p -> mm < 1 || p -> mm > 12 || p -> dd < 1 ||  p -> dd > last(*p))
	{
		printf("Invalid  and  reenter : ");
		scanf("%d-%d-%d" , &p -> dd , &p -> mm , &p -> yy);
	}
}
