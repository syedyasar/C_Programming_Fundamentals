// character    demo  program
#include  <stdio.h>
main()
{
	char    a  =    'A'; // alphabet char
	printf("a  :  %c  \n"  ,  a);  //  a : A
	char    b  =  '7'; // digit  char
	printf("b  :  %c  \n"  ,  b); // b : 7
	char    c  = '$'; // special  char
	printf("c  :  %c  \n"  ,  c); // c : $
	char    d  = 'a'; // alphabet char
	printf("d  :  %c  \n"  ,  d); // d : a
	//char    e  =  'Hyd'; // Error  becoz  more than one char is not allowed in single quotes
	//char    f  =  '23';   // Error  becoz  more than one char is not allowed in single quotes
	//char    g  =  "A";  // Error  due to mismatch
	printf("%d \n" , 4 + 5); //  9
	printf("%d \n" , '4' + '5'); //  52 + 53 = 105
	printf("%d \n" , 'A' >  'B'); // 65 > 66 = false = 0
}

/*
Character
-----------------
1) It  is  a  single  character  enclosed  in  single  quotes.

2) It  can  be  alphabet, digit  or  special  character

3) There  can  not  be  more  than  one  character  in  single  quotes
    Eg:
    a)  'A'  ----> Alphabet  character
    b)  '7'  ----> Digit  character
    c) '$'  ----> Special  character
    d)  'a'  ----> aplhabet  character

4) Characters  are  internally  represented  by  integers
     i.e.  Ascii  values(American  standard    code  for  information  and  interchange)

5) There  are  256  Ascii  values  and   range  is  0  to  255.
	 'A'  to  'Z'  --->  65  to  90
	 'a'  to  'z'  --->  97  to  122
	 '0'  to  '9'  --->  48  to  57
	 '$'  --->  36
	 ' '   --->  32
	 '\0'  ---> 0

6)  In  general,  any  operation  on  character  is  internally  made  on  corresponding  Ascii  value

7) Format  %c  is  used  for  character
*/
