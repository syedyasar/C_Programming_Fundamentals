// Pointer  to  string
#include <stdio.h>
main()
{
		char*   a = "Hyd";   //  'a'   points  to  string  or   1st  char  of  the  string
		printf("a[0] : %c \n" , a[0]); //  a[0]  means  char  at  subscript  0   ---> H
		printf("a[1] : %c \n" , a[1]);   //  a[1]  means  char  at  subscript  1   --->  y
		printf("a[2] : %c \n" , a[2]);   //  a[2]  means  char  at  subscript  2   --->  d
		printf("a[3] : %c \n" , a[3]); //   '\0'  but  it  is  a  non-printable  character
		printf("\n");
		printf("*a : %c \n" , *a);  //   *a  means  character  at  address  'a'  ---> H
		printf("*(a + 1) : %c \n" , *(a + 1)); //   *(a+1)   means  character  at  address  a+1  ---> y
		printf("*(a + 2) : %c \n" , *(a + 2));  //   *(a+2)   means  character  at  address  a+2  --->  d
		printf("*a + 1 : %c \n" , *a + 1);  //  'H' + 1 = 'I'
		printf("*a + 2 : %c \n" , *a +  2); //  'H' + 2 = 'J'
		//string  b = "Hyd";  //  Error  becoz   there  is  no  string  type  in  'C'  language
		//char   c = "Hyd"; //  Error  due  to  mismatch  
}


/*
1) char   *a   =  "Hyd"   ---->  "Hyd"  is  represented  some  where  in  the  memory  and   address  of  first  character  is 
                                               assigned  to  pointer  'a'

2) Hence  'a'  points  to  string  i.e.  first  character  of  the  string

3) Type   of   25   is   int  
     Type   of   10.8   is    double
     Type   of   45.6f   is   float
     Type   of   'g'    is   char
     Type   of   "Hyd"     is   char*

4) Type  of  string  is  char*  becoz   string  data  type  does  not  exist  in  'C'  language

5) String  is  internally  represented  by  address  and   hence  type  of  string  is  char*

6) Therefore  type  of  'a'  is  also  char*
    
7) String  supports  subscripts  like  array

9) Subscripts  of  the  characters  are  0 , 1 , 2 , 3 ,.....

10)  array[i]  is  valid  becoz  subscript  operator  can  be  used  for  arrays,
       str[i]  is  valid    becoz   subscript  operator  can  also  be  used  for  strings,
       ptr[i]  is  valid  provided  ptr  points  to  either  array  or  string

11) String  is  represented  in  contiguous  memory   locations  like  array

12) Addresses  of  the  characters  are  a , a + 1 , a + 2 , a + 3
*/	
