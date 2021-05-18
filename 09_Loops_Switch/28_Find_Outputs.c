// Find outputs
#include <stdio.h>
main()
{
	int   i , j;
	for( i = 1 , j = 4 ; i <= 3 &&  j >= 1 ; i++ , j--)  //  4   1
			printf("%d  \t  %d  \n" , i , j);  //  1    4 ,  2    3 , 3    2
}


/*
1) If   there is more than one initialization  in  for  loop , they  are  separated  with  ,  operator 

2) Similar;y ,  If   there is more than one increment  or  decrement  in for loop,  they  are  separated  with  ,
    operator

3) If there is more than one condition,  they  are  joined  with  && (or)  ||  operator
*/

