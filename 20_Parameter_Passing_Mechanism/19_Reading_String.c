// How   to  read   a   string ?
#include  <stdio.h>
main()
{
	char  a[40]; //  Array  is  created
	printf("Enter  any  string  :  "); 
	scanf("%s" , a); // Reads  string  into  array   'a'
	printf("Array   contains  %s  \n" , a); // string  in  array   'a'  is  printed  until  '\0'
}


/*

1) scanf("%s" , a)  can   read  single  word  string  but  not  multi   word  string

2) It  reads  string  until  user  strikes  space bar , tab  key  or  Enter  key

3)
  Input							        scanf("%s" , a)  reads
  ------------------------------------------------------------------------------------
  Rama  Rao					           Rama 
  Sankar Dayal Sarma			   Sankar
  Hyderabad  is  green  city     Hyderabad

4)  scanf("%s" , &a);  --->  &  is  not  required  becoz  array  name  itself  is  address
*/