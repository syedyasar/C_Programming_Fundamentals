//Find sum of the digits of the number
#include <stdio.h>
int   sod(int  n)   //  n  is   9247
{
    int   rem , sum = 0; 
    while(n > 0)  //  Loop  is  executed  until  'n'  becomes  0
    {
        rem = n % 10;  //  Each  digit  of  the  number  is  extracted
        sum += rem; //  Each  digit  is  added  to  sum
        n = n / 10; //   'n'  is  modified  to  avoid  infinite  loop
	}
	return   sum;  // sum  of  the  digits  of  the  number
}

main()
{
    int   n;
    printf("Enter any number : ");
    scanf("%d"  ,  &n);  // 9247
	printf("Sum  of   the  digits  :     %d  \n "  ,  sod(n));
}


/*
1)  Don't write program  logic inside main function.
      i.e.  Write program  logic in some other function(such as sod) and call the function from main    function

2)  main function does 3 things
      a) Reads  inputs
      b) call the function, send inputs to the function, function does some opeartion and returns result
      c) prints results

3) Every function must return the result but  should  not   print result
    sqrt(25) returns 5.0 but does not print 5.0
    pow(2,3) returns 8.0 but does not print 8.0
    abs(-10) returns 10 but does not print 10
	sod(9247) should return 22 but should not print 22

4)  print  results  inside  main  function  but  not  in  other  functions

5)   while(n > 0) ,  while(n != 0)   and    while(n)  are same

*/
