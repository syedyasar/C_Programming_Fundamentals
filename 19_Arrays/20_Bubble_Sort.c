/*
Write a function for bubble sort  to   arrange elements of array in ascending order

10 , 20 , 15 , 5 , 30 , 18  ---> Given elements
10 , 15 , 5 , 20 , 18 , 30  --->  Pass  1  --->  3  swaps
10 , 5 , 15 , 18 , 20 , 30  --->  Pass  2  --->  2  swaps
5 , 10 , 15 , 18 , 20 , 30  --->  Pass  3  --->  1  swap
5 , 10 , 15 , 18 , 20 , 30  --->  Pass  4  --->  0  swaps
*/


                             
#include <stdio.h>
void  bubsort(int a[] , int n)
{
		int  temp , ctr , i;
		do  //  It  is  controlling  passes
		{
				ctr = 0; // Reinitializes  ctr  at  the  begining  of  each  pass
				for(i = 0 ; i <= n - 2 ; i++)  // It  is  controlling  comparisons
				{	
						if (a[i] > a[i + 1]) // if  ith  element  is  >   (i+1)th   element,   swap   them
						{
								temp = a[i];
								a[i] = a[i+1];
								a[i + 1] = temp;
								ctr++;  //  counts  number  of  swaps
						}
				}
		}
		while(ctr > 0); //  Go  to  next  pass  when  there  is  at  least  one  swap
}


/*
compare  a[0]  and  a[1]
compare  a[1]  and  a[2]
compare  a[2]  and  a[3]
and  so   on

1)  i  varies  from  0  to  n - 2 due  to  a[i + 1]

2) a[i + 1]  is   garbage  value    when  i  =  n - 1
*/


main()
{
	int  i , n;
	printf("How many elements  ?  :  ");
	scanf("%d" , &n);
	int  a[n];
	printf("Enter  elements \n");
	for(i = 0 ; i <= n - 1 ; i++)  
			scanf("%d" , &a[i]);
	bubsort(a , n);  //  elements  of  array  are  sorted  replacing  unsorted  elements
	printf("Sorted  Elements \n");
	for(i = 0 ; i <= n - 1 ; i++) // Prints  array
			printf("%d\n" , a[i]); // prints  a[i]  where  i  varies  from  0  to  n -1 
}

