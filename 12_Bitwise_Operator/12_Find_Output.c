//Find  outputs 
#include  <stdio.h>
main()
{
        int  x = printf("Hello %d" , printf("Hyd"));
        printf("%d\n" , x);
}

/*
1) Inner  printf   prints   "Hyd"  and  returns   length  of  "Hyd"   i.e. 3

2) Outer  printf  becomes   
    int   x = printf("Hello  %d" , 3);  ---->  It    displays  Hello  3  and  returns  7  i.e. length  of  "Hello  3"

3)  Finally  int  x = 7

4)  printf("%d" , x);--->7

5)  In  general,  printf  prints   a    string  and  returns  length  of  the  string

6)  Hence  Return  type  of  printf  is  int  but  not  void
*/
