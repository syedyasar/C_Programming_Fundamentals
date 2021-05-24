#include  "20b_Extern_b.c"  //  f3   function  is  substituted
main()
{
	extern  int  a; //  okay  becoz  extern  can  be  used  for  Gv
	//extern  int  b;  //  Error  becoz  extern can  not  be  used  GSV 
}
int  a = 10;    // GV
static  int  b = 20;  // GSV  
void  f1()
{
	static  int  c = 30;  // LSV
}
void  f2()
{
}



/*
1)  Sv  can  be  declared  inside  or   outside  the  function

2)  If  sv  is  declared  inside  the  function,  it  is  LSV(local    static  variable)

3)  If  sv  is  declared  outside  the  function,  it  is  GSV  (global  static  variable)

4)  extern  can  be  used  only  for  Gv's   but  not  to  Gsv's

5)  variable  a  is  global  to  f1 , f2,  main  and  f3

6)  variable  b  is  global  to  f1   and  f2   but    not  to   main  and   f3  becoz   main   is   a  preceding function
     and  f3  is  in  a   different  file

7)  GV  can be used by  preceding functions and other files with  extern  keyword.

8) But  GSV  can  not   be used by  preceding functions and other  files  with  extern   keyword
     
*/
