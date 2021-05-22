/*
Find average of inputs which are terminated by ctrl+z
1) ctrl + z  means  end of  inputs

2) when input is  ctrl + z, scanf  reads nothing  and  returns  -1

3) Hint : use  scanf  inside  while  loop
*/
#include <stdio.h>
main()
{
    int  sum = 0 , ctr = 0 , x;
    printf("Enter  inputs  terminated  by  ctrl + z  \n");
    
//    printf("%d",EOF);
//   while(scanf("%d" , &x)  !=  EOF)      
//    while(scanf("%d" , &x) != -1)  
while(scanf("%d" , &x)  !=  EOF)   
    {
        sum += x; // sum = 0 + 10 + 20 + 13 = 43
        ctr++; //  3
    }
    printf("Avg : %g\n",   (float) sum / ctr); //  43.0 / 3 = 14.33
}


/*
10
20
13
ctrl+z


1) ctrl + z  means  end  of  inputs i.e. no more inputs

2) when input is ctrl+z, scanf reads nothing and returns -1

3) while loop is executed until user input is ctrl+z

4) ctrl+d in  Unix  and  ctrl+z in  Windows

5) EOF (End of the File) is a predefined macro with value -1
*/
