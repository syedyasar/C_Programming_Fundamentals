// Same  program  in    a  different  manner
#include<stdio.h>
int  main()
{
        int  i;
        float    f;
        char  ch;
        printf("%d  \n" , sizeof(i));  //  4B  becoz  'i'  is  int  variable
        printf("%d  \n" , sizeof(f)); //  4B  becoz  'f'  is  float  variable 
        printf("%d  \n" , sizeof(ch)); //  1b  becoz ch  is  char  variable
}

/*
int  x  =  25;
sizeof(int) , sizeof(x) and sizeof(25) are same
i.e.  datatype , variable  or  value parameter is  okay
*/
