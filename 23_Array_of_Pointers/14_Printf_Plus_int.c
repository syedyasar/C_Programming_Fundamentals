#include <stdio.h>
main()
{
	printf("Hyderabad\n" + 1); //  1000 + 1 = 1001  --->  From  2nd  char  till  '\0'   --->  yderabad\n
	printf("Rama Rao\n" + 2); // 2000 + 2 = 2002 --->  From   2002   till   '\0'   ---->  ma  Rao\n
	printf("Srinivas\n" + 3); //  3000 + 3 = 3003   --->  From   3003   till   '\0'   ---->   nivas\n
	printf("Rajesh\n" + 4); //  4000 + 4 = 4004  --->  From   4004   till   '\0'   ---->  sh\n
	printf("Sankar Dayal  Sarma\n" + 7); //  5000 + 7 = 5007  ---->  From   5007   till   '\0'   ---->  Dayal  Sarma\n
}


/*
1)   "Srinivas" + 1 =   string   without  1st  character   ---->  "rinivas"
       "Srinivas" + 2 =  string   without  first  2   characters   ---->  "inivas"
       "Srinivas" + 3 =  string   without  first  3  characters   ---->  "nivas"

2) They are arithmetic opeartions on addresses but not on strings

3) This  is bceoz string is internally represented by address

4) When  no   format   is  specified  in   printf,   default format  is %s but not %u
*/