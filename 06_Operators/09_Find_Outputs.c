// Find output
#include <stdio.h> 
main()
{
	printf("%d\n" , 6 < 4  ||  9 >= 5  &&  6 != 6);  // false ---> 0
}





/*
1)   &&  operator  has  higher  priority  over  ||  
      i.e.  &&  is  evaluated  before  ||

2) 6 < 4 ||  9 >= 5 && 6 != 6
   =  false ||  true &&  false
   = false ||  false
   = false
   = 0
*/



