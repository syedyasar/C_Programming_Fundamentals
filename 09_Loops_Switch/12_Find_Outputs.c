//  Find outputs
#include  <stdio.h>
main()
{
        int  a = 1 , b = 1 ;
        switch(a)  
        {
			case  1 :  printf("case  1  of  outer  switch\n");
			                switch(b) 
			                {    
								case  1 :  printf("case  1  of  inner  switch\n");
						                        break; 
		                        case  2 :  printf("case  2  of  inner  switch\n");
						                        break;
			                }
			                printf("Out  of  inner  switch\n");			           
	        case  2  : printf("case  2  of  outer  switch\n");
				            break;
		}
        printf("Out  of  outer  switch\n");
}
