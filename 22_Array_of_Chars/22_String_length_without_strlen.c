// Find string length without using strlen
// Using subscripts
#include <stdio.h>
int  length(char   *a)  //  a   points  to  string  or  1st  char  of  the  string
{
		int  i = 0;  // starting  subscript
		while(a[i]  !=  '\0') //  Keep   incrementing  'i'  until  '\0'  is  reached
				i++; //  Go to  next  character
		return   i;  //  subscript  of  '\0'  is  string  length
}
//  length("RAMA")  --->  4
/*
                  0       1      2       3     4
a   ----->     R       A      M      A     \0

1) a[i]  is  each  character  of   the  string

2) 'i'  is  subscript  of  each  character

3) a[i]  leads  to  error  when  'i'  is   float   becoz  subscript  can not  be  float

4) while(a[i] != '\0')
          is  same  as
    while(a[i])  --->  !=   '\0'    is    optional  in  the  condition

5)  while('R')  ---->  True   becoz  'R'  has  non-zero  Ascii  value
     while('A')  ---->  True   becoz  'A'  has  non-zero  Ascii  value
     while('M')  ---->  True   becoz  'M'  has  non-zero  Ascii  value
     while('A')  ---->  True   becoz  'A'  has  non-zero  Ascii  value
     while('\0')  ---->  False   becoz   Ascii  value  of  '\0'  is  0(False)
*/

main()
{
	char  a[40]; // Array  is  created
	printf("Enter any string : ");
	gets(a); // Reads  a  string  into  array   'a'
	printf("String  Length  :  %d \n" , length(a)); // Function  returns  length  of  the  string  in   array   'a'
}


/*
1)  If  input  is  9247 , gets  reads   "9247"  into  array  'a'

2) If  input  is  enter  key,  gets  reads  ""   into  array   a  and length  is  0
*/
