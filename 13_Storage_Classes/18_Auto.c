//  Same program   but  auto   is   used  instead  of  static
#include <stdio.h>
void  f1(); // Global  Function  Prototype
main()
{
	int i;
	for(i = 1 ; i <= 3 ; i++) // i = 4
			f1();
} 
void f1()
{
	auto    int   a  =  10; // Another  variable  is   created with  value  10
	printf("%d\n" , a); //  10 , 10 , 10
	a++; //  11
} // variable  'a'  is  lost



/*
				automatic   variable															static  variable
---------------------------------------------------------------------------------------------------------------------------------------------------------------
1) It  is  declared  by  auto  int  x=10;						1) It  is  declared  by  static  int  x=10;

2) It  must  be  declared  inside  the  function			2) It  can  be  declared  inside  or  outside  the   function

3) It  contains  garbage  value  when  it  is  not	    3) It  contains  0  by  default  when  it  is  not  initialized
    initialized

4) It  is  lost  after  function  terminates					4) It  is  lost  after  program  terminates

5) It  is  initialized  every  time  function					5) It  is  initialized  once  and  only  once  but  not
    is  called  i.e.  repeated  initialization			            every  time  function  is  called  i.e.  one  time    initialization

6) It  is  created  every  time  function  is  called		6) It  is  created  only  for  the  first  function  call  but  
                                                                                       not  for  subsequent  calls
*/
