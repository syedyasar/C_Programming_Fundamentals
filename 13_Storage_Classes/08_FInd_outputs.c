// Find  outputs
#include  <stdio.h>
main()
{   // Block   1   
        int  a = 10; // Lv  of  block  1
        {    // Block  2
                int  b = 20;  // Lv  of  block  2
				printf("a  :  %d  \n" , a);  //  outer block  variable  is  printed becoz  there  is  no  variable  'a'  in  the  inner  block  ---> 10
                printf("b  :  %d  \n" , b); // variable  of  block  2  ---> 20
        }  // variable  'b'  is  lost
		printf("a  :  %d  \n" , a); // variable  of  block  1  ---> 10  
        //printf("b  :  %d  \n" , b); // Error  becoz  there  is  no  variable  'b'  in  outer  block 
}  




//  Outer  block  variable  can  be  used  by  inner  block  but  not  vice-versa