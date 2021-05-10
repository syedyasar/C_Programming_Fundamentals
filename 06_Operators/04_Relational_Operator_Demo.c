//  Relational  operators demo  program 
#include <stdio.h>
main()
{
	printf(" %d  \n" ,  9 >= 5); //  true  becoz > is satisfied --> Non-zero  result
	printf(" %d  \n" ,  9 >= 9); //  true  becoz =  is satisfied --> Non-zero  result
	printf(" %d  \n" ,  9 >= 12); // false   becoz  neither >  nor  =  is satisfied -->  0
	printf(" %d  \n" ,  6 <= 8); //  true  becoz  < is satisfied --> Non-zero  result
	printf(" %d  \n" ,  6 <= 6); //  true  becoz  = is satisfied --> Non-zero  result 
	printf(" %d  \n" ,  6 <= 4); // false   becoz  neither  <   nor  =  is satisfied -->  0
	printf(" %d  \n" ,  6 != 8); // true  --> non-zero
	printf(" %d  \n" ,  9 == 12);//  false ---> 0
}


/*
Relational  Operators
-----------------------------------
1)  >,  <,  ==,  >=,  <=,  !=

2) Relational  operators  produce  true  or  false  result.

3) 0  is  called  false  and  any  non-zero  number  is  true.

4) Every  +ve  and  -ve  integer  is  true 
*/
