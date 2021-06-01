// How to compare strings ?
#include <stdio.h>
#include <string.h>
main()
{

		printf("%d\n" , strcmp("Hyd" , "Hyd")); //  0   becoz  strings  are  same
		printf("%d\n" , strcmp("Hyd" , "Hyd") == 0); // 0 == 0   --->  true  ---> non-zero
		printf("%d\n" , "Hyd" == "Hyd"); //  1000 ==  1000  --->  True  ---> non-zero
		printf("%d\n" , "Hyd" >  "Hyd");  //  1000 > 1000  ---> false  --->  0
		printf("%d\n" , "Hyd" <  "Hyd");   //  1000 <  1000  ---> false  --->  0
		printf("%d\n" , "Hyd" <= "Hyd");  //  1000 <= 1000  --->  true  --->  non-zero
		printf("%d\n" , "Hyd" >= "Hyd");  //  1000 >= 1000  --->  true  ---> Non-zero
		printf("%d\n" , "Hyd" != "Hyd");   //  1000 != 1000  ---> false  --->  0
}

//  Addresses  are compared when > , < and ==  are used between  strings