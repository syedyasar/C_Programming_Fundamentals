//  Display  arguments  passed  from  function call
#include  <stdarg.h>
#include  <stdio.h>
void  disp(int  n , char  type , ...)
{
	int  i;
	va_list  p; // Variable  'p'  is  created
	va_start(p , type); // p  points  to 2nd parameter  of  the   function  call
	switch(type)
	{
		case 'I':  for(i = 1 ; i <= n ; i++)
								printf("%d\t" , va_arg(p , int)); // Print  each parameter  of  function  call  from  3rd  parameter
				       printf("\n");
				       break;
		case 'F':  	for(i = 1 ; i <= n ; i++)
								printf("%g\t" , va_arg(p , double)); // va_arg(p , float)  is  invalid
						printf("\n");
						break;
		case 'C':  for(i = 1 ; i <= n ; i++)
								printf("%c\t" , va_arg(p , int)); // va_arg(p , char) is  invalid
						printf("\n");
						break;
	}
}

// va_start(p , n)  is  invalid  becoz  last  parameter  in the  function  header  is   type  but  not  'n'

main()
{
	disp(4 , 'I' , 10 , 20 , 15 , 18);  //  10   20   15   18
	disp(3 , 'F' , 10.8f , 20.6f , 15.2f); // 10.8    20.6    15.2
	disp(5 , 'C' , 'V' , 'A' , 'M' , 'S' , 'I'); //  V    A   M    S     I
	disp(3 , 'I' , 65 , 10.8 , 'g'); //  65       Garbage   Ascii value  of  'g'
	disp(3 , 'F' , 65 , 10.8 , 'g'); //  Garbage value    10.8       Garbage
	disp(3 , 'C' , 65 , 10.8 , 'g'); //  A    Garbage   g
}


