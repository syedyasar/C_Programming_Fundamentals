/*
1) Reverse each word of the sentence
input : Hyd is green city
output : dyH  si   neerg    ytic
main()  ---> reads string , calls the function reverse() and display result
reverse()  ---> create an array, store result in the array and return array
Hint : Use  strtok() , strrev()  and strcat()
*/
#include <stdio.h>
#include <string.h>
char*    reverse(char  *a)  //  a   points  to   "Hyd   is   green   city"
{
	static   char   b[100];  //  Array  is  created  to  store   the   result
	strcpy(b , "");  //  Array  is  initialized  with  empty  string
	char*  token = strtok(a , " ");  //  1st  token  of   the  string
	while(token != NULL)  //  Loop  is  executed  until   there   are  no   more   tokens
	{
			strcat(b , strrev(token));  //  Reverse  each   token  and  concatenate  to  array  'b'  along  with  "  "
			strcat(b , " ");
			token = strtok(NULL , " ");  // Next  token  of   the  string
	}
	return   b; //  Array  is   returned
} // Array   'b'   is  not  lost   becoz  it  is   a   static   array

// Returning address of array is as good as returning array

main()
{
	char  a[100];
	printf("Enter  any  senetence : ");
	gets(a);
	char*   c= reverse(a);   //  'c'  points  to   array  'b'
	printf("Result :  %s \n" , c);  //  Array  'b'  is   printed  thru   pointer  'c'
}
