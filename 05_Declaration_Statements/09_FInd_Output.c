// Find  outputs
#include <stdio.h>
main()
{
        char  a[20]; 
		char  b[] = "Rama Rao"; 
		char  c[20] = "Rama Rao";  
		printf("%s \n" , a); //  String in  array  'a'  ---> Garbage string
		printf("%s \n" , b);  // string in  array  'b'  ---> Rama Rao
		printf("%s \n" , c);  // string in  array  'c'   ---> Rama Rao
		printf("%d \n" , sizeof(a)); //  size of  array  'a'  ---> 20 bytes
		printf("%d \n" , sizeof(b)); //  size of  array  'b'  ---> 9 bytes
		printf("%d \n" , sizeof(c)); //  size of  array  'c'  ---> 20 bytes
		//char  d[]; // Error  becoz size is not speicified 
}



// 11  garbage chars of array  'c'  are not  printed  becoz  they are after '\0'

