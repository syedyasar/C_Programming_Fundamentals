// Pointers  arithmetic
#include <stdio.h>
main()
{
        int  a = 10;
		int *p = &a; // p  points  to  variable  'a'
		printf("%u\n" , p); //  Address  of  variable  'a'  (may  be   1000)
		printf("%u\n" , p + 4); // 1000 + 4 integers = 1000 + 4 * 4 = 1016
		printf("%u\n" ,  p - 4); // 1000 - 4 integers = 1000 - 4 * 4 = 984
		//printf("%u\n" , p * 4); //  Error  becoz  pointer  and  integer  can  not  be  multiplied
		//printf("%u\n" , p / 4);  //  Error becoz  pointer  and  integer  can  not  be  divided
		p++;  //  p  moves  to  next  location  ---> p = p + 1 integer = 1000 + 4 = 1004
		printf("%u\n" , p); //  1004
		p--;  //  p  moves  to  preceding   location  ---> p = p - 1 integer = 1004 - 4 = 1000
		printf("%u\n" , p); // 1000
}

/*
1) ptr  +  int  is  pointer

2) ptr - int  is  pointer

3) ptr++  moves  ptr  to  next  location  and     ptr--  moves  ptr  to  preceding    location
*/


