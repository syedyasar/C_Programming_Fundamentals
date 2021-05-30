//  getchar  function  demo  program
#include  <stdio.h>
main()
{
	printf("Enter  any  character : ");
	char  ch = getchar();  //  reads  a   character  to  variable  ch
	printf("ch  :  %c\n" , ch);
}


/*
1) getchar  function  reads  a  character  from  keyboard  

2) If  input  is  7,  getchar()  reads  '7'  to  variable  ch

3) It  is  defined  in  <stdio.h>  file

4) It  is  same  as  scanf("%c" , &ch);

5)        input              getchar()  reads
		  -----------------------------------------------
            7                      '7'
			A                     'A'
			$                     '$'
			Enter  key      '\n'
			Tab  key         '\t'
			spacebar        ' '
*/