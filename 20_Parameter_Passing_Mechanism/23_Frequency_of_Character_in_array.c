/*
Frequency of each alphabet in the string
Input : RamA raO (mixed case string)
outputs :  
A - 3
M - 1
O - 1
R - 2 

'R' - 'A' = 82 - 65 = 17
'A' - 'A' = 0
'M' - 'A' = 77 - 65 = 12
'A' - 'A' = 0
Nothing  is  incremented  for   space
'R' - 'A' = 17
'A' - 'A' = 0
'O' - 'A' = 79 - 65 = 14

Array  s   ---->   R   a   m    A    <space>   r   a   O   \0


						0     1     2           12   13    14   15   16   17        25
array   a   --->  3     0     0   ......   1     0      1     0     0    2  ....   0
                        A     B     C           M    N      O     P    Q     R           Z


main()  --> Reads a string , calls  frequency  function  and display results
frequency()  ---> creates  an   array of size 26, stores results in array and returns array
*/


// Frequency  of  characters  in  array
#include<stdio.h>
#include<ctype.h>
int*  frequency(char*); // Function  prototype
main()
{
	int  i;
	char  s[40]; 
	printf("Enter  any  mixed  case   string :  ");
	gets(s);   //  Reads   string  into   array   's'
	int*   b = frequency(s);  //  'b'   points   to   array   'a'  of   frequency  function
	for(i = 0 ; i <= 25 ; i++) // Printing  array   'a'   thru  pointer  'b'
	{
		if (b[i] != 0) // Printing  non-zeroes  of   array   'a'
  			printf("%c   :   %d \n" , i + 65 , b[i]);  //  i + 65  is  alphabet  and  b[i]  is  frequency
	}

}

/*
a[0]  ---> Number  of   A's  ----> 0 + 1 + 1 + 1 = 3
a[1]  ---> Number  of  B's  ----> 0
a[2]  ---> Number  of  C's ----> 0
....
a[12]  ----> Number  of M's  ---> 0 + 1 = 1
a[13]  ----> Number  of N's  ---> 0
a[14]  ----> Number  of O's  ---> 0 + 1 = 1
a[15]  ----> Number  of P's  ---> 0
a[16]  ----> Number  of Q's  ---> 0
a[17]  ----> Number  of R's  --->  0 + 1 + 1 = 2
....
a[25]  ----> Number of  Z's  ----> 0
A  -   65
M -  77
O  -  79
R  -  82
*/																													  
int*   frequency(char*  x) // x  points  to  main  function  array   's'
{
    int i;
	static  int  a[26]; // Array  can  hold  26  results
	for(i = 0 ; x[i] != '\0' ; i++)  //  Each  char  of  the  string  is  processed  until  '\0'
	{
			if (isalpha(x[i]))  //  Process  only  alphabets  but  not  digits  and  special  chars
					  a[toupper(x[i]) - 'A']++; // Appropriate  counter  is  incremented  based on  alphabet
	}
	return  a; //  Array  is   returned 
} //  Array   'a'  is  not  lost  becoz   it  is  a  static  array



/*
1)  a[0]   is   incrmented  when  x[i]  is   'A'  or  'a'  ,
     a[1]   is   incrmented  when  x[i]  is   'B'  or  'b'  ,
     a[2]   is   incrmented  when  x[i]  is   'C'  or  'c'  ,
	 .......
	 a[25]   is   incrmented  when  x[i]  is   'Z'  or  'z'  ,

2) x[i]  in  frequency  function  internally  access  s[i]

3) similarly  b[i]  in  main  function  internally  access  a[i]
*/
