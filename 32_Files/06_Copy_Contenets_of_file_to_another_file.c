//  Copy  contents  of  a  file  to another  file


#include  <stdio.h>

void  copy(FILE*  fp1  , FILE*  fp2)  // fp1  and  fp2  are   pointers   to  files  opened  in  the  main   function
{
	char  a[80];
	rewind(fp1);  //  moves  fp1   to  the  begining  of  1st   file
	fgets(a , 79 , fp1);  //  Reads  1st   line  of  the  1st  file  to   array  'a'
	while( !feof(fp1)) // Loop is  executed  until  end  of  1st   file  is  reached
	{
		fputs(a , fp2); //  Writes  each  line  of  1st   file  to  2nd  file
		fgets(a  , 79 , fp1);  //  Reads   next  line  of  1st   file  to   array   'a'
	}
}


//  1st    file  ------------->   Array   'a'     ------------>   2nd  file
//                    fgets()                           fputs()


main(int argc , char*argv[]) // Array   argv  contains   both  the  file  names
{
	FILE*   fp1   =   fopen(argv[1] , "r"); // 1st   file  is  opened  in   read  mode
	if(fp1 == NULL) // Is  1st   file  existing ?
			printf("File  %s  does  not  exist\n" , argv[1]);
	else
	{
		FILE*  fp2 = fopen(argv[2] , "w"); // 2nd  file  is  opened  in  write  mode
		copy(fp1 , fp2); // Contents  of   1st   file  is  copied  to  2nd  file
		printf("File  is  copied\n");
		fclose(fp1); // Both the  files  are  closed
		fclose(fp2);
	}
}


/*

prog3   a.txt    b.txt ----> execution command
argc is 3
argv[0] is "prog3 . exe"
argv[1] is "a.txt"
argv[2] is "b.txt"


1st    File        2nd   File                                     Action
-------------------------------------------------------------------------------------------------------------------
 Not  existing        -                                              Print   msg
 Existing             Not  Existing                            Create  2nd  file  and  copy    1st  file  contents  to  2nd  file
 Existing             Existing                                    copy    1st  file  contents  to  2nd  file  by  replacing  existing  data


*/
