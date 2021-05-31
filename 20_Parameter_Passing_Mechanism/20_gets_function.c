//  gets   function
#include  <stdio.h>
main()
{
	char  a[40]; //  Array  is  created
	printf("Enter  any  string  :  "); 
	gets(a);  //  reads  string into  array
	printf("Array   contains  %s  \n" , a); // string  in  array   'a'  is  printed  until  '\0'
}


/*

1) gets   function   can   read  multiword  string  

2) It  reads  string  until  user  strikes   Enter  key

3)
  Input							                gets(a)  reads
  ------------------------------------------------------------------------------------
  Rama  Rao					           Rama  Rao
  Sankar Dayal Sarma			   Sankar  Dayal  Sarma
  Hyderabad  is  green  city     Hyderabad  is  green  city

*/