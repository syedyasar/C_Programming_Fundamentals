// Reverse a  string without using strrev
// using  subscripts
#include <string.h>  //  strlen   function
#include <stdio.h>
void  reverse(char  *a) //  'a'  points to  actual  parameter  array
{
	char  temp;
	int i =  0; // subscript  of  1st  character  in  the  string
	int j = strlen(a) - 1;  // subscript  of  last   character  in  the  string
	while(i < j) //  Keep  swaping  until  i > j
	{
		temp = a[i]; // swap  characters  a[i]  and  a[j]
		a[i] = a[j];
		a[j] = temp;
        i++; // moves  to  next  character
		j--; // moves  to  preceding  character
	}
}



/*
Number of swaps :  string length / 2
Stop swapping when  i  >  j for   even number of characters
Stop swapping when   i = j  for  odd number of characters
*/

main()
{
	char  a[40];   //  Array  is   created
	printf("Enter any string : ");
	gets(a); //  Reads  a   string  into  array   'a'
	reverse(a); // reverses   string  in   array  'a'
	printf("Reverse  string : %s \n" , a);  // string  in   array   'a'
}

//  If  input  is   number(i.e.  9247) ,  gets  reads  number  into  array  in the  form  of  string  i.e. "9247"