// Local  variables and global variables demo program
#include <stdio.h>
int  a = 10 , b=10; // value of  'b'  is  0
void  f1();
main()
{
	auto  int  c = 20; 
	int  d = 30;
	int  a = 40;
	int  e; // value  of  'e'  is  garbage
	printf("a : %d \n" , a); //  LV  is  printed  ----> 40
	printf("b : %d \n" , b); //  Gv  is  printed becoz  there is  no  LV  'b'  ---> 0
	printf("c : %d \n" , c); //  Lv is  printed  --> 20
	printf("d : %d \n" , d);  //  Lv is  printed  --> 30
	printf("e : %d \n" , e); //  Lv is  printed  --> garbage value
	f1();
}  // LV's   c , d , a , e   are  lost  and  Gv's  a  and  b  are  also  lost
void  f1()
{
	auto  int   f = 50; 
	int  c = 60;
	int  b = 70;
	printf("a : %d \n" , a);  //  Gv  is  printed becoz  there is  no  LV  'a'  ---> 10
	printf("b : %d \n" , b); // Lv  -  70
	printf("c : %d \n" , c); //  Lv - 60
	//printf("d : %d \n" , d); //  Error  becoz  there  is  no  variable  'd'
	printf("f : %d \n" , f); // Lv -  50
}  //  f , c  and  b  are  lost

/*
1) c , d , a , e  are  local  variables  of  main  function  and  they  can  not  be  used  by  f1  function.

2) f , c , b  are  local  variables  of  f1  function    and  they  can  not  be  used  by  main  function

3) Local  variable  of  a  function  can  not  be  used  by  a  different  function

4) Global  variables  can  be  used  by  all  the  functions  of  the  same  program	
*/
