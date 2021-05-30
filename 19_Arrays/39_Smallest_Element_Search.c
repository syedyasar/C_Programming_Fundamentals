
/*
Find subscript of largest element
large()  ---->  returns subscript of largest element
main()  --->  reads inputs  into  array , calls large function and display largest element and its posn
Assume  that   there   are  no  duplicates
*/

#include <stdio.h>
int Min(int a[] , int n )
{
	int i=0,Min,Min_ind;
	Min=a[i];
	for(i = 0 ; i < n ; i++)  
	{
		if(Min>a[i]){
			Min=a[i];
			Min_ind=i;		
		}
	}
	return Min_ind ;
	
}

int main()
{
	int      n  , i ,Min_result; 

	printf("Enter size of array  ? : ");
	scanf("%d" , &n); 
    int  a[n]; 
    
	printf("Enter elements \n");
	for(i = 0 ; i < n ; i++)  
		scanf("%d" , &a[i]); 

	Min_result = Min(a , n ) ;
	printf("Smallest element of array is %d \n", a[Min_result] );
	printf("Position of Smallest element is %d \n", Min_result +1 );
	return 0;
}


