// ~  operator  demo  program
#include <stdio.h>
main()
{
	int a = 25;
	printf("~25 :  %d\n", ~a); //  -(25 + 1) ---> -26
	a =  -25;
	printf("~-25 :  %d\n", ~a); // + (25 -1)  ---> 24
}
	
/*
~  operator(Bitwise  complement)
--------------------------------------------------------
1)  ~0  =  1                 !true = false
     ~1  =  0                 !false=true

2) ~  operator  does  bitwise  complement.

3) Each  bit  of  the  number  is  complemented.

4) It  is  a  unary  operator  and  hence   it  has  only  one  operand.
	
5)   Eg 1 :     	  128    64    32   16     8     4     2     1  ---> weights
      a = 25   =      0        0      0     1      1      0     0     1
      ~a         =      1        1      1     0      0      1     1     0    =   -26

6) Negative  numbers  are  represented  in  2's  compement  form  in   the  computer
    2's  complement = 1's  complement + 1
6)											 128    64    32   16     8     4     2     1
									 26  =   0       0      0     1      1     0     1     0

	   1's   complement  of   26  =   1       1      1     0      0     1     0     1
	    1's  complemnt + 1 =                                                                 1
	------------------------------------------------------------------------------------------------------------
	   2's   complement  of   26  =   1      1       1      0     0     1    1      0 

7)  Eg 2 :  a = -25     
								   			       128  64    32   16     8     4      2     1
								  +25   ---->    0     0      0     1      1      0     0     1  
	 1's  complement  of   25   =   1      1      1     0      0      1     1     0
	 1's  complement + 1 =                                                                1
	 --------------------------------------------------------------------------------------------------------
	 2's   complement  of   -25 =   1       1      1    0      0      1     1     1
	                                     ~a  =   0        0      0    1     1      0      0     0   ---> 24

8)  ~x  =  -(x+1)   when  x  is  +ve
           =  +(x-1)  when x  is  -ve
*/
