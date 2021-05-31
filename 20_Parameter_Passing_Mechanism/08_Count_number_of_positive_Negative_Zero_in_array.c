/*
Count  number   of  +ve  values , -ve  values  and  0's  in  an  array
main() ---> reads   elements  into  array , calls   count  function and display results
count() ---> creates  an  array  of  size  3 , store results in array and return address of array

                         0     1      2    3     4    5     6
array  a   --->  -10   20    0   -20   0   30   -40


                        P   N   Z
array  b  --->   2    3   2
                       0    1    2
*/

#include <stdio.h>
int*  count(int*  a , int  n)  //  'a'  is  address  of   array   and  'n'  is  array  size
{
	int  i;
    static int  b[3];  //  Array  is  created  which  can  hold  3  results
	for(i = 0 ; i <= n - 1 ; i++) // processing  elements   of   array   'a'
	{
			if(a[i] > 0) // Inc  b[0]  when  a[i]  is  +ve
					b[0]++;
			else
			if(a[i] < 0)   // Inc  b[1]  when  a[i]  is  -ve
					b[1]++;
			else
					b[2]++;   // Inc  b[2]  when  a[i]  is  0
	}
	return  b; // Array  'b'  is   returned  to  function   call
}  //  Array   'b'  is  alive  becoz  it  is  static  array


//  return    type   is   int*  becoz   address  of   array   is   returned
main()
{
	int  i , n;
	printf("How  many  elements ? :  ");
	scanf("%d" , &n);
	int  a[n];
	printf("Enter  elements \n");
	for(i = 0 ; i <= n - 1 ; i++)
				scanf("%d" , &a[i]);
	int*  c = count(a , n); //  'c'  points  to  array   'b'   of   count   function
	printf("Number  of  +ve  elements : %d\n" , c[0]);  //  Array  'b'  is  printed  thru  pointer  'c'
	printf("Number  of  -ve  elements : %d\n" , c[1]);
	printf("Number  of  0's  : %d\n" , c[2]);
}

/*
1) count  function  returns  address  of  array  'b'

2) It  is  returned  to  function  call  and  is  assigned  to  pointer  'c'

3) So  'c'  points  to  array  'b'  of  count  function

4) main  function  can  not  access  array  b  directly  by  b[0] , b[1] , b[2]  (as  it  is  an  array  of  count  function)

5) Access  array  'b'  indirectly  through   pointer   'c'
    a) c[0] , c[1] , c[2]  internally  access  array  'b'
    b) *c , *(c + 1) , *(c + 2)  also  access  array  'b'
*/
