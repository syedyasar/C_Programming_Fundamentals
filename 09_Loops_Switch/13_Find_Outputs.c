//  Find outputs
#include  <stdio.h>
main()
{
        int  a = 1, b = 1 ;
		switch(a)  // Nothing  is   executed  in  outer switch becoz  there  are  no  cases
        {
			switch(b)  // Not  executed becoz  there   are  no  cases  in  outer switch
			{    
					case  1 :  printf("case  1  of  inner  switch\n");
			                        break;  
		            case  2 :  printf("case  2  of  inner  switch\n");
			                        break;
			}
		}
        printf("Out  of  outer  switch\n");
}
