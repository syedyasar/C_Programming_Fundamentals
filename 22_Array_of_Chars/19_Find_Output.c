// Find   output
#include <stdio.h>
#include <string.h>
main()
{
	char  a[] = "Sankar Dayal  Sarma" , b[] = "Rama Rao";
	strcat(a + 7  , b + 5); // string   at  b+5( i.e  "Rao")  is  concatenated  at  the  end  of  a+7
    printf("%s\n" , a); //  Sankar  Dayal   SarmaRao
}


/*
           a   a+1  a+2  a+3  a+4   a+5   a+6   a+7  a+8   a+9     a+10    a+11  ........
a   -->  S   a        n      k       a       r                  D     a       y           a         l        S   a   r  m   a  \0


             b      b+1   b+2    b+3   b+4    b+5    b+6    b+7    b+8
b  --->    R        a      m        a                   R       a        o        \0


1) Concatenation  happens  at  the  end  only  but  not  at  address  a + 7

2)  strcat( any   address  between  a  and  a + 18 , b + 5) ;  ---> "Rao"  is  concateneted  at  the  end  of  array   'a'
*/