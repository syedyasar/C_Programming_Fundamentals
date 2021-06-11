//Find outputs of the program
#include  <stdio.h>  //  This  is  for   printf    function
#include  <math.h>  //  This  is  for   sqrt    function
#include  <conio.h> //  This  is  for   getch   function


void fact()
{
}

main()
{
	printf("%u\n" ,  printf);  //  Address  of   printf   function
	printf("%u\n" , fact); //  Address  of   fact   function
	printf("%u\n" , getch);  //  Address  of   getch   function
	printf("%u\n" , sqrt); //  Address  of   sqrt   function
}


/*
1) Every function is  present  in   the  memory at an address

2) Above programs  informs  at what addresses functions are loaded

3) function  name itself is address

4) & is not required for function

5) printf (or) &printf   is   address of printf function
*/
