/*
Sequential search or linear search
i.e. search for an element in the array
search(int  *a  , int  n , int   x)  ---> Returns  subscript  when  element  is   found  in the  array  and   -1  otherwise
main()  ---> Reads   elements  into   array ,  calls  search  function and  print position   or message
Assume  that  array  contains unique  values (i.e. No duplicates)
*/


#include <stdio.h>
int  search(int  *a , int  n , int  x) //  'a'  is  address  of  the  array , n  is  size  of  the  array  and  'x'  is  element  to  be  searched
{
	int  i;
	for(i = 0 ; i <= n - 1 ; i++) //   search  for  'x'  in  the  array
	{
		if(x == a[i]) // x  is  compared  with  each  element  of  array
			return  i; //  subscript  of   that  location  where  'x'  is   found
	}
	return   -1;  //  'x'  is  not   found
}

/*
a[i]  is  each  element  of  array  and  i  is  subscript  of  the  element
Case  1 :  If  x  is  not  found  in  the  current  location  of  array ,  search  in  the  next  location
Case  2 :  If  x  is  found  in  the  current  location , return  subscript  of  that  location
Case  3 :  If  x  is  not  found  in  the  array , return  -1
*/




main()
{
	int  n , x , i;
	printf("How  many  elements ? : ");
	scanf("%d" , &n); // 5
	int  a[n];
	printf("Enter  elements \n");
	for(i = 0 ; i <= n - 1 ; i++) //  Reads   elements into   array 
		scanf("%d" ,  &a[i]);
	printf("Enter  element  to  be  seached :");
	scanf("%d" , &x);
	int  ans = search(a , n , x);  //   Function   returns   subscript  or   -1
	if(ans == -1)
			printf("Not  found \n");
	else
			printf("Found  at  Position :  %d\n" , ans + 1);  //  subscript + 1  is  position
}
