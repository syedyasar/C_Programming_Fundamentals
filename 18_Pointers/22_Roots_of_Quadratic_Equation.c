/*
Find  roots of a quadtratic equation
void  test(float  *p )  ---> Ask  user  to reenter  another  value  for a  when a  is  0
void  roots(float  a,  float  b ,  float  c , float  *p1  , float  *p2)
----> store  root1  and  root2    in  *p1 and *p2  when   disc  is  +ve  and
       store  real  part  and  imag  part  in  *p1 and *p2  when   disc  is  -ve
main()  ---> Reads  inputs , call   test and roots  function and print results
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>  //  true  and   false
bool  roots(float  a , float  b , float  c , float  *p1 , float  *p2) //  p1  and  p2  are  pointers  to  main  function   variables  r1  and  r2
{
	float  disc = b * b - 4 * a * c; // disc  is  calculated
	if(disc >= 0) // if  disc  is  +ve  or   0 ,  calculate  root1 and  root2 ,  store  results  in  *p1  and  *p2
	{
		*p1 = (-b + sqrt(disc)) / (2 * a);
		*p2 = (-b - sqrt(disc)) / (2 * a);
		return   true; //  root1  and  root2
	}
	else // If  disc  is  -ve , calculate  real  part  and  imag  part ,  store  results  in  *p1  and  *p2
	{
		*p1 = -b / (2 * a);
		*p2 = sqrt(-disc) / (2 * a);
		return  false; //  real  part and  imag  part
	}
}
void  test(float*   p)  //  p   points  to  main  function  variable  'a'
{
	while(*p == 0) // Loop  is  executed  until  *p  is  non-zero
	{
		printf("Value  of  a  can  not  be  zero , reenter :  ");
		scanf("%f" , p); //  Reads  input  to variable  'a'   becoz  'p'  points  to  variable  'a'
	}
}



/*
1) test(a) --->  Value of a continues to be 0  even after execution of test function .
			           Hence   send address of variable   'a' to test function so that function can modify value of 'a'
			           from 0 to non zero

2) scanf("%d" , &variable);
    scanf("%d" , pointer);
*/

main()
{
	float  a , b , c , r1 , r2;
	printf("Enter  values  of  a , b , c \n");
	scanf("%f%f%f" , &a , &b , &c);
	test(&a); // modifies  value  of  'a'  from  0   to  non-zero
	bool  ans = roots(a , b , c , &r1 , &r2);  // Function  stores  results  in  r1  and  r2
	if(ans) //  if   roots  function  returns   true , r1  and  r2  contains  root1  and  root2
	{
		printf("Root 1 : %g \n" , r1); // They  are  printed  in  the  form  of  real  numbers
		printf("Root 2 : %g \n" , r2);
	}
	else  //  if   roots  function  returns   false , r1  and  r2  contains  realpart  and  imagpart
	{
		printf("Root 1 : %g +  i  * %g \n" , r1 , r2); //  They are  printed  in the  form  of  complex  numbers
		printf("Root 2 : %g  -  i  * %g \n" , r1 , r2); 
	}
}






/*
How to return 10 values from the function ?
There are 2 options
1) f1(10   addresses);
     send 10 addresses to the function so that function can return 10 values indirectly and
	 it is  a  void function

2) ans = f1(9   addresses);
    send 9 addresses to the function so that function can return 9 values indirectly and
	10 value  is   returned   with return stmt. It is non-void function
*/