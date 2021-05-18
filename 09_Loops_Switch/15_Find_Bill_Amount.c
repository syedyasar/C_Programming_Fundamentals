/* 
 Input : units,  Find bill amount
				Units                                    Cost
				--------------------------------------------------------
				First  100  units(0-99)          3.00 / unit	----> case  0		
				Next  100  units(100-199)    3.50 / unit  ---> case   1
				Next  200  units(200-399)    4.00 / unit   ---> case  2  and  3
				Next  300  units(400-699)    4.50 / unit  ---> case  4 , 5 , 6
				Above  700  units(>=700)     5.00 / unit  --->   default

*/


#include <stdio.h>
main()
{
    int units;
    float cost;
    printf("Enter  Units : ");
    scanf("%d" , &units); //  100
    int  k = units / 100;  //  Reducing  the  boundaries 
    switch(k)
    {
        case 0:  // 0 to 99
                         cost = units * 3.00;
                         break;
        case 1:   // 100  to  199
                         cost =  100 * 3.00 + (units - 100) * 3.50;
                         break;
        case 2:  
        case 3:  //  200  to  399
                         cost = 100 * 3.00 + 100 * 3.50 + (units - 200) * 4.00;
                         break;
		case 4:  
        case 5:  
        case 6:  // 400  to  699
                         cost = 100 * 3.00 + 100 * 3.50 + 200 * 4.00 + (units - 400) * 4.50;
                         break; 
		default: // units >= 700
						cost = 100 * 3.00 + 100 * 3.50 + 200 * 4.00 +  300 * 4.50 + (units - 700) * 5.00;
						break;
	}// switch	
    printf("Bill amount : %g\n" , cost);
    
}


//don't write switch(units) --> dangerous  becoz  of  too many  cases
