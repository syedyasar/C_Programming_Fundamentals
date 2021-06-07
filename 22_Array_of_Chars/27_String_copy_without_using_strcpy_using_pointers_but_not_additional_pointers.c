// function for string copy without strcpy   without  using  additional pointers p1  and  p2
#include <stdio.h>
void  copy(char*   y , char*   x)
{
	while(*x != '\0')
	{
			*y = *x;
			x++;
			y++;
	}
	*y = '\0';
}

//  Modifying  x  and  y   without  using  p1  and  p2


main()
{
	char  a[40] , b[40];
	printf("Enter  any  string :  ");
	gets(a);
	copy(b , a);
	printf("b :  %s \n" , b);
}

