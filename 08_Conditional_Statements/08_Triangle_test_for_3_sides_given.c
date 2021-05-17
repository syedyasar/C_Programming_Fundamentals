/*
Test  3  sides  form  a  triangle  or  not
1)  Find  area  if  it  is  equilateral  triangle
2)  Find  perimeter  if  it  is  isoceles  triangle
3)  Find  both  if  it  is  scalene  triangle
*/
#include  <stdio.h>
#include<math.h>
int  main()
{
        float  a , b , c;
        printf("Enter  3  sides  of  triangle  \n");
        scanf("%f%f%f" , &a , &b , &c); 
        if(a + b  >  c  &&  b + c  >  a  &&   c + a  >  b)  //  sum of   every   2  sides  must be > 3rd  side
        {    
                if(a == b  &&  b == c &&  c  ==  a)  // All  the  3 sides  are  same
                {
                        printf("Equilateral  Triangle\n");
                        printf("Area  :  %g  \n" , sqrt(3) / 4 * a * a);
                }
                else  //  not  an  equilateral  triangle
                if(a == b  ||  b == c  ||  c == a)  //  Any   2 sides  are  same
                {
                        printf("Isosceles  Triangle\n");
                        printf("Perimeter    :  %g  \n" , a + b + c);
                }
                else // not  an  isoscles  triangle 
                {
                        printf("Scalene  Triangle\n");
                        float  s = (a + b + c) / 2;  //  6
                        printf("Perimeter  :  %g\n" , 2 * s);  // 12
                        printf("Area  :  %g\n" , sqrt(s * (s - a) * (s - b) * (s - c))); //  6 *  3 * 2 * 1 = 36 = 6
                }
        }
        else
                    printf("Not  a  triangle\n");
}


/*
1)  if  within  if  is  called  nested  if

2)  use  ||  when  there  is  a  choice  and  &&  operator  when  there  is  no  choice

3)  else  always  corresponds  to  nearest  if

4)  Don't  test  isosceles  before  equilateral
*/
