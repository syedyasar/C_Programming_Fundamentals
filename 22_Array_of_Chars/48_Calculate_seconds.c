/*
Input  ---->   hh : mi : ss
Display result in the form of seconds
Eg:
input  ---->   15 : 38 : 46
output  --->    15 * 3600 + 38 * 60 + 46

main() ---> Reads string , calls eval function and display result
eval()  ---> divides  string  into  h , m , s  ,  validate  h , m , s   and converts  h , m , s  to sec
*/
#include <stdio.h>
int  eval(char  *a)  //   'a'   points  to   "18:45:60"
{
		int  h , m , s;
		sscanf(a , "%d : %d : %d" , &h , &m , &s);  //  Initializartion  of  h , m  , s
		while(h < 0 || h > 23 || m < 0 || m > 59 ||  s < 0 || s > 59)  //  Loop  is   executed  until  user  types  a  valid  time
		{
				printf("Invalid time, reenter : ");
				gets(a); // Reads  new   time  into   array  replacing  existing  time
				sscanf(a , "%d : %d : %d" , &h , &m , &s); // Modification  of  h  ,  m ,   s   to  avoid  infinite  loop
		}
		return  h * 3600 + m * 60 + s; // Conversion of  hours , minutes , seconds  to  seconds
}

main()
{
		char   a[9];  //  Array   is   created
		printf("Enter time in the format  hh : mi : ss   -----> ");
		gets(a);  //  Reads  time  into  array
		printf("Equivalent   Seconds  :  %d\n" , eval(a));
}

/*
1)   Both   the   following   inputs  are  valid
      a) 07 : 08 : 09
      b) 7 : 8 : 9

2) while   loop   is  preferred   over  if   in   eval   function.
*/

