//  Array  of  fixed length strings
#include <stdio.h>
main()
{
	char   a[][20]  = { "" , "January" , "February" ,"March" , "April" , "May" ,"June" , "July" , "August" , "September" , "October" , "November" , "December"};
	int  m;
	printf("Enter month number (1-12) : ");
	scanf("%d" , &m); // 0
	if (m < 1 || m > 12)
		printf("Invalid month number \n");
	else
		printf("Month : %s\n" , a[m]);
}