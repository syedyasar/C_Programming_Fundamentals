// Identify error
# include <stdio.h>
main()
{
	25++; //  Error  becoz  value++  is  not  allowed
	char  a[] = "Hyd"; //  Array  contains string
	a++; // Error  becoz  array++  is  not  allowed
	int  x = 10;
	x++++; //  Error  becoz  ++ can be used only once
}


/*
1) a++  ---> a = a + 1 ---> Valid becoz LHS  of  =  is  variable

2) 25++  ---> 25 = 25 + 1 ---> Invalid becoz LHS of = can not  be  value

3) x++++  --->  (x = x + 1)++  --> (x = 11)++  ---> 11++  ---> Error
*/
