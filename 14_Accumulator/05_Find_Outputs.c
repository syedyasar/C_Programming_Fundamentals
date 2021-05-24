//_AX  is  supported  by  Turbo  c++   compiler   but not by  gcc  compiler

// Find output
void  f1()
{
	_BX=10;
	_CX=20;
	_DX=30;
	_EX = 40; //  Error  becoz  there is  no  _EX  register  
}
main()
{
	f1();
}



/*
1) f1  function  returns  nothing  becoz  neither  return  statement is used nor  accumulator

2) _BX, _CX  and _DX are registers but not accumulator registers.

3) _AX is   an  accumulator  register
*/
