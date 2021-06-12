// identify error
struct  s1
{
	int  a : 33;  // Error  becoz  33 >  length  of  integer (i.e. 32 bits)
	char  b : 9; // Error  becoz  9 > length of  char(i.e. 8  bits)
	unsigned  c : 33; // Error  becoz  33 >  length  of  unsigned (i.e. 32 bits)
	short  d : 17; // Error  becoz  17 >  length  of  short  integer (i.e. 16 bits)
};
main()
{
}



/*
1) length  of  int  and  unsigned   bit  fields  can  not  be  more  than  32 .

2) length  of  char   bit field  can  not  be  more  than  8

3) length  of  short  bit  field  can  not  be  more  than  16
*/