/*
Print  number in words
input : 123456789
output : Tweleve crores thirty four lakhs fifty six thousand seven hundred eighty nine
*/

#include <stdio.h>

void words(int   n , char *units) // n  is   0  and  units  is  "Crores"
{
	 static  char*   a[] = { "" , "One" , "Two" , "Three" , "Four" , "Five" , "Six" , "Seven" , "Eight" , "Nine" , "Ten" ,
	                                   "Eleven" , "Twelve" , "Thirteen" , "Fourteen" , "Fifteen" , "Sixteen" , "Seventeen" , "Eightteen" , "Nineteen"};

	 static   char*   b[] = { ""  ,  ""  ,  "Twenty" , "Thirty" , "Forty" , "Fifty" , "Sixty" , "Seventy" , "Eighty" , "Ninety"};
	 if(n >= 20)
	  		printf("%s\t%s\t" , b[n / 10 ] , a[n % 10]);  //  Executed  when  'n'  is  between  20   and  99
	 else
			printf("%s\t" , a[n ]);  //  Executed  when  n  is  between  0  and  19
	 if(n > 0)
			printf("%s\t" , units); //  Executed  when  n  is  between  1  and  99
}
/*
words(92 , "Crores")  --->  Ninety  Two   Crores
words(50 ,  "Lakhs")  --->   Fifty  Lakhs
words(14 , "Thousand")  --->  Fourteen  Thousand
words(4 , "Hundred")  --->  Four   Hundred
words(0 , "Crores")   --->  No   Output  becoz  1st   parameter  is   0



1) If a and b are not static arrays ,  they are initialized every time function is called.
    Processor time is wasted due to repeated initialization

2) Empty strings in array 'b' are optional but empty string in array 'a' is mandatory

3)  It  is   b[n / 10 - 2]  when  empty  strings   are   omitted  from  array   'b'

4) 78   ---> b[7] , a[8]
     50   ---> b[5] , a[0]
     14  ---> a[14]
     4   ---> a[4]
     0 --> a[0]
*/
main()
{
	int n;
	printf("Enter any number (max : 999999999)  : ");
	scanf("%d" , &n); //  920017005
	if (n == 0)
			printf("Zero\n");
	else
	{
        words(n / 10000000 , "Crores");  //  Extracting  crores  from  the  given  number
        words(n / 100000 % 100 , "Lakhs");  //  //  Extracting   lakhs  from  the  given  number
        words(n / 1000 %  100 , "Thousand");  //  Extracting  Thousands  from  the  given  number
        words(n / 100 % 10 , "Hundred"); //  Extracting  hundreds  from  the  given  number
        words(n % 100 , "");  //  Extracting  last  2   digits  of  the   number
		printf("\n");
	}
}




/*
n=123456789
123456789/10000000=12
123456789/100000%100=1234%100=34
123456789/1000%100=123456%100=56
123456789/100%10=1234567%10=7
123456789%100=89
*/
