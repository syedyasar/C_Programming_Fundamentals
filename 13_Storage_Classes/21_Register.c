// register variable demo program
#include <stdio.h>
//register  int  a  = 10; // Error  becoz   there  is  no   global   register
main()
{
	register  int  b;  // 'b'  is   register  variable
	int  c; // 'c'  is  memory  variable
	//scanf("%d" , &b); // Error   becoz  scanf  can  not   read  input  to  register  variable  becoz  it  has  no   address
	printf("Enter any input : ");
	scanf("%d" , &c); // Okay   becoz  scanf  can  read  input  to  memory  variable  becoz  it  has  address
	printf("b : %d \n" , b); // Garbage  value
	printf("c : %d \n" , c); // user  input
}	



/*
1) Register  is  a  part  of  processor  but  not  memory

2) Hence  register  access  is  fast  becoz  it  is  a  part  of  processor.

3) Memory  access  is  also  fast  but  not  as  fast  as  register

4) Program  execution  becomes  fast  when  most  frequently  accessed  data  is  represented  in  the  register

5) Register  variable  must  be  declared  inside  the  function(like  auto  variable).  

6) There  is  no  global  register  and   register  contains  garbage  value  when  it  is  not  initialized

7) register  int  a = 1000000; --->   Let  size of  register  be  2B  but  int  is  4B.  So  2  registers  are  required  to   hold 
                                                        value of  variable 'a'

8) Memory  variable  has  address  but  not  register  variable

9) &memoryvariable   is  ok  but  not  &registervariable

10) scanf  can  read  input  to  memory  variable  but  not  to  register  variable   becoz  scanf  demands   address

11) Registers  are  expensive  while  memory  is  cheap. 

12) Every  computer  contains  only  few  registers.  If  there  are  5  registers  in  the  computer  but  7  
      variables    are  declared  as  register  variables,  excess    variables  are  automatically  treated  as 
	  memory  variables
	  register  int  a , b , c , d , e , f , g;  ---->   Variables  a , b , c , d  and  e  are  register  variables  and	variables  f  and  g
	  are  memory  variables   becoz   all  the  registers  are  exhausted

13) register  int  i;
      for(i = 1 ; i <= 10 ; i++)
      {
	  }
	  Variable  'i'  is  accessed  frequenly  by  for  loop.
	  Hence  'i'  is  declared  as  register  variable  and   for  loop  execution  becomes  fast. 
	  In  general,  declare  that  variable  as  register  which  is  accessed  more 	frequently

14)  int  a;   ----> Memory  Variable
       register  int  b;  ----> register variable
	   scanf("%d" , &a); --> reads  input  to  memory  variable  a
	   b = a; ---> Input   is   copied   from  memory  variable  'a'  to  register   variable  'b'. 	
	                   This  is  called   indirect  transfer
*/	
