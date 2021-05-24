//  Global  variable  demo  program
#include <stdio.h>
void  f1();  //  function  prototype
int  a; // value  of  'a'  is  0  by  default
main()
{
    printf("%d\n" , a);  //  Gv  is  printed  becoz  there is  no  LV  ----> 0
    a++; // Gv  is  incremented  and  value  of  'a'  is  1
    f1();
    printf("%d\n" , a); //  Gv  is  printed  becoz  there is  no  LV  ----> 2
}  // Gv  is  lost
void f1()
{
    printf("%d\n" , a);  //  Gv  is  printed  becoz  there is  no  LV  ----> 1
    a++; // Gv  is  incremented  and  value  of  'a'  is  2
} // nothing  is  lost


/*
Advantages  of  Global  Variable
------------------------------------------------------
1) It  can  be  used  by  multiple  functions
    i.e.  It  can  be  shared  between  functions
    LV  can  be  used  by  single  function  only  and  it  can  not  be  shared  between  functions

2) GV  is  not  lost  until  program   terminates 
     i.e.  It  is  alive  as  long  as    program  is  under  execution
     where  as  Lv  is  lost  during  program execution

Disadvantage   of  Global  variable
---------------------------------------------------------
Any  accidental  changes  made  to  Global  variable  by  a  function  are  visible  to  other  functions.
So,  There  is  a  possibility  of  getting  wrong  outputs
							Hence   Stop  using  Global  variables  i.e.    Don't  use  Global  variables  in  large  programs.
Always  prefer    Local variables 
*/

