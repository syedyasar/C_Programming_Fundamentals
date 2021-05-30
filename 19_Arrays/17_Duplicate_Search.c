/*
Write a function for duplicate search
Array may contain duplicates
dupsrch(int  *a  , int  n , int   x)  ---->  Prints  positions of the element and returns  frequency
main()  ---> Read  elements  into  array , calls dupsrch function and prints frequency
*/

#include <stdio.h>
int  dupsrch(int  *a , int  n , int  x)
{
	int  i , ctr = 0;
	for(i = 0 ; i <= n - 1 ; i++) //  searches  for  'x'  in  the  array
	{
		if(a[i] == x) //  compares  'x'  with  element  of   array
		{
			printf("Position  : %d\n" , i + 1); //  positions  of   those  locations   where   'x'  is   found
			ctr++; //   counts  number  of  times  'x'  is   found  in  the  array
		}
	}
	return  ctr;  //  Frequency  of   'x'
}

main()
{
		int  i , n , x;
		printf("How many elements ? :");
		scanf("%d" , &n);
		int  a[n];
		printf("Enter elements\n");
		for(i = 0 ; i <= n - 1 ; i++)
			scanf("%d" , &a[i]);
		printf("Enter element to be searched ? : ");
		scanf("%d" , &x);
		printf("It  is  found  %d  times \n" , dupsrch(a , n , x)); //  prints  positions  of  'x'  and   returns  frequency
}
