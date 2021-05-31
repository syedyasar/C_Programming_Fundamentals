//Find  outputs
#include  <stdio.h>
char*   f1()
{
	return  "Rama Rao";  //  string  is  not  returned  but  address  of  1st  char  is   returned
}
main()
{
	char*   a  =  f1();   //  'a'  points  to  1st  char  of  the  string
	printf("%s \n" , a);  //   that  string  where   'a'  points  --->    Rama  Rao
	printf("%u \n" , a);  // Address  in  pointer  'a'   --->  may  be  1000
	printf("%c \n" , *a); //  that  character   where  'a'   points   --->  R
	printf("%c \n" , a[5]); // Character  at  subscript   5   --->   R
}


/*
1) return  "Rama  Rao";    ---->   string  is  not   returned   but    address  of  first  character  is  returned
  
2) return  type  is  char*  when  function    returns  string

3)  return   25;   --->     return  type   is   int
     return   10.8f;   --->     return  type   is   float
     return   'g';   --->     return  type   is   char
     return   "Hyd";   --->     return  type   is   char*

4)  a[0]  and  *a    are   'R'
     a[1]  and  *(a + 1)   are    'a' 
     a[2]  and  *(a +2)   are    'm'
	 and  so  on
*/