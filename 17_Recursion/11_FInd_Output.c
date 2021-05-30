// Same program  with out  static 
#include <stdio.h>
main() 
{
    int  a = 3;  
    if(a > 0) // 3 > 0  ---> true
    {
        printf("%d\n"  ,  a);  
        a--;  
        main(); 
        printf("Hello\n");
        printf("Hi\n");
        printf("%d\n" , a);
    }
    printf("Bye\n");
} 

//  3  is  printed  continuously  until  stack  is  full

/*


*/
