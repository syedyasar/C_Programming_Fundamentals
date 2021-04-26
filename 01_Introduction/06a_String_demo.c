
// Accessing  characters of the string
#include <stdio.h>
main()
{
	printf("%c \n" , "Hyd"[0]);  //  H
	printf("%c \n" , "Hyd"[1]);  // y
	printf("%c \n" , "Hyd"[2]);  //  d
	printf("%c \n" , "Hyd"[3]); //  Nothing  becoz  '\0'  is  a  non-printable character
	printf("%d \n" , "Hyd"[3]); //  0  becoz  Ascii value  of  '\0'  is  0
}


/*
1)  In  general,    string[i]  is  ith  character  of  the  string  

2) "INDIA"[0]  is  'I'
    "INDIA"[1]  is  'N'
    "INDIA"[2]  is  'D'
    "INDIA"[3]  is  'I'
    "INDIA"[4]  is  'A'
    "INDIA"[5]  is  '\0'
    
    
String
----------
1) It  is  a  collection  of  characters  terminated  by  '\0'  where    '\0'  is  null  character

2) '\0'  means  end  of  the  string.

3) String  may  contain  alphabets, digits  and  special  characters  .
    Therefore  String  is  also  known  as    alphanumeric.

4) String  must  be  enclosed  in  double  quotes

5) It  is  system  which  appends  '\0'  at  the  end  of  the  string  (but  not  programmer)

6) "Hyd"  contains  4  characters  and  4th  character  is  '\0'.

7) String  is  processed  until  '\0'

8) Characters  beyond  '\0'  are  not  processed
     i.e.  processing  stops  when  '\0'  is  reached.

9) Empty  string ( "" )   contains  single  character  i.e.  '\0'
    Eg:
    a)  "Rama  Rao"
    b)  "9247"
    c)  "+-$"
    d)  "A2#"
    e)  ""  (Empty  string)
	
*/

