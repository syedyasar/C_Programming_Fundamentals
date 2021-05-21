// return   statement  demo  program 
#include <stdio.h>
void  f1();  //  prototype is mandatory
main()
{
    printf("main function\n");
    f1(); 
    printf("Back to main\n");
}
void   f1()
{
	int i;
    for(i = 1 ; i <= 7 ; i++)  
    {
        printf("%d\n" , i);
        if(i % 3 == 0) 
                return; // go  out  of  the  function
        printf("Hello\n");
    }
    printf("Outside  Loop\n");
}


//  return statement can be used inside void  function  but  it  can not return any value

