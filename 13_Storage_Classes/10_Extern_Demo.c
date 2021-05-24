// extern  demo  program
#include <stdio.h>
void  f1() , f2() , f3(); // global  prototypes
int   a; // It  is  global  to  all  the  functions  of  the  program
main()
{
	extern   int   b; // treats  'b'  as  global  to   main  function  as  well	
    f1();
    f2();
    f3();
	printf("Inside main  : %d\n" ,  b);  //  22
}

void f1()
{
	extern   int   b;
	printf("Inside f1  : %d\n" , b); //  Error   becoz  f1   can  not  use  Gv  'b'   as  it  is  preceding  function
}

int  b = 20; // It  is   global   to  f2  , f3  and  main 

void f2()
{
    printf("Inside f2  : %d\n" ,  b); //  20
	b++; //  21
}
void f3()
{
    printf("Inside f3  : %d\n" , b); // 21
	b++;  //  22
}


/*
1) A  variable  is  global  from  the  point  of  declaration  till  end  of  the  program

2) Gv  can  be  declared  at  the  begining , middle  or  end  of  the  program

3) Variable  'b'  can  be  used  by  following  functions  f2  and  f3  but  not  by  preceding  functions  
    main  and  f1

4)  variable  'a'  can  be  used  by  all  the  4  functions

5)  extern  allows  us  to  use  Gv  'b'  in  the  preceding  functions

6)  'b'  is  global  to  f2(), f3()  and  main()  in  the  above  program

7) If  extern  is  omitted  from  extern  int  b,   a   new  local  variable   is  created  which   is   different  from 
    Gv  'b'

8) extern  is  used   to  avoid  creation  of  a  new  variable
    
9)  extern  allowes  us  to  use  existing  Gv elsewhere
*/
