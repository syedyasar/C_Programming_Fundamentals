// Same  program  with  ||  operator 
#include <stdio.h>
main()
{
	int i,j;
	for(i = 1 , j = 4 ; i <= 3 ||  j >= 1 ; i++ , j--) //   i = 5 , j = 0
			printf("%d  \t  %d  \n" , i , j);  //    1    4  ,   2    3 ,   3    2 , 4    1
}

