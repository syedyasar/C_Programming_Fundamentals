// float  demo  program
#include <stdio.h>
#include <float.h>
main()
{
	float  a = 10.8f;  //  'a'  is  variable  of  type  float
	printf("a : %g \n" , a); // 10.8
	printf("%d \n" , sizeof(a));  //  4  bytes
	printf("%g \n" , FLT_MAX);  // maximum value of  float  ---> 3.4 * 10 ^ 38
	printf("%g \n " , FLT_MIN);  //  minimum value of float  ----> 1.17 * 10  ^ -38
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
   float                    4B                        %f  or %g                       10.6f
   double                   8B                        %lf   or  %lg                   10.6
*/
