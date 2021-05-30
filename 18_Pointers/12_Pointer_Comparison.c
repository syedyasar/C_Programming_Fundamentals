// Pointers  comparison
#include <stdio.h>
main()
{
        int  a = 10 , b = 20;
		int *p1 = &a, *p2 = &b; // p1  and  p2  are  pointers  to  variables 'a' and 'b'  respectively
		printf("p1 :  %u \n" , p1);  //  1000
		printf("p2 :  %u \n" , p2); //  2000
		printf("p1 > p2 :  %d\n" , p1 > p2); // 1000 >  2000  ---> false  ---> 0
		printf("p1 < p2 : %d\n" , p1 < p2); // 1000 < 2000  ---> true ---> non-zero
		printf("p1 == p2  :  %d\n" , p1 == p2); //  1000  ==  2000  ---> false  ---> 0
		printf("p1  !=  p2  :  %d\n" , p1 != p2); // 1000 !=  2000  ---> true ---> non-zero
}



/*

1) Pointers    can  be  compared  and   result  is  true  or  false

2) Variables    can  be  compared  with > , <  and  ==

3) Characters   can     be  compared  with > , <  and  ==

4) Strings  can  not  be  compared  with  >  ,  <   and  ==

5) Hence strcmp   function  is  used  to  compare  strings

*/
