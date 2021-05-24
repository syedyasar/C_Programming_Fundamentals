// Find  output
#include <stdio.h>
int  x = 10; // Global variable(GV)
main()
{
	int  x = 20;  // Local  variable (LV)
	printf("%d\n" , x); // 20
}

/*
1) LV  has  higher  priority  over  GV  when  they  have  same  name

2) Function  can  not  use  GV  when  there  is  LV  with  same  name

3) Give  a  different  name  to  LV  in  order  to  use  GV

4) There  are  2  variables  in  the  above   program
*/