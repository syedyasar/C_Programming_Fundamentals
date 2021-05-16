//  Same  program  in    a  different  manner
#include<stdio.h>
int  main()
{
        printf("%d    \n"  , sizeof( 25 )); //  25  is  int  and hence 4B
        printf("%d    \n" , sizeof( 10.8f )); // 10.8f  is  float  and hence 4B
		printf("%d   \n" , sizeof( 'g' )); //  char is  internally  represented  by  int (Ascii value)  and hence 4B
		printf("%d   \n" , sizeof( (char)'g' )); // 'g'  is  converted to  char  and hence 1B
        printf("%d    \n" , sizeof( 75L ));  //  75L is  long  integer  and hence 4B
        printf("%d     \n" , sizeof( 10.8 )); // 10.8  is  double and hence 8B
        printf("%d    \n" , sizeof( 86LL )); // 86LL  is  long long integer and hence 8B
        printf("%d    \n" , sizeof( 89U )); //  89U is unsigned int  and hence 4B
        printf("%d    \n" , sizeof("Hyd")); // "Hyd"  contains 4  chars and  hence 4B
}

