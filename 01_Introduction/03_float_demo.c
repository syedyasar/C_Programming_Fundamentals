// float    demo  program
#include  <stdio.h>
main()
{
	float   a  =  10.8;
	printf("a  :  %g  \n"  ,  a);  //  a : 10.8 <next line>
	float    b  = 10.8e3;
	printf("b  :  %g  \n" , b); // b : 10.8 * 1000  =  10800 <next line>
	float    c  = 123.0274e-3;
	printf("c  :  %g    \n" , c); // c :  123.0274 / 1000 = 0.1230274 <next line>
	//float    d  =  9.8.2;   //  Error  becoz  there  can not be more than one decimal point
	float   e = 75.; //  valid  and   is interpreted as 75.0
	printf("e :  %g  \n" , e); //  e :  75
	float   f  = .9274;  //  valid  and  is  interpreted as  0.9274
	printf("f : %g \n" , f);  //  f : 0.9274
}



/*
Float
---------
1)  It  is  a  number  with  decimal  point.

2)  There  can  not  be  more  than  one  decimal  point
      Eg  :
	  a)  10.85
      b)  -6.9247
      c)   0.0

3) float  number  can  be  represented  in  2  ways
    a)  Fractional  form
         Eg :  123.456  is  a  fractional  number

	b)  Mantissa-Exponent  form
         Eg  1 :  9.62e3  --->  9.62*1000  =  9620
	       	          where  9.62  is  mantissa,  3  is  exponent
         Eg  2 :  9.62e-3  --->  9.62  *  1/1000  =  0.00962

4)  %f  or   %g   format  is  used  for  float
*/
