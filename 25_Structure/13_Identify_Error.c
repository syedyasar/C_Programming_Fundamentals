// Identify  Error
main()
{
	typedef   int   integer;
	integer  y;
}
void  f1()
{
	 	integer  x; //  Error  becoz  other  functions   can  not  use  new  name  integer
}

/*
1)  Since  typedef  is  used  local  to  main  function,  other  funcions  can  not  use  new  name  integer.

2) On  the  otherhand,  if  typedef  is  global,  every  function  can  use  new  name  integer
*/
