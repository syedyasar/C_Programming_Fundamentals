// Identify  Error
#include <stdio.h>
main()
{
	int  i;
	//int  a[3] = {10 , 20 , 30 , 40 , 50}; // Error  becoz  array  contains 5  elements  and  hence  size  can  not  be  3
	int  b[4] ;  // Array  contains  garbage  values becoz  it  is  not  initialized

    //b = {10 , 20 , 30 , 40}; //  Error  becoz  array  can  not  be  initialized  later
	printf("Array  b \n");
	for(i = 0 ; i <= 3 ; i++)
			printf("%d \n" , b[i]); //  prints  b[i]  where  'i'  varies  from  0  to  3   ---> Garbage  values
	//int  c[];  //  Error  becoz  array  size  must  be  speicifed
	static  int  d[5];  //  Array  contains  0's  becoz  it  is  static  array
	printf("Array   d\n");
	for(i = 0 ; i <= 4 ; i++)
		printf("%d\n" , d[i]);// prints  d[i]  where  'i'  varies from  0  to  4  --->  0    0    0    0    0
}


/*
1) Array  can    be  initialized  at  the  time  of  declaration  itself  but  not  afterwards
 
2) int   a[] = {10 , 20 , 30 , 40}
        can  not  be  divided  into  2  statements
    i.e.  int  a[4];  ----> Okay
	       a = {10 , 20 , 30 , 40};  ---> Error

3) Variable  and   Pointer  can  be  initialized  afterwards  but  not  array
    Eg 1:   int    a   =   25;  
	              can  be  divided  into
			   int    a;
			   a  =  25;
	Eg 2:   int    *p   =   &a;  
	              can  be  divided  into
			   int    *p;
			   p =  &a;
	
4) Size  need  not  be  specified  when  array  is    initialized  and
    size  must  be  specified  when  array  is   not  initialized
	Eg1 :  int  a[]  = {10 , 20 , 30 , 40} ;   ---> Okay  and  size  is   4
	Eg2 :  int  b[];  ---> Error  becoz  size  is  not  speicifed
*/




	