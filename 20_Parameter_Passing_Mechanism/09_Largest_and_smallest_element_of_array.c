/*
Find  largest  and  smallest  elements  of  array
main()  ---> reads  array , calls  max_min   function  and  prints  results
max_min()  ---> creates  an   array  of  size  2 ,  stores  largest  and  smallest  elements   in  array  and  returns  array

                            0     1      2     3     4     5    6      7
Array   a   ---->   10    20    5    15   30    3   40    35
 
                            Largest    Smallest
Array   b   --->        40               3
                                0                1
*/
#include <stdio.h>
int*   max_min(int*  a , int  n)
{
	int  i;
	static  int  b[2];  //  Array  is  created  to  hold  2  results
	b[0] = b[1] = a[0]; // 1st  element  of  array  'a'  is  copied  to  b[0]  and b[1]
	for(i = 1  ; i <= n - 1 ; i++)  //  Process  remaining  elements  of  array  'a'
	{
			if(a[i] > b[0]) // Whichever  element  is  > b[0],  copy  that  element  to b[0]
					b[0] = a[i];
			else 
			if(a[i] < b[1]) // Whichever  element  is  < b[1],  copy  that  element  to b[1]
					b[1] = a[i];
	}
	return  b; //  Address  of  array  is  returned
} //  Array  'b'  is  alive  becoz  it  is  static  array

main()
{
	int  i  ,  n;
	printf("How  many  elements ?  :  ");
	scanf("%d" , &n);
	int  a[n];
	printf("Enter elements \n");
	for(i = 0 ; i <= n - 1 ; i++)
			scanf("%d" , &a[i]);
	int*   c   =  max_min(a , n); //  'c'   points  to   array  b  of  max_min  function
	printf("Largest  element : %d\n" , c[0]);  //  Array  'b'  is  printed  thru  pointer  'c'
	printf("Smallest  element : %d\n" , c[1]);
}
