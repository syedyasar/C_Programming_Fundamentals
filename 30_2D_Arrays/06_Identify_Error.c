// Identify  error
#include <stdio.h>
main()
{
		//int  a[][];  // Error  becoz  []  are  empty
        //int  b[][4];  //  Error  becoz  1st  []  can  not  be  empty  as  matrix  is  not  initialized
        //int  c[3][]; // Error  becoz  2nd []  can  never  be  empty
        int  d[3][4];  // Valid
        int  e[][2] = {10 , 20 , 30 , 40};  // Valid  and  it  is  2 X 2 matrix
        //int  f[2][] = {10 , 20 , 30 , 40}; // Error  becoz  2nd []  can  never  be  empty
        //int  g[][] = {10 , 20 , 30 , 40};  // Error  becoz  2nd []  can  never  be  empty
        int  h[2][2] = {10 , 20 , 30 , 40};  // valid
        int  i[3][3] = {10 , 20 , 30 , 40};   // valid  and  remaining  5   elements  are  zeroes
}
