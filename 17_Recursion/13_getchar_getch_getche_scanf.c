// Difference between  getchar() , getche() , getch()  and scanf()   functions
#include <stdio.h>
main()
{
	char  ch;
	printf("Enter any character (getchar) : ");
	ch = getchar();  //  Reads  character   and enter  key is  mandatory  ---> 7 <enter key>
	printf("Enter any character  (getche): ");
	ch = getche();   //  Reads  character   and enter  key is  not  required  ---> 7
	printf("\nEnter any character  (scanf): ");
	scanf(" %c" , &ch);   //  Reads  character   and enter  key is  mandatory  ---> 7 <enter key>
	printf("Enter any character  (getch): ");
	ch = getch();  //  Reads  character without  echo  and enter  key is  not  required   ---> 7 
	printf("\n");
}



/*
1) First  3  are  unformatted  functions  but  scanf  is  formatted  function

2)  getche  is  a  better  function to  read a  character   among  the  4  functions
      Why?  ---> enter key is not required and input  is   echoed

      Function              Is  input  echoed ?      Enter   Key  is  required ?
	  -----------------------------------------------------------------------------------------------------------
	  getchar()                         Yes                                Yes
	  getche()                          Yes                                 No
	  scanf                               Yes                                Yes
	  getch                               No                                  No
*/
