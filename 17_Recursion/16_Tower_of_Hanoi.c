// Towers  of  Hanoi
#include <stdio.h>
void  toh(int  n , int p1 , int p2 , int p3) // n  is  number of  disks , p1 , p2 and p3   are source , intermediate and target  poles
{
     if ( n > 0) // At  least one disk is necessary
     {		
		toh( n - 1 , p1 , p3 , p2);  // Transfer n-1  disks from p1  to p2 with p3 acting as intermediate pole
		printf("%d  --->  %d  \n" , p1 , p3); //  Moves disk  from pole 1 to pole  3
		toh(n - 1 , p2 , p1 ,  p3);  // Transfer n-1  disks from p2  to p3 with p1 acting as intermediate pole
	 }
}
main()
{
	int n;
	printf("How many disks ? : ");
	scanf("%d" , &n); 
	toh(n , 1 , 2 , 3 ); 
}


// 1 , 2 , 3  are  pole  numbers 

