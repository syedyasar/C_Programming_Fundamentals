// Display  first  20  even  numbers  by  using  for  loop
#include<stdio.h>
int  main()
{
        int  i;
        printf("First  20  even  numbers\n");
        for( i = 1 ; i <= 20 ; i++)  // 21 <= 20  ---> false
					printf("%d\n" , 2 * i);  //  prints  2 * i where i  varies from 1  to  20
        printf("Bye\n");
}

/*
1) i  is  iteration  number  and  2*i  is  even  number
						i       2 * i
					------------------------
					    1        2
					    2        4
					    3        6
						....
						20      40
						21

2)   {  }  are  not  required  becoz  for  loop  contains  single  statement

3) i++ , ++i , i += 1  and i = i + 1  are  same
*/








