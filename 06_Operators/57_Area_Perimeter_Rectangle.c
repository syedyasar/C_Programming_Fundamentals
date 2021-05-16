//    Find    area    and    perimeter    of    rectangle
//    inputs    :    length    and    breadth
//    outputs    :    area    and    perimeter
#include    <stdio.h>
main()
{
                float    l , b; 
                printf("Enter    Length     and  Breadth \n");
                scanf("%f %f" , &l , &b); // 4
                float   area   =   l * b; // 4  5 = 20
                float   peri   =   2 *  (l +  b);  
                printf("Area    :    %g    \n" , area);  // Area :  20
                printf("Perimeter    :    %g    \n" , peri); // Perimeter :  18
}


/*
l = 4
b = 5
2 * (l + b)  --->  18
2 * l + b ---> 13
*/

