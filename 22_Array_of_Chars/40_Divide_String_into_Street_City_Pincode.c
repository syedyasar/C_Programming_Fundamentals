// Divide string into street , city and pincode
#include <stdio.h>
main()
{
	char  st[20]  ,  city[20];
    int  pc;
  	sscanf("Khairtabad           ,Hyd        -500004","%s         ,%s      -%d", st , city , &pc);  //  Divides  string  into  street , city  and  pincode
	printf("st : %s \n" , st); // Khairtabad
	printf("city : %s \n" , city); // Hyd
	printf("pc : %d \n" , pc); //  500004
}




/*
1)  sscanf("Khairtabad,Hyd-500004","%s,%s-%d", st , city , &pc);   ---->  st   is   "Khairtabad,Hyd-500004"  ,
                                                                                                                          city  and  pc   are  garbage  values

2)  sscanf("Khairtabad,Hyd           -500004","%s,%s           -%d", st , city , &pc);   ---->  st   is   "Khairtabad,Hyd"  ,
																																			    city  and  pc   are  garbage  values

3)  sscanf("Khairtabad		,Hyd		-500004","%s		,%s		-%d", st , city , &pc);   ---->  st   is   "Khairtabad" ,
                                                                                                                                              city   is  "Hyd"   and
                                                                                                                                              pc  is  500004

4)  Variable  is   pc   and  address   is   &pc
      Arrays   are   st  and   city  ,   addresses   are   also   st   and  pc  (&  is  not   required)
*/

