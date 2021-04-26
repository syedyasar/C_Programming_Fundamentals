//  Find  output
#include  <stdio.h>
main()
{
	char    a[5]; // 'a'  is  an  array  which  can hold 5 characters
	a[0] = 'A';  
	a[1] = 'B';  
	a[2] = '\0';
	a[3] = 'C';
	a[4] = 'D';
	printf("%s\n" , a); // String  in  array  'a'  is  printed   ---> AB
}

/*
1)  [  ]  means  array  

2) %s  means  string

3) printing  stops  when '\0'  is  reached and characters  beyond  '\0'  are  not  printed




1)  'A'  and   "A"  are  not  same

2)  "A"  contains  2  characters  i.e.  'A'  and  '\0'
     'A'  is  single  character

3) Ascii  values  are  defined  only  for  characters  but  not  for  strings
    Ascii  value   of   'A'    is  65
    "A"  has  no  Ascii  value becoz  it  is  a  string

4) "Hyd"  has  no  Asciii but  each  character of the string has Ascii  value

5)  "7"    ---->  string
      '7'   ---->  character
       7  ---->  integer
     "23"  ---->  string
      23  ---->  integer
     '23'  ---->  invalid
    "10.8"  ---->  string
      10.8  ---->  float
     '10.8'  ---->  invalid

6) There  can  be  more  than  one  character  in  double  quotes  but  not  in  single  quotes

*/	

