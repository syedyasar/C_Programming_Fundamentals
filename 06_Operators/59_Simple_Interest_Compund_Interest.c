//    Find    Simple    Interest    and    Compound    Interest
//    inputs    :    p , t , r
//    outputs    :    si    and    ci
//    si       =       ptr  /  100                           
//    ci       =       p    *    (1  +  r  /  100)    ^   t    -  p
#include  <stdio.h>
#include  <math.h>
main()
{
                float    p , t , r ;
                printf("Enter    principle, time  and  rate  of   interest \n");
                scanf("%f%f%f" , &p, &t, &r); //  1000    3     7.5
                float   si   =   p  * t *  r / 100;
                float  ci   =  p *  pow(1 + r / 100 , t) - p;
                printf("Simple   Interest    :   %g \n" , si);
                printf("Compound  interest  :  %g  \n" , ci);
}

