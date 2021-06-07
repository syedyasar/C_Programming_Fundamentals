// strtok  function  demo  program
#include <stdio.h>
#include <string.h>
main()
{
		char  a[] = "15-Aug-1947";
        printf("%s\n" , strtok(a , "-"));   //  Returns  first  token  "15"   becoz  it  is  followed  by  '-'
        printf("%s\n" , strtok(NULL , "-"));   //  Returns  2nd  token  "Aug"   becoz  it  is   also   followed  by  '-'
        printf("%s\n" , strtok(NULL , "-"));    //  Returns  3rd  token  "1947"   becoz  it  is  followed  by  '\0'
        printf("%d\n" , strtok(NULL , "-"));  //  Returns   NULL  becoz   there  are  no  more  tokens
}


/*
1) It  is  used  to  retrieve  tokens  of  the  string  one  by  one

2) It  has  2  parameters
    a)  (i)  string  for  the  first  function  call
         (ii)  NULL  for  the  remaining  calls
    b)  delimeter

3) Return  type  of  the  function  is  char*

4) strtok()  returns  NULL  when  there  are  no  more  tokens

5) NULL  is  a  predefined macro  in  <stdio.h>   file   with  value  0

6)  strtok(a , "-")   returns  "15" ,
     strtok(a , "-")   returns  "15" ,
     strtok(a , "-")   returns  "15"  and   so   on

7)  strtok(a , "-")   returns  "15"   becoz   15  is  followed  by  '-',
     strtok(NULL , "-")   returns  "Aug"   becoz  "Aug"  is  followed  by  '-'
     strtok(NULL , "any  delimeter")   returns  "1947"  becoz  it  is  last  token,
     strtok(NULL , "any  delimeter")   returns  NULL  becoz   there   are  no  more  tokens

8) strtok  is  defined  in  <string.h>  file
*/
