/*
Write  a  function  for  duplicate  largest
i.e Largest element is present at several locations

duplar()   ---->  prints  positions of all the occurances of largest element and frequency i.e How many times largest element is repeated
Hint :  2   for  loops
main()  --->  reads  elements into  array ,  calls  duplar   function  and  prints  frequency


array   ---> 10 , 20 , 30 , 25 , 18  , 30 , 19  , 18 , 30 , 25
                   0     1     2     3      4     5      6      7      8     9

*/
#include <stdio.h>
int   duplar(int  *a , int  n) // 'a'  is  address  of   array   and  'n'   is  array  size
{
		int  i , max = a[0];  //  1st   element  of   array
		for(i = 1 ; i <= n-1 ; i++) //  Finds  largest   element  of   array
		{
				if (a[i] > max) //  Which  ever  element >  max , copy   that  element  to   max
					max = a[i];  
		}
		int  ctr = 0;
		for(i = 0 ; i <= n - 1 ; i++)  // Searches  for  largest  element in  the  array
		{
				if (a[i]  ==  max) // Compares  each  element  of   array  with  largest  element
				{			
					printf("Posn :  %d \n" , i + 1); //  prints  positions  of  each  occurance  of  largest  element
					ctr++; // Count  number  of  times  largest  element  is  repeared  in  the  array
				}
		}
		return  ctr;   //  Frequence  of  largest element
}

main()
{
	int  n , i;
	printf("How many elements ?   : ");
	scanf("%d" , &n);
	int  a[n];
	printf("Enter  elements \n");
	for(i = 0 ; i <=  n - 1 ; i++)
		scanf("%d" , &a[i]);
	printf("Largest  element  is  found  %d  times \n" , duplar(a  ,  n));
}
