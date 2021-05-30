//Find outputs
#include <stdio.h>
main() // No  semicolon   at  the  end  of   Function  header  becoz  it  is  not  a  statement
{
	static   int  a = 3;  //  It  is  initialized  only  for  the  1st    function call  
    if(a > 0) 
    {
        printf("%d\n"  ,  a);   
        a--;  //  0
		main(); // It  is   a  subsequent  call  to  main  function  but  not  1st  call
        printf("Hello\n");
        printf("Hi\n");
        printf("%d\n" , a);
    }
    printf("Bye\n");
} // End  of  program  and  variable  'a'  is  lost


//  1st call to main is always made by OS as soon as program  is executed


/*

Output:
------

3 ->m
	2->m
		1->m
			Bye
		Hello
		Hi
		0
		Bye
	Hello
	Hi
	0
	Bye	
Hello
Hi
0
Bye	


3
2
1
Bye
Hello
Hi
0
Bye
Hello
Hi
0
Bye
Hello
Hi
0
Bye



*/
