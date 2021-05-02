//  short  int  demo  program
#include <stdio.h>
#include <limits.h>
main()
{
	short   s   =  25; //  's'  is  variable  of  type  short  
	printf("s : %hd \n" , s);  //  s  :  25  
	printf("%d \n" , sizeof(s)); //  2 bytes 
	printf("%hd \n" , SHRT_MAX); // 32767
	printf("%hd \n" , SHRT_MIN); // -32768
	s = 32768;  //  max value + 1 means min value
    printf("%hd \n", s); // -32768
	s = 32769; //  max value + 2 means min value + 1
    printf("%hd \n", s);  // -32768 + 1 = 32767
	s = 32770; //  max value + 3 means min value + 2
    printf("%hd \n", s);  //  -32768 + 2 = -32766
	s = -32769; // min value - 1  means  max  value 
	printf("%hd \n", s);  //  32767
	s = -32770; // min value  -   2  means max value -  1
	printf("%hd \n", s); //  32767 - 1 = 32766
	s = -32771; // min value  -   3  means max value - 2
	printf("%hd \n", s); //  32767 - 2 = 32765
}

/*
short
---------
1) It  takes  2B  of  memory  space    i.e.  16  bits.
    Eg :  1010  0101  1110  0111

2) First  bit  is  sign  bit  and    remaining  15  bits  are  magnitude  bits.

3) Sign  bit  is  0    ---->    +ve  magnitude   and 
    Sign  bit  is  1   ---->   -ve  magnitude.
     Eg :  1010    0101    1110  0110   ---> It  is  -ve  becoz 1st bit  is  1
             0010    0101    1110  0110    ---> It  is  +ve  becoz 1st bit  is  0

4)  Maximum  value  of   short   integer   is  2 ^ 15 - 1 = 32767
     Minimum   value  of    short  integer   is  -2 ^ 15 = -32768

5) SHRT_MAX   and  SHRT_MIN   are   maximum  and  minumum  values  of  short  integer  and
    they   are  predefined  macros  in  <limits.h>  file

6)  short    x;  ---->    variable  x  can  hold  any  value  between  -32768    and  32767

7) Format  is  %hd  for  short

8) When we try to  store value beyond maximum, value from minimum is represented
     Similarly,  When we try to store value beyond minimum , value from maximum  is represented
*/



