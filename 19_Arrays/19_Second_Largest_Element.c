/*
Find subscipt of 2nd largest element
seclar()  ---->  returns subscript of  2nd largest element
main()  ---> read  inputs  into  array , call  seclar  function and display  2nd largest element and it position
Logic  --->  Eliminate  largest  element  and   Find   largest  element
Hint :  Call  largest   function  defined  in  the  previous  program  twice
main()  ---> seclar  ---->  largest
*/ 

//#include   "18_Subscript_of_Largest_Element.c"   // large  function is  substituted
#include  <limits.h>  //  for   INT_MIN  macro
#include  <stdio.h>

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


int   seclar(int  *a , int  n)
{
	int  maxp =  large(a , n);  // Subscript  of  largest  element
	int  max = a[maxp];  //   Largest  element of  array
	a[maxp] =  INT_MIN; //   Largest  element  is  replaced  with  smallest   integer
	int  ans  =  large(a , n);  //  Second  largest  element  becomes  largest   becoz  largest  element  is  eliminated
    a[maxp] = max;   //   Largest  element  is   restored  in the  array
	return  ans; //  subscript  of  2nd  largest  element
}
                            
main()
{
		int  n , i;
		printf("How  many  elements ? : ");
		scanf("%d" , &n);
		int  a[n]; 
		printf("Enter elements \n");
		for(i = 0 ; i <= n - 1 ; i++) 
				scanf("%d" , &a[i]);
		int  ans = seclar(a , n);  // Subscript  of  2nd  largest  element
		printf("Second largest element :  %d \n" , a[ans]); // a[ans]  is  2nd  largest  element
		printf("Position : %d \n " , ans + 1); //  ans + 1 is  position  of  2nd  largest  element
}

// main  calls  seclar  function  and  seclar  function  calls  large  function  twice
