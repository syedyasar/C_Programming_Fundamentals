
// Using  -  between   the   formats 
#include <stdio.h>
main()
{
	int   d , m , y;
	printf("Enter date,month and year separated by  -  \n");
    scanf("%d-%d-%d" , &d , &m , &y); 
	printf("d : %d \n" , d);
	printf("m : %d \n" , m);
	printf("y : %d \n" , y);
}


/*
1) scanf("%d - %d - %d" , &d , &m , &y);  ---> Inputs must be separated by  -   ----> 15 - 8 - 1947

2) scanf("%d , %d , %d" , &d , &m , &y);  ---> Inputs must be separated by  ,   ----> 15 , 8 , 1947

3) scanf("%d : %d : %d" , &d , &m , &y);  ---> Inputs must be separated by  :   ----> 15 : 8 : 1947

4) scanf("%d %d  %d" , &d , &m , &y);  ---> Inputs  can be  separated by  space bar, tab or enter key   
					----> 15<spacebar>8 <spacebar>1947 or  15<tab> 8<tab>1947  or  15 <enterkey>8<enterkey>  1947
*/

