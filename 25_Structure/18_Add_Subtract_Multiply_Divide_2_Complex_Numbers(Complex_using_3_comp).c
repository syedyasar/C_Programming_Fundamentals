// Repeat  same program {14a]  with  3  structures




//   Add , subtract , multiple  and  divide  2  complex  numbers   and  represent  complex  number  by  structure
#include <stdio.h>
struct  complex // structure  definition  and  complex  is  tag
{
	float  rp , ip; // They  are  members  of  the  structure
}; // ;  means  end  of  the  structure  definition

typedef   struct  complex  com; // struct  complex  is  given  another name com

com  get()
{
	com  a; // structure  is  created
	printf("Enter real  part and imag part \n");
	scanf("%f%f" , &a . rp , &a . ip); // reads   inputs  to  structure  'a'
	return   a; //  structure  is  returned  before  it  is  lost
} // structure  'a'  is  lost

// com  b = get()

/*
1) return  variable;   ---> single value is returned
2) return  structure;  ---> multiple values are returned
3)  return  stmt  can  return  multiple  values   by  returning  structute
4)  get  function  returns  2 values
*/

void  disp(com  a)
{
	if (a . ip < 0) // structure  is   printed  in  the  form  of  complex  number
		printf("%g  -i  %g\n" , a . rp , -a . ip);
	else
		printf("%g  +i %g\n" , a . rp , a . ip);
}


com   add(com  a , com  b)
{
		com  c; // structure  is   created  for  storing  the  results
		c . rp = a . rp + b . rp; // structures  'a'  and  'b'  are  added  and  results  are  stored  in  structure  'c'
		c . ip = a . ip + b . ip;
		return  c; // structure  is   returned  before it  is  lost
} // structure  'c'  is  lost

// com   d   =  add(a , b);

com   sub(com  a , com  b)
{
		com  c; // structure  is   created  for  storing  the  results
		c . rp = a . rp - b . rp; // structures  'a'  and  'b'  are   subtracted   and  results  are  stored  in  structure  'c'
		c . ip = a . ip - b . ip;
		return  c; // structure  is   returned  before it  is  lost
} // structure  'c'  is  lost

com   mul(com  a , com  b)
{
		com  c; // structure  is   created  for  storing  the  results
		c . rp = a . rp * b . rp - a . ip * b . ip; // structures  a  and  b  are  multiplied   and  results  are  stored in  structure  'c'
		c . ip = a . rp * b . ip + a . ip * b . rp;
		return  c; // structure  is   returned  before it  is  lost
} // structure  'c'  is  lost


/*
a  --->  3    4
b  ---->   5    6
(3+i4) * (5+i6)  ----> 15 + 18i + 20i - 24  ---> (15 - 24) + i(18 + 20)  ---> -9 + i38
*/


com   div(com  a , com  b)
{
		com  c; // structure  is   created  for  storing  the  results
		c . rp = (a . rp * b . rp + a . ip * b . ip) / (b . rp * b . rp  + b . ip * b . ip); // structures  a  and  b   are  divided  and  results  are  stored  in  structure  'c'
		c . ip = (a . ip * b . rp - a . rp * b . ip) / (b . rp * b . rp  + b . ip * b . ip);
		return  c; // structure  is   returned  before it  is  lost
} // structure  'c'  is  lost

/*
a   --->   3    4
b   --->   5    6

3+i4        5-i6
--------  *   -------  =     (15 - 18i + 20i + 24 ) /  (25 + 36) =  (15 + 24) / (25 + 36) + i (20 - 18) / (25 + 36)
5+i6        5-i6
*/


main()
{
    com  a = get(); // Reads  a   complex  number  to  structure  'a'
	com  b = get();  // Reads  a   complex  number  to  structure  'b'
	com  c = add(a , b); 
	printf("Sum  :  ");
	disp(c); // prints  contents  of  structure  'c'  in  the  form  of  complex  number
	c = sub(a , b); // d = a - b	
	printf("Difference :  ");
	disp(c); // prints  contents  of  structure  'd'  in  the  form  of  complex  number	
	c = mul(a , b); // e = a * b	
	printf("Product :  ");
	disp(c); // prints  contents  of  structure  'e'  in  the  form  of  complex  number
	c = div(a , b); // f  = a / b	
	printf("Division  :  ");
	disp(c); // prints  contents  of  structure  'f'  in  the  form  of  complex  number		

}




/*
1) com  a , b;
    a + b , a * b , a > b , a == b , a++ , a-- , ...... are invalid

2)  variable + variable , variable * variable , variable > variable , variable == variable , variable ++ , variable-- , ...
     are valid
     Struct + struct , struct * struct , struct > struct , struct == struct , struct++ , struct-- ,.... are invalid
     No operator can be used between structures except few operators

3) struct = struct , struct . member , &struct , sizeof(struct) , .....are valid
*/
