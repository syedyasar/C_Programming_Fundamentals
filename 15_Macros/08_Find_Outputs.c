//  ##  demo  program
#include  <stdio.h>
#define   mac(a , b , c , d)    a  ##  b  ##  c  ##  d
main()
{
	int  prod;
 	mac(p , r , o , d) = 25;   //  It  leads  to  prod  =  25
	printf("%d\n" , prod);  //  25
}



/*

1) Parameters  a , b , c , d  are  replaced with  p , r , o , d  when macro   mac  is  called

2)  ##  is  concatenation operator

3) p , r , o and d  are concatenated to form  prod

4) mac(p , r , o , d)   becomes   prod
*/

