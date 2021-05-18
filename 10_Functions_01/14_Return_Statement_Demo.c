// return statement demo program
#include <stdio.h>
int  f1()
{
      	return  10; // 10  is   returned  to  function  call  i.e. f1()
}
int  f2()
{
    	int  x = 25;
		return  x; // value  of  variable  is   returned  but  not  variable
}
int  f3()
{
    	int  a = 4, b = 5, c = 6;
		return  a + b * c; // Result  of  the  expression  is   returned 
}

main()
{
	printf("%d\n" ,  f1() ); //  10
	printf("%d\n" ,  f2() );  // 25
	printf("%d\n" ,  f3() );  // 34
}


/*
1) A  function  can  return  value  by  using  return  statement
     Eg :  return  25;  ----> 25  is  returned  to  function  call
	         printf("%d" , f1());   becomes  printf("%d" , 25);

2) Value  returned  by  the  function  is  returned  to  function  call
    Therefore  every  function  call  is  value  except  when  it  is  void  function
*/
