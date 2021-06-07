// Compare 2 strings without strcmp()  and  use  subscripts
#include <stdio.h>
int  compare(char*  a , char*  b)  //  'a'  and  'b'   are  pointers  to strings
{
	int  i = 0;  //  starting  subscript
	while(a[i] == b[i]) // Keep  comparing  character  until   they  are  different
	{
			if(a[i] == '\0')  // break  the  loop  when  '\0'   is  reached  in  either  string
					break;
			i++;  // Moves   to  next  character
	}
	if(a[i] > b[i])
		return  1;  //  1st  string  >  2nd  string
	else
	if(a[i] < b[i])
		return  -1;    //  1st  string  <  2nd  string
	else
		return  0;  //  strings  are  same
}

/*
               0       1     2     3     4
a   ---->    R      A     M    A     \0

               0      1      2     3     4      5    6
b  ----->    R      A     M    A     N     A    \0
*/
main()
{
	char  a[40] , b[40];  // 2   arrays   are  created
	printf("Enter first string : ");
	gets(a);  //  Reads  1st   string  into   array   'a'
	printf("Enter second string : ");
	gets(b);     //  Reads  2nd   string  into   array   'b'
	int  ans = compare(a , b);  //  Function  returns  1  , -1  or  0
	if(ans ==  1)
			printf("1st string > 2nd string \n");
	else
	if(ans ==  -1)
			printf("1st string < 2nd string \n");
	else
			printf("Strings   are  same \n");
}
