// enum  demo  program
#include <stdio.h>
enum  boolean  {false , true};  //   enum  definition
typedef   enum  boolean  bool; // enum  boolean  is   given  a   shortcut  name  bool
main()
{
	bool   b = true; // 1  is  assigned  to  variable  'b'   but  not  true
	printf("%d\n" , b); // 1
	printf("%d\n" , sizeof(b)); // 4B
	//boolean  x;  //  Error
	enum  boolean  y = false; //  'y'  is  variable  of  type  enum  boolean
	printf("%d\n" , y); // 0
}











/*
1) boolean is enum tag

2) false  and  true are enumerators

3) 1st enumerator value is 0  and 2nd enumerator value is 1

4) enumerators are nothing but integers

5) %d  is  used  for enumerators

6) If there are 'n'  number of enumerators, their values are 0 to n-1

7) bool x = true; ---> 'x' is variable  of type bool and 1 is assigned to variable  'x' but not true

8) bool x;     is same as       enum boolean x;

9) Advantage of  enum is  that  we  can define our  own  data  type  like  bool
    i.e. bool  is   a  user defined  data type
*/
