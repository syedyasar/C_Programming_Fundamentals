/*
Sort  names  of  classmates  in  alphabetical  order
1) Inputs are number   of strings and strings
2) outputs : Strings in alphabetical order
*/

#include  <stdio.h>
#include  <string.h>
void   stringsort(char  a[40][30]  ,  int  n)
{
	int  i , ctr;
	char  temp[30]; // It  can  hold  a  string
	do
	{
		ctr = 0; // ctr  is  reinitialized  at  the  begining  of  each  pass
		for(i = 0 ; i <= n - 2 ; i++)
		{
			if (strcmp(a[i] , a[i + 1]) == 1) //  Is  ith  string >  (i+1)th  string ?
			{
				strcpy(temp , a[i]);  // Swap   ith  string  and  (i+1)th  string
				strcpy(a[i] ,  a[i+1]);
				strcpy(a[i+1] , temp);
				ctr++; // count  number  of  swaps
			} // if
		} // for
	} //  do
	while (ctr > 0); // Go  to  next  pass  when  there  is  at  least  one  swap
} //  function


/*
1) a[i]  is  ith  string  and  a[i+1]  is  (i+1)th  string

2)  a[i] > a[i+1]  is  invalid  becoz  strings  can  not  compared  with  >

3)  temp = a[i];
      a[i] = a[i+1];
	  a[i+1] = temp;    are   invalid  becoz  strings  can  not  be  swapped  with  =   operator
*/

main()
{
		char  a[40][30];  //  40  names  and  each name  contains  30  characters
		int   i , n;
		printf("How many strings ?  :  ");
		scanf("%d" , &n);
		fflush(stdin); // flushes  "\n"  before  the  first  string
		printf("Enter strings \n");
		for(i = 0 ; i <= n - 1 ; i++)  //  Reads  'n'  string  into  array  'a'
					gets(a[i]); // Reads  string  into  a[i]  where  i  varies  from 0  to n - 1
		stringsort(a , n);  // sorts  strings  in  array   'a'
		printf("Alphabetical order\n");
		for(i = 0 ; i <= n - 1 ; i++) // Prints  array  of  strings
					puts(a[i]);  //   is   same  as    printf("%s\n" , a[i]);
}

