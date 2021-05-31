//  How  to  read  mutiword  string  with  scanf  function
#include  <stdio.h>
main()
{
	char  a[40]; //  Array  is  created
	printf("Enter  any  string  :  "); 
	scanf("%[^\n]" , a); //  It can  read  multiword  string  until  user  strikes  enter  key
	printf("Array   contains  %s  \n" , a); // string  in  array   'a'  is  printed  until  '\0'
}


//  scanf("%[^\t]" , a)  reads  string  until   user  strikes   tab  key