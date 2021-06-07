//  fflush  demo  program
#include  <stdio.h>
main()
{
	int   a;
	char  b[20];
	printf("Enter any  number :  ");
	scanf("%d" , &a); //  25
	printf("Enter any string : ");
	fflush(stdin);  // Removes  "\n"   from  buffer
	gets(b);
	printf("\na : %d \n" , a);
	printf("b : %s \n" , b);

}



/*
fflush()   function
------------------------------
1) syntax:    fflush(stdin);

2)  It  removes  "\n"  from  buffer

3)  It  is  defined  in  <stdio.h>   file

4)  stdin  is    standard  input    i.e.  keyboard

5) If  inputs  are  number    and  string,  fflush  function  removes  "\n"  between  number    and  string
    Inputs  :  25  <enter  key>
                    Hyd
    scanf  function   reads  25  to  variable   'a' ,  fflush  function   removes  "\n"  between  25  and  "Hyd"   and
    gets()  reads  "Hyd"  to  array  'b'

6) If  fflush  is  not  used,  gets()  reads  "\n"  to  array  'b'  but  not  "Hyd"
*/
