// Find  outputs
#include <stdio.h>
int  f1()
{
		return  10; 
		return  20;  // skipped
		return  30;  // skipped
}
int  f2()
{
		return  10 , 20 , 30 ; 
}

main()
{
	printf("Begin\n");
	printf("%d\n" , f1()); // 10
	printf("%d\n" , f2()); //  30
	printf("End\n");
}


// op1 , op2 = op2


/*
1)  Function  can  return  at  most  one  value   (i.e. one   or  none)
      i.e.  Function  can  not  return  multiple  values

2)  return  is  last  executable  statement  inside  the  function

3)  Control  goes  out  of  the  function  when  return  statement  is  executed

4)  Statements  following  return  statement   are  skipped

5)  return  statement  is  used   to  go  out  of  the  function
*/
