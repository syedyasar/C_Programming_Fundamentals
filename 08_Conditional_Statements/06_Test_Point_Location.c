//  Test  a  point  (x,y)  lies  in  1st  quad , 2nd  quad , 3rd  quad , 4th    quad , x-axis , y-axis  or  origin
#include  <stdio.h>
int  main()
{
        float  x , y;
        printf("Enter  values  of  point  (x,y) \n");
        scanf("%f%f",&x,&y);  //  3   4
        if(x > 0  &&  y > 0)
                printf("1st  quadrant\n");
        else //  point is  not  in  the  1st  quadrant
        if(x < 0  &&  y > 0)
                printf("2nd  quadrant\n");
        else //  point is  not  in  the  2nd   quadrant  also
        if(x < 0  &&  y < 0)
                printf("3rd  quadrant\n");
        else //  point is  not  in  the  3rd  quadrant also
        if(x > 0  &&  y < 0)
                printf("4th  quadrant\n");
        else //  point is  not  in  any of the 4 quadrants
        if(x != 0  &&  y == 0)
                printf("X-Axis\n");
        else //  point  is  not  on  x-axis
        if(x == 0  &&  y != 0)
                printf("Y-Axis\n");
        else // point is  not  on  y-axis  also		
                printf("Origin\n");
}


/*
1) else  is  necessary  so  that  program  execution  becomes  fast
    i.e.  When  any  if  condition  is  true,  remaining  if  conditions  are  not  tested  due  to  else.
    Therefore   program  execution    becomes  fast  and  processor  time  is  saved
    Hence  use  else

2)  n-1  if  stmts  are  enough  when  there  are  n  alternatives.  nth  one  is  else  but  not  if

3)  Above  program  contains  else-if  ladder

4) The above  if  statements can be written in  any  order
*/