/*
Display opposite  case string
Input  --->   RamA    raO
Output --->  rAMa    RAo
*/

#include <stdio.h>
#include <ctype.h>  //   isupper() , islower() , toupper() , tolower()
void  convert(char  *a) //  'a'  points   to   string
{
	int  i;
	for(i = 0 ; a[i] != '\0' ; i++) // Process   each  character  of  the   string  until   '\0'
	{
		if (islower(a[i])) //  If   a[i]  is   lower  case   alphabet ,  convert  to  upper   case  alphabet  and  store  result  at  a[i]
				a[i] = toupper(a[i]);
		else
		if(isupper(a[i]))  //  If   a[i]  is   upper  case   alphabet ,  convert  to  lower   case  alphabet  and  store  result  at  a[i]
				a[i] = tolower(a[i]);
	}
}
//                            0       1        2       3      4     5     6     7    8
// a    -------------->     r       A        7      a             R           o    \0


main()
{
	char  a[40];
	printf("Enter  mixed  case  string : ");
	gets(a);  //  Reads  a  string  into   array
	convert(a);  //  Array  contains  opposite  case   string  replacing  existing  string
	printf("Opposite   case string : %s \n" , a); //  string  in  array   'a'
}

/*
1)  a[i]   means   each  character  of  the  string

2)  Convert   can  modify   contents  of   the  array   becoz  address  of   array  is  passed   from   the   function  call
*/