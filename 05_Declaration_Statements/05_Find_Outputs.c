// Find  outputs
#include <stdio.h>
main()
{
		char  ch = 'A';
		printf("%c \n" , ch);  // value of variable ch  ----> A
		printf("%d \n" , ch);  // 'A'  in  the form of  integer  ---> Ascii value 65
		printf("%u  \n" , &ch);//  Address of  variable  ch ---> may be 2000
		printf("%d \n" , sizeof(ch)); // size of variable  ch  ---> 1  byte
}

