/*
Find average  of  array  elements
main()  --->  Reads  elements  into  array , calls  avg   function  and  prints  result
avg(int  *a , int  n) --->  Returns  average  of  array   elements
*/

#include <stdio.h>
float  avg(int * , int);
main()
{
		int  n , i;
		printf("How  many  elements  ?  :  ");
		scanf("%d" , &n);  //  4
		int  a[n];  // Array   is  created  with  size  n
		printf("Enter elements \n");
		for(i = 0 ; i <= n -1 ; i++) //  reads  elements  inton  array 
					scanf("%d" , &a[i]); // reads   a[i]  where   i varies  from  0  to  n - 1
		printf("Average  :  %g \n" , avg(a , n));
}

float  avg(int  *p  , int   size) //  p  points  to   array   main  function   array   'a'
{
	int  sum = 0;
	int    i;
	for(i = 0 ; i <= size - 1; i++) // i = 4
			sum +=  p[i];  //  sum  = 0 + 10 + 20 + 15 + 18  = 63
	return   (float)sum /  size;  //  63 / 4 = 15
}
/*
1)  float  i;
     a[i]  leads  to  error  becoz  subscript can not be float

2)  return  sum / size;   --->  return  63 / 4  ---> 15  is  returned  but  not  15.75
*/