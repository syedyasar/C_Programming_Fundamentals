// Display array in reverse  order
#include <stdio.h>
main()
{
	int      n  , i ; 
	
	printf("How many elements  ? : ");
	scanf("%d" , &n); //  4
    int  a[n]; // Array  is  created  of  size  'n'
	printf("Enter elements \n");
	for(i = 0 ; i <= n - 1 ; i++)  //  Reads  elements  into  array
		scanf("%d" , &a[i]); //  reads  a[i]  where  'i'  varies  from  0  to  n -  1
	printf("Reverse order \n");
	for(i = n - 1 ; i >= 0 ; i--) // prints  array  in  reverse  order
		printf("%d\n" , a[i]); // prints  a[i]  where  i  varies  from  n-1  down to  0
}

/*
1)  for loop is mandatory to process array

2) Array  must  be  created  after  reading  array  size  but  not  before

3)  int a[n] , n ;  ---> Error  becoz  n  is  used  before  it  is  declared

4)  It  is  a  3-step  process
     a)  Read  array  size
	 b) Array  creation
	 c)  Reading elements  into  array
*/

