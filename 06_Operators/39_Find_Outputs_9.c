// Find output
#include <stdio.h>
main()
{
	printf("%c \n" , 'A'); // 'A'  in  the  form of  character ---> A
    printf("%d \n" , 'A');   // 'A'  in  the  form of  integer --->  65 (Ascii value)
    printf("%c \n" , '7'); // '7'  in  the  form of  character ---> 7
    printf("%d \n" , '7'); // '7'  in  the  form of  integer  --->  55(Ascii)
    printf("%d \n" , 7);  //  7  in  the  form of  integer ---> 7
    printf("%c \n" , '$'); // '$'  in  the  form of  character ---> $
    printf("%d \n" , '$'); // '$'  in  the  form of  integer  --->  36 (Ascii)
}


/*
1) We can use  %c  or  %d  for character

2) Character itself is printed when %c  is  used and 
    Ascii value is printed when %d is used

3) Finding  ASCII value is  simple and is determined as  follows :
     printf("%d" , ',');   ---> ASCII value of  ','
     printf("%d" , '@');   ---> ASCII value of  '@'
     printf("%d" , '\n');   ---> ASCII value of  '\n'

4) printf("%d" , 'Any character') ;  ----> Ascii  value  of the character
*/
