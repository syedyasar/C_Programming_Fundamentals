//  fflush  is  not  required  when  inputs  are  numbers
#include  <stdio.h>
main()
{
	int  a  , b;
	printf("Enter any  number  :  ");
	scanf("%d" , &a);
	printf("Enter any number : ");
//	fflush(stdin);
	scanf("%d" , &b);
	printf(" a : %d \n" , a);
	printf(" b : %d \n" , b);
}



/*
Note:
1)  fflush  is  not  required  between
     a)  number  inputs
     b)  strings  inputs
     c)  string  and  number  inputs

2)  fflush  is  mandatory  between  number  and  string  inputs
*/
