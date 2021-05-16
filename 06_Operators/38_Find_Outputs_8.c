// Find output
#include <stdio.h>
main()
{
	float   a = 123.9274;
	printf("%.2f \n" , a); //  123.93
	printf("%.3f \n" , a); // 123.927
	printf("%.0f \n" , a); //  124
	printf("%f \n" , a); //  123.927400
	printf("%8.2f \n" , a); //  <2 spaces>123.93
}

/*
1) %.2f   ---->  2  digits  after  decimal  point

2)  %.3f   ---->  3 digits  after  decimal  point

3)  %.0f   ---->  No digits  after  decimal  point

4)  %f  ---> 6  digits  after decimal  point  becoz  default  is   6

5)  %8.2f  ---> Total  width   is   8   and  2   digits  after decimal  point

6)  What  is  the  format  to  print  currency ?  ----> %.2f
*/
