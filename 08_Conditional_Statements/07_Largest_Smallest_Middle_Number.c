//  Find  largest , smallest  and  middle  of  3  numbers
#include<stdio.h>
main()
{
        int  a , b , c , max , mid , min;
        printf("Enter  any  3  numbers  \n");
        scanf("%d%d%d" , &a , &b , &c);  //  10   20   40
		max = a;  //  Assume  that  'a'  is  largest  number
        if(b > max)  //  if  b > max , copy 'b'  to max
                max = b;  
        if(c > max)  // if  c  > max , copy 'c'  to max
                max = c;                 
        min = a;  // Assume that 'a' is smallest number
        if(b < min)  // which ever  number is < min , copy that number to min
                min = b;
        if(c < min) 
                min = c; 
		mid = (a + b + c) - (max + min); // Eliminate largest and smallest  numbers  from  a,b,c  to get  middle number
		printf("Largest  number  :  %d\n" , max);
	    printf("Smallest  number  :  %d\n" , min);
	    printf("middle  number  :  %d\n" , mid);
}

/*
1)  We  will  not  get  largest  and  smallest  numbers  when  there  is  else.   Hence,  don't  use  else

2)  Some  times  else  is  necessary    and  some  times  else  is  not  required
     It  all  depends  on  the  program
*/