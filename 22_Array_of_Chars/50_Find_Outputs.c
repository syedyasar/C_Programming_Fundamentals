// Find outputs
#include<stdio.h>
main()
{
	char  a[] = "Hyd";
	char  b[] = "Hyd";
    if(a  ==  b) //  Addresses  are  compared  but  not   strings   due  to  ==  operator
		   printf("Strings  are same\n");
    else
		   printf("Strings are different\n");
}


/*
1) Address  of   1st   array   is   a (may   be   1000)

2) Address  of   2nd   array   is   b (may   be   2000)

3) a  ==  b   ---->  1000 ==  2000   ---->  False
*/