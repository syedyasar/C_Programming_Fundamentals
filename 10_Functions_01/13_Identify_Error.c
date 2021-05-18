// Identify  error
void  f1(int  a , b , c) //  Error  becoz  b  and  c  are  not  declared
{
      	int  x , y , z; // Valid
}
void  f2(int  x)
{
	float  x; //  Error  becoz  parameter 'x'  already  exists
}
void   f3(int    x  =  10)  // Error  becoz  parameter  can  not be initialized 
{
	   	int  y = 20; // Valid 
}
main()
{
	f1(10 , 20 , 30);
	f2(25);
	f3(100);
}
