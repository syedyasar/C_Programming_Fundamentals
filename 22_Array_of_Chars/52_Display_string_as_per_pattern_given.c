/* Input  --->   VAMSI
    outputs:
    V
    VA
    VAM
    VAMS
    VAMSI
  Hint: Nested loops
           i         j
		 ----------------
		   0        0
		   1        0,1
		   2        0,1,2
		   3        0,1,2,3
		   4        0,1,2,3,4
main()  ---> Reads   a  string  and  calls   the  function
disp() ---->  Use  nested  loops   to  display  results
*/

#include <stdio.h>
void    disp(char*   a) // 'a'  points  to  array  'b'
{
	int  i , j;
	for(i = 0 ; a[i] != '\0' ; i++)  //  outer  loop  controls   lines
	{
		for(j = 0 ; j <= i ; j++) //  inner  loop  controls   characters
				putchar(a[j]); //    prints  a[j]  where  j  varies  from  0 to  i
		putchar('\n'); // Moves  to  next   line
	}
}
//               0     1   2     3   4
// a   ---->   R    A   M    A   \0
/*
    i            j
  ------------------
    0          0
    1          0  to  1
    2          0  to  2
    3          0  to  3
*/
main()
{
	char  b[40]; //  Array  is  created
	printf("Enter  any  string  :  ");
	gets(b);  //  Reads  string  into  array  'b'
	disp(b); // Function  prints   results
}
