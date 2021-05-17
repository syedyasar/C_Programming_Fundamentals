//  Identify error
#include<stdio.h>
main()
{
	int i = 5, j = 5;
	if(i == j);   //  There  can  not  be  ;   at  the  end of condition
		printf("Equal\n");
	else  //  else  leads  to  error  becoz   there  is  ;   at   the  end of  condition
		printf("Not Equal");
}
