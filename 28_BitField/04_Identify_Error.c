// identify error
#include <stdio.h>
#pragma pack (1)
struct  s1
{
	int  x; //   x , y  and  ch  are  members
	float  y;
	char  ch;
	int  a : 3; //  a  and  b   are  bitfields
	unsigned  b : 4;
};


main()
{
    struct  s1  s;
	printf("%u \n" , &s . x); // valid
	printf("%u \n" , &s . y); // valid
	printf("%u \n" , &s . ch); // valid
//	printf("%u \n" , &s . a); //  Error  becoz  bit  field  has  no  address
//	printf("%u \n" , &s . b);  //  Error  becoz  bit  field  has  no  address
	printf("%d \n" , sizeof(s)); //  garbage value  becoz  size  of  the  structure  can  not  be  determined when structure  contains  bit   fields
}


/*
1) Structure  can  contain  members(x , y , ch)  and  bit  fields(a , b) together .

2) Members  have  addresses  but  not  bitfields .

3) &s  .  x  ,  &s  .  y  ,  &s  .  ch  are  valid  but  not  &s . a and &s . b

4) Not  possible  to  determine  size  of  the  structure  when  structure  contains  bit  fields
*/
