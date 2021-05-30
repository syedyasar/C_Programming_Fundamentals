// Recursive  Factorial 
#include <stdio.h>
long  long   fact(int  n)  // n  is  0
{
	if (n > 0)
			return  n  *  fact(n - 1); 
	else
			return  1;
}

/* fact(4) =  4 *  fact(3)  = 4 * 3 * fact(2) = 4 * 3 *  2 * fact(1) 
               = 4 * 3 * 2 *  1 *  fact(0) =  4 * 3 * 2 * 1 * 1 = 24
There are  5   function calls in fact(4).
main calls fact only once and fact is calling itself for the next 4 times.
There  are   n+1  function  calls in  fact(n) 
*/
main()
{
    int  n;
    printf("Enter  any  +ve  integer  or  0  :  ");
    scanf("%d" ,  &n);  
    printf("%d  !=  %lld \n" , n ,  fact(n));  //  prints  n  and  n!
}

/*
1)   if  (n > 0)
			retrun  fact(n-1);
	 else
	 		retrun  1;

     fact(4) = fact(3) = fact(2) = fact(1) = fact(0) = 1

2)  if  (n > 0)
			retrun  n * fact(n);
	 else
	 		retrun  1;
     fact(4) = 4 * fact(4) = 4 * 4 * fact(4) = 4 * 4 * 4 * fact(4) and  so  on. It leads to infinite recursion

3)  return n * fact(n-1);
      fact(4) = 4 * fact(3) = 4 * 3 * fact(2) = 4 * 3 * 2 * fact(1) = 4 * 3 * 2 * 1 * fact(0) = 4 *3 * 2 * 1 * 0 * fact(-1)
	  and  so  on. It leads to infinite recursion

4)  if  (n  ==  0)
			return   1;
	 else
	 		return  n * fact(n - 1);
*/

