// Difference  between  +  and  strcat
#include <stdio.h>
#include <string.h>
main()
{
	printf("%d\n" , 10 + 20);  // 30
  	//printf("%s\n" , "10"  + "20"); //  Error  becoz  addresses  can  not  be  added (String  is  represented  by  address)
	char    a[5];
	strcpy(a , "10");
    printf("%s\n" , strcat(a , "20")); // "20"  is  concatenated  to   array  'a'  and   function  returns  "1020"   ---> 1020
    printf("%s\n" , a); // string  in   array   a   ---> 1020
}


/*
1)  String  is  internally  represented  by  address

2)  string +  string  leads to  address + address  but  addresses  can  not  be  added

3) +  is  used   to  add  numbers  and  strcat function  is  used  to  join  strings
*/
