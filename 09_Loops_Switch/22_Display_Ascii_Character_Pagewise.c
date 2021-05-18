// Display each character and its ascii value page wise  and   page length=20
#include<stdio.h>
#include<conio.h> // for getch  function
#include<stdlib.h>// for system  function
int main()
{
	int i;
    for(i = 0 ; i <= 255 ; i++) //  Range of  Ascii values  is  0 to 255
    {
        printf("%c  %d \n" , i  ,  i ); // 
        if ( (i + 1) %  20 == 0)  //   20  % 20  ==  0  --->  True
        {
            printf("Press any key to continue \n");
            getch();
            system("cls");
        }
    }
}



/*
1) if  condition  is  true  for  the  following values of  'i'
    19,39,59,79,99,
    119,139,159,179,199
    219,239

2) There are a total of 13 pages , first 12 pages contain 20 lines each and 13th  page contains 16 lines

3) if  (i % 20  ==  0)  -----> only one line is printed in  page 1 and 20 lines each in the remaining pages

4) Hence i+1  is  used  to display  20 lines even in 1st page  also
*/
