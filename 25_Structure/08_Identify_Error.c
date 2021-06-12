//  Identify  error
struct  emp
{
	int  x;
	float y;
};
struct  stud
{
	int  x;
	float  y;
};
main()
{
	  struct  emp  a;
      struct  stud  b;
      a = b; // Error  becoz  they  are  of  different  types
}


//  structure=structure  is  valid  but  they  must  be  of  same  type
