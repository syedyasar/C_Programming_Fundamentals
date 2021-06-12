// Concatenate  n  strings
#include  <stdio.h>
#include  <string.h>
#include  <stdarg.h>
char*  concat(int  n , ...) // n  is  number  of  strings
{
	int  i;
	static  char  a[100]; //  Array   is  created  for  the  1st  function  call  and  same  array is  used  by  remaining  calls
	va_list  p; // Variable  'p'  is  created
	va_start(p , n); // 'p'  points  to  1st  parameter in the 1st  function call
	strcpy(a , ""); // Array  is  reinitialized with  empty  string
	for(i = 1 ; i <= n ; i++) // Loop  is  executed  'n'  times
	{
		strcat(a , va_arg(p , char*)); // Each  string  in  the  function  call  is  concatenated  to  array 'a' along  with  space
		strcat(a , " ");
	}
	return  a;  // Address  of  array  'a'
} // Array   'a'  is  not  lost  becoz  it  is  a  static  array


// returning address of array is as good as returning array

main()
{
	char  *s = concat(3 , "Sankar" , "Dayal" , "Sarma"); // 's'  points  to  array  'a'  of  concat   function
	printf("%s\n" , s); // Array  'a'  is  printed thru  pointer 's'  ---> Sankar  Dayal   Sarma
	s = concat(4 , "Hyd" , "is" , "green" , "city");
	printf("%s\n" , s); // Hyd  is  green  city
	s = concat(5 , "C" , "is" ,  "a" , "great" , "lang");
	printf("%s\n" , s); // C  is   a   great  lang
}

/*
1) strcat()  ---> It  is  a  function with fixed number of parameters  --->  strcat(param1 , param2);

2) concat()  ---> It  is  a  function with  variable  number of parameters
*/