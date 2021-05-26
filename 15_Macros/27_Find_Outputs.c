//Find outputs
int  f1(); //  ()  must  be  empty  in  the  function  prototype
int  f2(); 
#pragma  startup   f1   //  f1  function   is   executed  before  execution  of  main 
#pragma  exit   f2  //  f2   function is   executed  after  main  function  terminates
main() 
{
	printf("%d\n" , f1(25));  // 100
	printf("main function\n");
	printf("%d\n" , f2(35));  //  200
} 
int   f1(int x)  
{
	printf("%d\n" , x); 
	return 100; 
}
int   f2(int  x) 
{
	printf("%d\n" , x); 
	return   200; 
}

/*
1)  If   O.S.  calls  f1   and  f2    functions  ,   x   is   garbage  value  and   return  value  100 (or)  200  is  ignored 
     becoz  there  is  no    function   call

2) int  f1(int  x);  ---->  Error  becoz  ()  must  be  empty
    int  f2(int   x); ---->   Error  becoz  ()  must  be   empty

3)  #pragma   startup   f1;  ---->  Error  becoz  ;  is  not  allowed

4)  #pragma   startup   f1()  ---->   Error  becoz  ()  are  not  allowed
*/

