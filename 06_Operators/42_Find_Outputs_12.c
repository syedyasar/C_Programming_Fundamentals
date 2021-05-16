// Find  output
#include <stdio.h>
main()
{
	int  n = 9247;
    printf("%7d \n" , n); //  <3 spaces>9247
    printf("%.07d \n" , n); //  0009247
    printf("%.7d \n" , n); //  0009247
    printf("%2d \n" , n);  // smaller  width 2  is  ignored  and entire  number is  printed  ---> 9247
    printf("%d \n" , n); //  9247
}


/*
1) %7d  ---> width of 7 characters with leading spaces

2) %.07d  (or)   %.7d   ---> width of 7 characters with leading zeroes

3)  To print  hours, minutes and seconds  , control string is  %.02d : %.02d  : %.02d


          Value     %2d               %.02d
		  -------------------------------------------------
		      7           <space>7      07
			  0           <space>0      00
			  23         23                  23
*/

