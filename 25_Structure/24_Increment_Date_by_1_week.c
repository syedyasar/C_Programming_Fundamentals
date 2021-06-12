// Increment date by 1 week
#include "23_Find_Next_Date.c" // structure  defn , typedef  and all  the  functions  are  substituted
main()
{
	int  i;
	date  a = get(); // Reads date into  structure  'a'
    for(i = 1 ; i <= 7 ; i++)  // calls  next  function  7  times  in  a   loop  so  that  date  in the  structure  is  incremented  by  1  week
			next(&a);
	printf("Date  incrmented  by  1  week  :  ");
	disp(a);  // prints  date  in  the  structure
}

// comment  main  function  in  prog16a.c  file
