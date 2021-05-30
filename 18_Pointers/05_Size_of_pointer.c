// sizeof  a  pointer
#include <stdio.h>
main()
{
	printf("%d\n" , sizeof(int));  // int   is  4B
	printf("%d\n" , sizeof(float)); // float  is  4B
	printf("%d\n" , sizeof(char)); //  char  is  1B
	printf("%d\n" , sizeof(int*));  //  int*   is  8B
	printf("%d\n" , sizeof(float*)); //  float*  is  8B
	printf("%d\n" , sizeof(char*)); // char*  is   8B
}




/*
1)  size of pointer is always 8B  irrespective  of   type  of  the  pointer

2)  Dec  c++  --   8B
     Code  blocks -   4B
	 Turbo  C  -   2B
*/