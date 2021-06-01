// Find  outputs
#include    <stdio.h>
main()
{
	char*    a  =  "Hyd";  //  'a'  points  to  string  or   1st  char   of  the  string
	printf("%s\n" , a); //  That  string  where   'a'   points   --->  Hyd
	printf("%u\n" , a);  // Address  in   pointer  'a'  --->  may  be   1000
	printf("%d\n" , sizeof(a)); //  size  of   pointer  'a'   --->  8B
	printf("%c\n" , *a);  //  char  at   address   'a'   --->  H
	printf("%c\n" , a[2]);  // char  at  subscript  2   --->  d
}


/*
1)  "Hyd"  is  represented  some  where  in  memory and address  of  first  character  is  assigned  to  pointer  'a'.

2)  So,   'a'  points  to  String  or  first  character  of  string.

3) Type  of  "Hyd"  is  char*  and  hence  type  of  'a'  is  also  char*

												         a    a+1   a+2   a+3
4)  Pointer   a    points  to   ----->    H      y     d        \0
	   												      0      1     2         3

5)  String  initialization  can   be   made   in   3   ways
     a)  char  a[] = "Rama Rao"
	 b)  char  a[] = {'R' , 'a' ,'m' ,'a', ' ', 'R' , 'a' , 'o' ,'\0'}
	 c)  char*   a  =  "Rama  Rao";
*/
