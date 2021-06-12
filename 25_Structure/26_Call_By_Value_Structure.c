// call - by - value  demo  program
#include <stdio.h>
struct  date_tag
{
	int  dd , mm , yy;
};
typedef  struct   date_tag  date;

void  f1(date  b)
{
		b . dd++;
		b . mm++;
		b . yy++;
		printf("b :  %d  -  %d  -  %d  \n" , b . dd , b . mm , b . yy); // 16 - 9 - 1948
}

main()
{
	date  a = {15 , 8 , 1947};
	f1(a); // contents  of  structure  'a'   are  copied to  'b'
	printf("a :  %d  -  %d  -  %d  \n" , a . dd , a . mm , a . yy); // 15 - 8 - 1947
}




/*
Parameter   passing  mechanisms
--------------------------------------------------------
Structure  supports  both  Call-by-value  and  Call-by-address

Call-By-Value (CBV)
---------------------------------
1) Sending  values  of  structure  to  the  function  is  known  as  CBV

2) f1(a);  ---->  f1  function  is  called  by  sending  values  of  structure  'a'
                       i.e.  15,8,1947   are  sent  to   f1  function

3) Those  values  are  copied  to  formal  parameter  structure  'b'
     i.e. date  b  = a

4) f1  function  modifies  b . dd , b . mm   and   b . yy

5) But  changes  made  to  structure  'b'  are  not  reflected  to  actual  parameter  structure  'a'

6) Structure  'a'  remains  unchanged  even  after  execution  of  f1  function

7) Thus  f1  function  can  not  modify  contents  of  structure  'a'
*/