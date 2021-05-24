//  Nested  blocks   demo  program
#include  <stdio.h>
int   a = 1;  // GV
main()
{  // Block 1
	printf("%d\n" , a); // Gv  is  printed  becoz  there  is  no  LV  ---> 1
	a++; // Gv  is  incremented  ---> 2
	int  a = 10;  // LV  of  Block  1
	printf("%d\n" , a); // Lv -  10
	a++;   //  Lv  is  incrmented  -->  11
	{  // Block  2
		int  a = 100;  // Lv of  Block  2
		printf("%d\n" , a);  //  Lv - 100
		a++;  // Lv is  incremented ---> 101
		{  // Block   3
			int  a = 1000; // Lv  of  block  3
			printf("%d\n" , a); // Lv  -  1000
            a++;  // Lv is   incremented ---> 1001
            {  // Block  4
				printf("%d\n" , a); // Block 3  variable is  printed becoz  there is  no  Lv in  block  4 ---> 1001
                a++;  //  variable   of   Block  3  is   incremented ---> 1002
			}    // Nothing  is  lost
            printf("%d\n" , a); // Lv of  block  3  --->  1002
            a++; // Lv of  block  3  is  incremented ---> 1003
        }  // Lv  a  = 1003  is  lost  after  block 3  terminates
       printf("%d\n" , a); // Lv  of  block 2  ---> 101
       a++;  // Lv  of  block 2  is  incremented  ---> 102
    }  // Lv  a  = 102  is  lost  after  block 2  terminates
    printf("%d\n" , a); // LV  of  block  1  ---> 11
    a++; // Lv  of  block  1   is  incremented  ---> 12
}  // Lv  of  block  1 (a=12)  and  Gv (a=2) are  lost


/*
1)  Block  in  block  is  called  nested  block

2)  If  there  is  no  LV  in  inner  block,  outer  block  variable  is  used  by  inner  block

3)  If  there  is  no  Lv  in  block  4,  block  3  variable  is  used  by  block  4

4)  If  there  is  no  Lv  in  block  3  also,  block  2  variable  is  used  by  block  4

5)  If  there  is  no  Lv  in  block  2  also,  block  1  variable  is  used  by  block  4

6)  If  there  is  no  Lv  in  block  1  also,  GV  is  used  by  block  4

7)  If  there  is  no  GV  also,  error  is  reported 

8)  Search  from  inner  block and move   towards  outer block
*/
