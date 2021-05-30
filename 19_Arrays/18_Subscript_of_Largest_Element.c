/*
Find subscript of largest element
large()  ---->  returns subscript of largest element
main()  --->  reads inputs  into  array , calls large function and display largest element and its posn
Assume  that   there   are  no  duplicates
*/


#include <stdio.h>
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
//  Replace >  with  < (i.e. a[i] < min)  to  get  smallest  element  subscript
int main()
{
		int  i , n;
		printf("How  many  elements ? : ");
		scanf("%d" , &n);
		int  a[n];  // Array   is  created  of  size  'n'
		printf("Enter  elements \n");
		for(i = 0 ; i <= n - 1 ; i++)  //  Reads  elements  into  array
				scanf("%d" , &a[i]);
		int   ans = large(a , n);  // ans  =  4
		printf("Largest  element : %d \n" ,  a[ans]);
		printf("Position of Largest element : %d \n" ,   ans + 1);
		return 0;
}

/*
1) If  large  function  returns  max ,  main   function  can  display  largest  element   but  not  its   position.

2) On  the  otherhand ,  If  large  function  returns  maxp,  main  can  display  both  largest  element  and  its  position.

3) Hence  every   function  must  return  subscript  but  not  element.

4) This  is   becoz   given  subscript ,  getting  element  is  simple  but  not  vice-versa
*/
