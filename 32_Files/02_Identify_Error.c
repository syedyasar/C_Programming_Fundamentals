// Identify  Error
#include  <stdio.h>
main()
{
	//fopen("c:\srinivas\a.txt" , "r"); //  Error  due  to   \
	
	fopen("c:\\srinivas\\b.txt" , "r");  // okay  and  \\  is  interpreted  as  \
	
	FILE*  fp1 =  fopen("c.txt" , "r");
	FILE*  fp2 = fopen("d.txt" , "r");  // File  d.txt   is  opened  in  read   mode
	FILE*  fp3 = fopen("d.txt" , "w"); //  Same  file  is  opened  in  write  mode
}


/*
1) To  open  file  of  a  different  directory,  path  is  required.
    Eg : fopen("c:\\India\\Ap\\vizag\\a.txt" , "r");  --->  File  a.txt  of  c:\India\Ap\vizag  is  opened

2) If  no  path  is  specified,  Current  working  directory    file  is  opened
    Eg : fopen("a.txt" , "r");  --->  File  a.txt of  current  working  directory  is  opened

3) File  can  be  reopened  in   a   different  mode  without  closing  the  file
*/
