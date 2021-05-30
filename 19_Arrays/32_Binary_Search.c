// Binary  search
// Advantage  of binary seach ---> Fast (super fast) in search
// Disadvantage  of binary search ---> Array   must   be  sorted


#include <stdio.h>>
//#include "20_Bubble_Sort.c"   //  bubsort   function  is  substituted

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


int   binsrch(int  *a , int   n ,  int   x)  //   'a'   is   address  of   array  ,  n  is   array  size ,  'x'  is  element  to  be searched
{
	int  middle;
	int  top = 0;  // subscript  of  1st  element
	int  bottom = n - 1; // subscript  of  last   element
	while(top <=  bottom) // search  for  'x'  until  top > bottom
	{
		middle = (top + bottom) / 2;  // subscript  of  middle  element
		if (x == a[middle])  //  x  is  compared  with  middle  element
				return  middle;  // subscript  of   that   location where  'x'  is  found
		else
		if (x < a[middle])  // search  for   'x'  in  1st  half  and  ignore  2nd  half
			 bottom = middle - 1; //  bottom  is  modified
		else // search  for   'x'  in  2nd   half  and  ignore  1st  half
			top = middle + 1; //  top  is  modified
	}
	return  -1; // top > bottom  implies  that  'x'   is  not  found  in  the  array
}

/*
0     1       2       3          4             5            6          7             8           9
10   20    30     40        50           60          70         80         90        100

1) 					x = 30
 Iteration          top    bottom   middle
 -------------------------------------------------------------
Initial  values     0           9           4
      1                   0           3           1
      2                   2           3           2
--------------------------------------------------------------
     output  :   2

2) 			x =  70
 Iteration            top    bottom   middle
 --------------------------------------------------------------
  Initial  values    0          9             4
        1                  5          9             7
        2                  5          6             5
        3                  6          6             6
---------------------------------------------------------------
       output  :   6

3) 	        	x = 35
 Iteration         top    bottom   middle
 ---------------------------------------------------------
Initial values    0             9          4
     1                  0             3          1
     2                  2             3          2
     3                  3             3          3
     4                  3             2          ---
------------------------------------------------------------
     output : -1


4)							n  =  100
	 Iteration       search   in   how  many   elements
	 ----------------------------------------------------------------------------------
	       1                              50  elements    
	       2                              25  elements    
	       3                              12  elements    
	       4                              6  elements    
	       5                              3  elements    
	       6                              1  element
    ------------------------------------------------------------------------------------
Binary  search  takes  maximum of  6  iterations  to  locate  for  x
but sequential search takes a max of 100 iterations
Thus binary search is faster than sequential search
*/


main()
{
	int  i , n , x;
	printf("How many elements ? : ");
	scanf("%d" , &n);
	int  a[n];
	printf("Enter elements \n");
	for(i = 0 ; i <= n - 1 ; i++)
				scanf("%d" , &a[i]);
	printf("Enter element to be searched : ");
	scanf("%d" , &x);
	bubsort(a , n); // Array   must  be  sorted  before  calling   binary  search
	int ans = binsrch(a , n , x); //  It   returns  either subscript  or  -1
	if(ans == -1)
		printf("Not  found\n");
	else
		printf("Found  \n");  // don't  print  position  ans+1  becoz  positions   have  been  altered  due  to  bubble  sort
}



