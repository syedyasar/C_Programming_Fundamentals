//  Find  largest  of  3  numbers  by  using  if  and else
#include<stdio.h>
main()
{
        int  a , b , c;
        printf("Enter  any  3  numbers  \n");
        scanf("%d%d%d" , &a , &b , &c);  // 25  25   25
		if  (  a  >  b      &&  a  > c)  
			printf("Largest  number  :  %d  \n" , a); 	
		else           
		if  (b  >  c)
				printf("Largest  number  :  %d  \n" , b);
		else // b  is  not  largest
				printf("Largest  number  :  %d  \n" , c);
}

/*
1)  n-1  if  statements    are  enough    when  there  are  n  alternatives

2)  nth  one      is      else      but      not      if

3)  else  and  if  can  be  in   the  same  line  but  they  must   be separated  by   at  least  one  space

4)  replace  >  with  <  to  get  smallest  number
*/



