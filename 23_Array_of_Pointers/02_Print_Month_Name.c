//  Input   is  month  number  and  print  month  name
#include <stdio.h>
main()
{
	char*    a[] = { ""  ,  "January" , "February" , "March" , "April" , "May" ,"June" , "July" , "August" , "September" , "October" , "November" , "December"};  //  Array   of  13  strings
	int  m;
	printf("Enter  month  number (1 - 12)  :  ");
	scanf("%d" , &m); //   Reads  month  number  to  variable  'm'
	if (m < 1 || m > 12) // valid  month  numbers  are  1  to  12
		printf("Invalid month number \n");
	else
		printf("Month : %s\n" , a[m]); // Prints  a[m]
}



/*
1) Advantage   of  empty  string  in  array    is  that  month  number  and  subscript  are  same  i.e.  1-12

2) print  a[m-1]  when  empty  string  is  missing  in  array   'a'

3) Each  string  is  represented  some  where  in  memory  and  their  addresses  are  represented  in  the  array

4) Thus  array  contains  addresses  of  strings  but  not  strings

5)  It  is   array  of  pointers  but  not  array  of  strings  and  each  pointer  points  to  string
*/
