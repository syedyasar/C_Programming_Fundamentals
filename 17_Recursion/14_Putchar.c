//  putchar  function  demo  program
#include <stdio.h>

main()
{
		char  ch = 'g';
		putchar(ch); // writes  character in  variable  ch  to  monitor ---> g
		putchar('\n');  // moves  to  next  line
		putchar('A'); // writes 'A'  to  monitor
		putchar('\n'); // moves  to  next  line
        putchar('7'); // 7
		putchar('\n'); // moves  to  next  line
        putchar('$'); // $
        putchar('\n'); // moves  to  next  line
        putchar("A"); // Error  becoz  parameter  is  string
}

/*
putchar  function
-----------------------------
1)  It  writes  a  character  to  monitor(i.e.  console)

2)  It    has  a  single  parameter  i.e.  character

3)  It  is  defined  in  <stdio.h>  file

4)  putchar(ch)  is  same  as  printf("%c" , ch)
*/

