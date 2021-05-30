// Pointer  assignment
#include <stdio.h>
main()
{
        int  x = 25;
		int *p1 = &x;   // p1  points  to  variable  'x'
		int  *p2 = p1;  // p2  points  to  same  variable  where  p1  points
		printf("p1  :  %u\n" , p1); //  1000
		printf("p2  :  %u\n" , p2); // 1000
		printf("*p1  :   %d\n" , *p1); //  that  value  where  p1  points  ---> 25
		printf("*p2  :   %d\n" , *p2); // that  value  where  p2  points  ---> 25
		printf("p1 == p2 :  %d\n" , p1 == p2); //  1000  ==  1000   --->  true  ---> non-zero
}


/*
1)  p2 = p1  copies  address  in  p1  to  p2

2) Both  the  pointers  point  to  same  variable

3) p2  points  to  same  variable  where  p1  points
*/
