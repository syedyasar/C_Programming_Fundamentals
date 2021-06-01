// strcmp  function demo program
#include <stdio.h>
#include <string.h>
main()
{
		printf("%d\n" , strcmp("Rama" , "Rajesh"));  //  1   becoz  'm' > 'j'
		printf("%d\n" , strcmp("Rama" , "Sita")); // -1  becoz  'R' < 'S'
		printf("%d\n" , strcmp("Hyd" , "Hyd")); //  0  becoz  strings  are  same
		printf("%d\n" , strcmp("Rama" , "Ramana")); //  -1  becoz  '\0' < 'n'
		printf("%d\n" , strcmp("Rama Rao" , "Rama"));  // 1  becoz  ' ' > '\0'
		printf("%d\n" , strcmp("HYD" , "hyd"));  //  -1  becoz  'H' < 'h'
}

/*
1) strcmp  function  is  used  to  compare  two  strings.

2) It  returns  1 , -1  or  0  based  on  1st  non-matching  characters

3) Return  type  is  int   for  strcmp   function

				strcmp(a , b)		  Result
		-------------------------------------------------------
		            a > b                   1
		            a < b                   -1
		            a = b                   0
		      --------------------------------------------------

4) 25 == 25  is  true
    strcmp("25" , "25")  is  0  (false)
    25 == 35  is  false
    strcmp("25" , "35")  is   -1 (true)

5) Ascii  value  of  '\0'  is  0

6) How  to  compare  variables  ?    ---->     >,  <  and  ==
    How  to  compare  pointers  ?    ----->      >,  <  and    ==
	How  to  compare  characters  ?  ----->  >,  <  and  ==
	How  to  compare  strings  ?    ---->    strcmp(str1 , str2)

7) How  to  copy  variable  ?    ---->      variable1 = variable2

8) How  to  copy  pointer  ?    ----->      ptr1 = ptr2

9) How  to  copy  string  ?  ---->    strcpy(array1 , array2);    --->  string  in  array2  is  copied  to  array1

10) How  to  add  numbers    ?      ----->      variable1 + variable2

11) How  to  join  strings  ?    ------>      strcat(array1 , array2);
*/
