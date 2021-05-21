// exit()  function  demo  program 
#include <stdio.h>
#include <stdlib.h>  //  for  exit  function
void  f1();  //  prototype is mandatory
main()
{
    printf("main function\n");
    f1(); 
    printf("Back to main\n");
}
void f1()
{
	int i;
    for(i = 1 ; i <= 7 ; i++)  
    {
        printf("%d\n" , i);
        if(i % 3 == 0) 
                exit(0);
        printf("Hello\n");
    }
    printf("Outside  Loop\n");
}



//  break  ---> Goes out of  loop  and switch
//  return  --->  Goes out of  function
// exit(0)  ----> Goes out of  program
//  continue  ---> goes out of   iteration
// break, continue  and  return  are keywords and they have no header file
