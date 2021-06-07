/*
Display each digit of the number in words
Input : 9247
Output : Nine Two Four Seven
Array   a   ---->  9   2    4    7   \0
                         0   1    2    3   4

Array  b   ---> "Zero"   "One"   "Two"   .......  "Nine"
                          0          1          2                      9

'0' - '0' =48 - 48 = 0   --->  conversion  of   '0'   to    0
'1' - '0' = 49 - 48 = 1  --->  conversion  of   '1'   to    1
'2' - '0' = 50 - 48 = 2  --->  conversion  of   '2'   to    2
.......
'9' - '0' = 57 - 48 = 9  --->  conversion  of   '9'   to    9

Subtract   '0'   to convert character to integer

main()  ---> read  number in  the  form  of  string  and call  words()
words()   ---> print  each  digit  of  the  number  in  words
*/

#include <stdio.h>
#include <string.h>

char*   words(char*   a)  //   a   points  to   "9247"
{
	int i;
	static  char  b[100];  //  Array   is  created  to  store   the  result
	strcpy(b , "");  //  Array  'b'   is  initialized  with  empty  string
	char*   c[] = {"Zero" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine"};  //  Array  of  10  strings
	for(i =  0 ; a[i] != '\0' ; i++)  //  i  = 4
	{
			strcat(b ,  c[ a[i]  -   '0']);  //   c['9']  is  c[57]   ---->  garbage
			strcat(b , " "); // Array   b   contains  "Nine  Two Four  Seven "
	}
	return  b;
} //  Array  'b'  is  not  lost   becoz  it  is  a  static   array

/*
c[4]  is  "Four"
c['4']  is   c[52]  is   garbage  becoz   52  is   invalid  subscript
*/



main()
{
	char   a[10];  //   Array  is  created
	printf("Enter any number : ");
	scanf("%s"  ,  a); // Reads  number  into   array   'a'  in the  form  of  string
	char  *d  =  words(a); // 'd'   points  to   array  'b'   returned  by   the  function
	printf("%s\n" , d);  //  Array  'b'   is  printed   thru   pointer  'd'
}


/*
To perform digit wise processing , input is read like a string
char a[] = "9247";  ---> digit wise processing is simple
int  n = 9247;  ---> digit wise processing is difficult


"9247"[0] is '9'
"9247"[1] is '2'
"9247"[2] is '4'
"9247"[3] is '7'
"9247"[4] is '\0'
------------------------
9247[0] is error
9247[1] is error
9247[2] is error

*/
