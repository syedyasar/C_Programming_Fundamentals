//Test  a   point (x,y) lies inside ,  outside  or on  the circle.
//Radius  is   'r'  and  center  is   origin

#include <stdio.h>

main()
{
        float  x , y, r,t;
        printf("Enter  radius of Circle \n");
        scanf("%f",&r);
        printf("Enter  values  of  point  (x,y) \n");
        scanf("%f%f",&x,&y);
        t=x*x +y*y -r*r;
        if(t>0){
            printf("The point (%g,%g) lies outside the Circle with radius %g",x,y,r);
        }
        else if(t==0){
            printf("The point (%g,%g) lies on the Circle with radius %g",x,y,r);
        }
        else{
            printf("The point (%g,%g) lies Inside the Circle with radius %g",x,y,r);
        }

}

