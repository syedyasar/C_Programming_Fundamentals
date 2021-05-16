//  Display  ASCII  value  of  user  entered  character
#include<stdio.h>
int  main()
{
        char  ch;
        printf("Enter  any  character  :  ");
        scanf("%c" , &ch); //   $
        printf("Ascii  value  :  %d \n" , ch);  
}


/*
      input       scanf("%c" , &ch)  reads
      -------------------------------------------
    Enter  key           '\n'
    Tab    key            '\t'
    Space  bar          '  '
  

1) Ascii values exist only for  alphabets, digits , special chars , enter key, tab key and space bar
2) There are no ascii values for ctrl, shift, alt, insert, del, pgup, pgdn, home, end, Esc ,.........
*/
