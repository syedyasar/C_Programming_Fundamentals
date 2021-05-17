// Find  output
#include<stdio.h>
main()
{
		int i = 0, j = 0;
		if(i++ == j++) //  0 ==  0  ---> true
				printf("%d %d\n", i--, j--); //   1     1
		else
				printf("%d %d\n", i, j);
}


/*
1)  i++  ==  j++   ---> 0 ==  0  ---> true

2) values of  i  and  j  are  1  and  1  after if condition is  evaluated

3)  printf("%d   %d \n" , i-- , j--);  ---> 1    1

4) values of  i  and  j  are  0  and  0   after printf is  executed
*/
