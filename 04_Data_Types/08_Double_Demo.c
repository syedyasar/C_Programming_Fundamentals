// double  demo  program
#include <stdio.h>
#include <float.h>
main()
{
	double  a = 10.8; // 'a'  is  variable of  type  double
	printf("a :  %lg \n" , a);  // a : 10.8
	printf("%d \n" , sizeof(a)); //  8  bytes
	printf("%lg \n" , DBL_MAX); // maximum value of double ---> 1.79 * 10 ^ 308
	printf("%lg \n" , DBL_MIN);// minimum  value of double ---> 2.22 * 10 ^ -308
}


/*
float  &  double
--------------------------
1) float  takes  4B  of  memory  space and  double  takes  8B

2)  They  are  distinguished  by    f  or  F
    10.6f  is  float  and    10.6  is  double.

3) double  is  also  known  as  long  float

4) double    is  an  extension  to  float

5)  FLT_MAX   and  FLT_MIN  are  maximum   and  minimum  values  of  float

6)  DBL_MAX   and  DBL_MIN  are  maximum   and  minimum  values  of  double

7) They  are  predefined  macros  in  <float.h>  file

Data  Type              Size                        Format                          Value
------------------------------------------------------------------------------------------------------------------
   float                      4B                        %f  or %g                       10.6f
   double                   8B                        %lf   or  %lg                   10.6
*/
