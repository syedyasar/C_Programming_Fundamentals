/*
Find  largest  element  of  the  matrix  along  with  row  number  and  column  number
Eg:
      0      1      2      3
0   10    20    30    25
1   40    35    50    45
Largest  element  :  50
Row  number  :    2
Column  number  :   3
*/

#include <stdio.h>
#include <math.h>
int*  large(int  m , int  n , int  a[][n])
{
        int  i , j;
        static  int  b[3];  // Array  is   created  for   stroing   results
        b[0] = a[0][0]; // 1st  element  of  matrix  is copied  to b[0]
		for(i = 0 ; i <= m - 1 ; i++) // It  is  controlling  rows  i.e. m  rows
		for(j = 0 ; j <= n - 1 ; j++) // It   is controlling  elements  i.e. n  elements
		{
				if(a[i][j] > b[0])  // Whichever  element   >  b[0],  copy  that  element   to  b[0]
				{
		  				b[0] = a[i][j];
						b[1] = i; // row  subscript  is  copied  to   b[1]
						b[2] = j;  // column   subscript  is  copied  to   b[2]
				}
  		}
	    return  b; // Address  of  array  'b'
} // Array   'b'  is  not  lost   becoz  it   is  static  array

main()
{
	int        i , j , m , n;
	printf("Enter  number  of  rows  :  ");
	scanf("%d" , &m);
	printf("Enter  number  of  columns  :  ");
	scanf("%d" , &n);
	int  a[m][n];
	printf("Enter  matrix  \n");
	for(i = 0 ;  i <= m - 1 ; i++)
	for(j = 0 ;  j <= n - 1 ; j++)
		        scanf("%d" , &a[i][j]);
	int*   c = large(m , n , a);  //  'c'  points to   array  of  large  function
	printf("Largest  element  :  %d\n" , c[0]);  // Printing  array   'b'   thru   pointer  'c'
	printf("Row  Number :  %d \n" , c[1] + 1);
	printf("Column  Number :  %d \n" , c[2] + 1);
}

//  main  function  can  not  print  array   'b'  directly   becoz  it  is  an  array   of  large  function

