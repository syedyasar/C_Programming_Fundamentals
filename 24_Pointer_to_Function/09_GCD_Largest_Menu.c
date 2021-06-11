// Find gcd and largest of 2 numbers
#include <stdio.h>
int  max(int  x , int  y)
{
	if (x > y)
		return  x;
	else
		return  y;
}

int  gcd(int  m , int  n)
{
	if(n > 0)
		return  gcd(n , m % n);
	else
		return  m;
}

void  menu()
{
	printf("1 . Largest of 2 numbers \n");
	printf("2 . Gcd of 2 numbers\n");
	printf("3 . Exit  \n");
}

main()
{
	int  ch , x , y;
	int (*p)(int , int); //  p   can   point  to   either  max   function  or  gcd   function
	menu();
	printf("Enter  choice : ");
	scanf("%d" , &ch); //  2
	while(ch < 3)  //  Loop   is   executed  until  user   input  is   3
	{
		switch(ch)
		{
			case  1:   p = max; //  p   points  to  max   function
         					break;
			case 2:    p = gcd;  //  p   points  to  gcd   function
		        			break;
		}
		printf("Enter any 2 numebers \n");
		scanf("%d%d" , &x , &y);
		printf("Result :  %d\n" , p(x , y));  //  Executes   that   function  where   'p'  points
		menu();
		printf("Enter choice	 : ");
		scanf("%d" , &ch);
	} // while
}

/*
1) Both max and gcd have got same signature
    int  max(int , int);
    int  gcd(int , int);

2) Hence they can be executed by same call
     i.e. p(12 , 15);  ---> executes  that function where p points
*/
