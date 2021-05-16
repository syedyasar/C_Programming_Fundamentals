// Find  output
#include <stdio.h>
main()
{
	printf("Hyderabad\b\b\bSri\rNivas\n"); //  HyderaSri\rNivas  -->  NivasaSri
}


/*
Escape  sequences
---------------------------------
          Character                                        Meaning
---------------------------------------------------------------------------------------------------------------------------------------------------------
1) New  line  character  i.e. '\n'           End  of  a  line,  go  to  begining of  next  line(same  as  enter  key)

2) Tab  character i.e. '\t'                      Generates  tab(like  tab  key)

3) Back  space  character i.e. '\b'	     Go  to  preceding  character  (like  left  arrow  key)

4) Carriage  Return i.e. '\r'		     Go  to  begining  of  same  line

5) Alarm  character  i.e. '\a'	             Beep(sound)

6) Vertical  tab  i.e. '\v'                        Go  to  next  line  but  same  column
						              If  cursor  is  at  (10,20),  it  goes  to  (11,20) --->   (like  down  arrow  key)

7) Null  character  i.e. '\0'                     End  of  a  string
---------------------------------------------------------------------------------------------------------------------------------------------------------
All  the  above  characters  are  called  escape  sequences  or  backslash  character constants
Ex  :  printf("\r");  ---> Moves  to  begining  of  same  line.   If  cursor  is  at  the  end  of  10th  line,  it  moves
      			          to  begining  of  10th  line
         printf("\n");  --->  Moves  to  begining  of  next  line.  If  cursor  is  at  the  end  of  10th  line,  it  moves
				    to  begining  of  11th  line


*/	
