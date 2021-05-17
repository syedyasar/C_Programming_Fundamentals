// Find output
#include<stdio.h>
main()
{
	int i = 5;
	if(i == 3 , 4) 
     		printf("Hyd\n");
    else
			printf("Sec\n");
}


// i == 3 , 4 --->  5==3,4 --> False, 4 ---> False, True ---> True

//  i == (3,4) ---> 5 == (3,4)  ---> 5 == 4 ---> false
