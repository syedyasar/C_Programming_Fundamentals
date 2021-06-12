// Find  avg  of  numbers  passed  from  function  call
#include <stdarg.h>
#include <stdio.h>

/*
                               0     1     2    3     4    5     6    7    8     9    10
a   points  to  ---->  %    d     %    f     %    l     d    %    l      f     \0
sum = 0 + 25 + 10.8 + 100000 + 2500000.689
ctr = 4
*/
//  avg("%d%f%ld%lf",  25 , 10.8 , 100000 , 2500000.689);

float  avg(char*  a , ...) // 'a'  is  control string  passed  from  function  call
{
	float  sum = 0;
	int  i , ctr = 0;
	va_list  p;
	va_start(p , a);
	for(i = 0 ; a[i] != '\0' ; i++)
	{
		if (a[i] == '%')
		{
			switch(a[i + 1])
			{
				case  'd':  //  integer
				                   sum += va_arg(p , int);
								   ctr++;
								   break;
				case  'f' : // float
								   sum += va_arg(p , double);
								   ctr++;
								   break;
				case  'l' :    switch(a[i + 2])
								   {
										case   'd'  : //  long integer
														      sum += va_arg(p , long);
														      ctr++;
														      break;
										case    'f'  : // long  float(double)
														      sum += va_arg(p , double);
														      ctr++;
													      	  break;
							  	   } //inner switch
			} //outer switch
		} //if
	} //for
	return sum / ctr;
}//function

main()
{
	float  ans1 = avg("%d%f" , 25 , 10.8);
	float  ans2 = avg("%d%d%d" , 10 , 20 , 15);
	float  ans3 = avg("%d%f%ld%lf",  25 , 10.8 , 100000 , 2500000.689);
	printf("%g\n%g\n%g\n" , ans1 , ans2 , ans3);
}


/*
1) First  parameter   in  each  function  call  is  string  i.e. control string

2) User  defined  function  avg  contains  formats  like  scanf  and  printf

3)  Format     a[i]    a[i + 1]   a[i + 2]
     -------------------------------------------------------------
        %d          %         d            -
        %f           %         f            -
        %ld         %         l            d
        %lf          %         l            f
*/
