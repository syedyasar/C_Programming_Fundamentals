// Display  month  name  for  a  given  month  number  by  using switch  ...  case
#include<stdio.h>
int  main()
{
        int    m;
        printf("Enter  month  number (1 - 12)    :  ");
        scanf("%d" , &m);  //  50
        switch(m) 
        {
                case  1 :	 printf("January \n");
                                 break; // go  out of switch
                case  2 :   printf("February \n");
                                 break;
                case  3 :   printf("March \n");
                                 break;
                case  4 :   printf("April \n");
                                 break;
                case  5 :   printf("May \n");
                                 break;
                case  6 :   printf("June \n");
                                 break;
				case  7 :   printf("July \n");
                                 break;
                case  8 :   printf("August \n");
                                 break;                                
                case  9 :   printf("September \n");
                                 break;
                case  10 : printf("October \n");
                                 break;
                case  11 : printf("November \n");
                                 break;                
                case  12 : printf("December \n");
                                 break;
				default :   printf("Invalid  month  number \n");
					             break; // last  break   is  optional
        } // switch
        printf("Bye\n");		
} // end  of  main  
