// Accessing  characters of the string
#include <stdio.h>
main()
{
	char a[] = "Hyd";
	printf("a[0] : %c \n" , a[0]); //  Character  at  subscript   0    --->   H
	printf("a[1] : %c \n" , a[1]);  //  Character  at  subscript   1    --->  y
	printf("a[2] : %c \n" , a[2]);  //  Character  at  subscript   2    --->   d
	printf("a[3] : %c \n" , a[3]);  //  Character  at  subscript   3    --->   \0   but  it  is  non-printable  char  --->  Nothing
	printf("a[3] : %d \n" , a[3]);  //  Ascii  value  of  '\0'  is  0
	printf("\n");
	printf("*a      : %c \n" , *a); //  Character  at   address   'a'   --->   H
	printf("*(a + 1)  : %c \n" , *(a + 1));  //  Character  at   address  a +  1  --->   y
	printf("*(a + 2)  : %c \n" , *(a + 2));  //  Character  at   address   a + 2   --->   d
	printf("*(a + 3)  : %c \n" , *(a + 3));   //  Character  at   address   a + 3 ---> \0   and  it  is  non-printable
	printf("\n");
	printf("*a + 1  : %c \n" , *a + 1);  //  (Character  at   address  a) +  1  --->   'H' + 1 = 'I'
	printf("*a + 2  : %c \n" , *a + 2);   //  (Character  at   address  a) +  2  --->   'H' + 2 = 'J'
	printf("*a + 3  : %c \n" , *a + 3);   //   //  (Character  at   address  a) +  3  --->   'H' + 3 = 'K'

}


/*
1)          a      a+1    a+2    a+3   --->  Addresses  of  characters
             H        y       d         \0
             0        1       2          3   ----> Subscripts  of   characters

2) Characters  of  the  string  can be accessed   in  2  ways
	a)  a[i]   --->  character  at  subscript   'i'

    b) *(a + i)  ---> character  at   address   a + i
*/