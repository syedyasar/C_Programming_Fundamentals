//  Find  output
#include <stdio.h>
main()
{
	printf(" %d  \n" , 3 + 4 * 5 - 6 / 2 % 7);  // 20
}


/*
1)    *,    /  ,    %    have    higher    priority  over  +  and  -

2) *,  /,  %  are  evaluated  before  +  and  -

3) Operators  are  evaluated  from  left  to  right  when  they  have  same  priority

4)     3  + 4 * 5 - 6 / 2 % 7 
     = 3 + 20 - 6 / 2 % 7 
	 = 3 + 20 - 3 % 7 
	 = 3 + 20 - 3 
	 = 23 - 3 
	 = 20
*/


