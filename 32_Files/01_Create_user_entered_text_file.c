// Create  a  text  file  i.e. Write  user  entered  text  to  the  file
#include<stdio.h>
void  create(FILE*   fp)
{
	char    a[80];
	printf("Enter  any  text  terminated  by  !  \n");
	gets(a);  // Rama  Rao
	while(*a  != '!') //  '!'  !=  '!'
	{
		fputs(a  ,  fp);  // "Hyd  is  green   city"   is  written  to  the  file
		fputs("\n" , fp); // \n  is  written  to  the  file
		gets(a); //   "!"
	}
	printf("File  is  created\n");
}



//  Keyboard   ---->   Array   a   ---->  File

main(int  argc , char*  argv[])
{
	FILE*  fp  =  fopen(argv[1] , "w");
	create(fp);
	fclose(fp);
}


/*
01_Create_user_entered_text_file   a.txt  --->  Execution  command
argc  is  2
argv[0]    is  "01_Create_user_entered_text_file.exe"
argv[1]    is  "a.txt"


Input Parameter 
*/
