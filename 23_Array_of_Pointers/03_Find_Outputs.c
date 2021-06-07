//  Find outputs
#include <stdio.h>
main()
{
	char*    a[] = { "" , "January" , "February" ,"March" , "April" , "May" ,"June" , "July" , "August" , "September" , "October" , "November" , "December"};
	printf("%s \n" , a[1]); // that  string  where  a[1]  points   ---->  January
	printf("%u \n" , a[1]);  // Address  of  January
	printf("%s \n" , a[2]); // that  string  where  a[2]  points   ---->  February
	printf("%u \n" , a[2]);  // Address  of  February
    printf("%s \n" , a[12]);  // That  string  where  a[12]  points  ---> December
    printf("%u \n" , a[12]);  // Address  of  December
    printf("%c \n" , a[1][0]);  //  J
    printf("%c \n" , a[1][6]);  // y
    printf("%c \n" , a[12][0]); // D
    printf("%c \n" , a[12][7]); // r
}


// In  general,  a[i]  is  ith  string  and   a[i][j]  is    jth  character   of  ith  string
