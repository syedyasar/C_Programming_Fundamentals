//  Find  roots  of  a  quadtratic  equation  a x^2 + b x + c = 0  where    a  ! = 0
#include<stdio.h>  //  this  is  for  scanf  and  printf
#include<math.h>  //  this  is  for  sqrt
#include<process.h>     //  this  is  for  exit
main()
{
        float  a , b , c;
        printf("Enter  values  of  a , b  and  c\n");
        scanf("%f %f %f" , &a , &b , &c);   
        if(a == 0)  //  stop  prog  execution  when  a   is  0
        {
                printf("Value  of  a  can  not  be  0\n");
                exit(0); // stops ptogram  execution
        }
        float  disc = b * b - 4 * a * c;  //  calculate  disc  when   'a'  is  non-zero
        if(disc > 0) // if  disc  is  +ve,  calculate  root1 , root2  and  print them
        {
                printf("Roots  are  real  and  distinct\n");
                float  root1 = (-b + sqrt(disc)) / (2 * a);  
                float  root2 = (-b - sqrt(disc)) / (2 * a);
                printf("Root  1  :  %g\n" , root1);  
                printf("Root  2  :  %g\n" , root2);
        }
        else
        if(disc < 0) // if  disc  is  -ve, calculate real part, imag part  and print them in the form of  complex numbers
        {
                printf("Roots  are  complex\n");
                float  rp = -b / (2 * a); 
                float  ip = sqrt(-disc) / (2 * a);  
                printf("Root  1  :    %g    +  i   *    %g  \n" , rp , ip);  
                printf("Root  2  :    %g     -  i   *    %g  \n" , rp , ip);  
        }
        else // if  disc  is  0, calculate  root  and  print  2 times
        {
                printf("Roots  are  real  and  equal \n");
                float  root = -b / ( 2 * a); 
                printf("Root  1  :  %g\n" , root); 
                printf("Root  2  :  %g\n" , root); 
        }
}


