#include <stdio.h>
void  f1()
{
	printf("f1 function\n");
}
void  f2()
{
	printf("f2 function\n");
}
void  f3()
{
	printf("f3 function\n");
}
void menu()
{
	printf("1.Execute f1 function \n");
	printf("2.Execute f2 function \n");
	printf("3.Execute f3 function \n");
	printf("4.Exit  \n");
}
main()
{
	int  ch;
	void  (*p)();  //  p   can   point  to   that   function  which  has  no   parameters  and   returns  nothing
	menu();
	printf("Enter choice : ");
	scanf("%d" , &ch); //  Reads  initial  choice
	while(ch < 4) //  Loop   is   executed  until  user   input  is    4
	{
		switch(ch)
		{
			case  1:   p = f1; //  p   points  to   f1   function
					        break;
			case 2:    p = f2; //  p   points  to   f2   function
					        break;
			case 3 :   p = f3; //  p   points  to   f3   function
					        break;
		}
		p(); //  Executes  that   function  where   'p'  points
		menu();
		printf("Enter choice : ");
		scanf("%d" , &ch); //  Reads  subsequent  choice  to  avoid  infinite  loop
	} // while
}


/*
1) All the 3 functions have got same call
    i.e. p();

2) If p points to f2 function, p() executes f2 function

3) All the 3 functions must have same signature so that they can be executed by same call

4) If functions have different signatures, 3 separate pointers are required (single ptr is not enough)
     and function calls vary from function to function
*/