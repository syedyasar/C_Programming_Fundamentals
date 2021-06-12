//  Difference  between  variable  and  member
#include  <stdio.h>
struct  s1
{
	int   x; // It  is  member  becoz  it  is  declared inside  the  structure
};
main()
{
	struct  s1  a;
	int   y = 20; // It  is  variable   becoz  it  is  declared inside  the  function
	printf("%d\n" ,  a . x); //  Garbage value  becoz  'x'  is  not  initialized
	printf("%d\n" , y); //  20
	//printf("%d\n" , a . y); //  Error  becoz  'y'  is  not  a  member of  the  structure
}


//  member  is  accessed  by  a.x  and variable is accessed by  'y'  but not a.y

