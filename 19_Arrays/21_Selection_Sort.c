/*
Selection sort
------------------------
10 , 20 , 15 , 5 , 30 , 18  --> Inputs  
10 , 20 , 15 , 5 , 18 , 30  -->  Pass  1   ---> Last   element  is  sorted
10 , 18 , 15 , 5 , 20 , 30  -->  Pass  2   ---> Last   2   elements   are   sorted
10 , 5 , 15 , 18 , 20 , 30  -->  Pass  3   ---> Last   3   elements   are   sorted
10 , 5 , 15 , 18 , 20 , 30  -->  Pass  4   ---> Last   4   elements   are   sorted
5 , 10 , 15 , 18 , 20 , 30  -->  Pass  5   --->  All  the  elements   are   sorted

1) There are n - 1 passes

2) Swap largest element and last element in each pass

main()  ---->  reads elements  into  array ,  calls  selsort   function   and  prints  array
selsort()  --->  sorts  elements  of  array  in  ascending  order
large()  --->  returns  subscript  of  largest  element    (don't  define  the  function  and  just  include  the  file)

main   calls   selsort  function  and  selsort   calls   large   function  and   swap   function
*/

#include <stdio.h>
//#include "p17.c"  //  large function is substituted

int  large(int  *a , int  n) //  'a'  is   address  of   array   and  'n'  is   array  size
{
	int  i , max = a[0];  //  1st  element  of  array
	int  maxp = 0; //  subscript  of  1st  element
	for(i = 1 ; i <= n -  1 ; i++) //  Each  of  the  remaining  elements  of  array   are  compared  with  max
	{
			if(a[i] > max)  //  Which  ever  element  is  > max ,  copy  that  element  to  max  and  corresponding  subscript  is  copied  to  maxp
			{
					max = a[i];
					maxp = i; // maxp = 5
			}
	}
	return  maxp;  //  subscript  of  lagest  element
}


void  selsort(int  *a , int  n)
{
	int  i , maxp , temp;
	for(i = n - 1 ; i >= 1 ; i--) //    There   are  n-1  passes  and  hence  i  varies  from   n-1  downto   1
	{
		maxp = large(a , i + 1);  //  Subscript   of  largest  element  in  first   i + 1  elements  of  array
		temp = a[maxp]; // swap   largest  element  a[maxp]  and  last  element  a[i]
		a[maxp] = a[i];
		a[i] = temp;
	}
}

/*
pass  1  ---->  Find  largest  element  in   first  n  elements
pass  2  ---->  Find  largest  element  in   first  n - 1   elements  becoz  last  element  is  already  sorted
pass  3  ---->  Find  largest  element  in   first  n - 2   elements  becoz  last  2  elements  are  already  sorted
pass  4  ---->  Find  largest  element  in   first  n - 3   elements  becoz  last   3  elements  are  already  sorted
and  so   on
--------------------------------------------------------------
maxp   is   subscript  of  largest  element  and  a[maxp]   is   largest  element
---------------------------------------------------------------
pass  1  ----> Last   element   is   a[n-1]
pass  2  ---->  Last   element   is   a[n-2]
pass  3  ----> Last   element   is   a[n-3]
and  so   on
*/

main()
{
	int  i , n;
	printf("How many elements  ?  :");
	scanf("%d" , &n);
	int  a[n];
	printf("Enter elements \n");
	for(i = 0 ; i <= n - 1 ; i++)
			scanf("%d" , &a[i]);
	selsort(a , n);  // sorted  elements  are  stored  in  the  array  replacing  unsorted  elements
	printf("sorted elements \n");
	for(i = 0 ; i <= n - 1 ; i++)
			printf("%d\n" , a[i]);
}

