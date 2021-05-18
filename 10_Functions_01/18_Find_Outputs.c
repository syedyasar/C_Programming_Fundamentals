// Find  output
#include <stdio.h>
float    f1()
{
	return  25; // 25.0  is  returned  becoz  return  type  is  float
}
char    f2()
{
	return  65; //  'A'  is  returned  becoz  return  type  is  char
}
int      f3()
{
	return  'Z';   //  Ascii  value   90  is  returned  becoz  return  type  is  int
}
char      f4()
{
	return  'g';  //   'g'  is   returned 
}
char*     f5()
{
	return  "Hyd"; // string  is  returned
}
main()
{
	printf("%f\n" , f1());  //  25.0
	printf("%c\n" , f2());  // A
	printf("%d\n" , f3());  //  90
	printf("%c\n" , f4());  //  g
	printf("%s\n" , f5()); //  Hyd
}



/*
1)  return  value  is  typecasted  when  type  is  different  from  return  type

2) return  type   is   char*  when  function  returns  string
*/
