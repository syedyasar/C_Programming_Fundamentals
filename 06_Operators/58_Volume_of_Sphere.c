// Find    volume    of    a    sphere
//  input    :    radius
//  output    :    volume    
//  volume  =   4 / 3   pi   r ^ 3
#include    <stdio.h>  // Files  can  be  included  in  any  order
#include    <math.h>
main()
{
	float    r ;
    printf("Enter    Radius    :    ");
    scanf("%f" , &r); // 3.5
    float   v   =   4.0 / 3 *  3.14159  * pow(r , 3);
    printf("Volume    :    %g \n" , v);
}

/*
1) 4 / 3 =  1
2) 4 . 0 / 3 = 1.33
*/


