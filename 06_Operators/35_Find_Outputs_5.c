// Find outputs
#include <stdio.h>
main()
{
	int   a = 4 , b = 5;
    printf("Result  :  %d \n" , a +  b * 6); // Result :   34
    printf("Result  :  \n" , a +  b * 6);  //  34  is  not  printed becoz  %d  is  missing  ----> Result  :  
	
}



/*
1) Expression is  evaluted and result is printed

2) Msg in quotes is printed as it is

3) printf can   take   variable, expression and msg

4) But scanf  can   take  only variable (along with &)

5) scanf("Result :   %d "  ,  a + b * 6) ;  ---->  Error  becoz   msg and expression  are  not  allowed  in  scanf
*/
