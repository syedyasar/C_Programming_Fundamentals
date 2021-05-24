// Find  outputs
#include  <stdio.h>
void  f1(); // Function  prototypes  are mandatory  becoz  they  are  called before  they  are  defined
void  f2();
void  f3();
int  a = 1;  // GV
main()
{
        auto  int  a = 10; // Lv
        f1();
        printf("%d\n" , a); // Lv  -  10
}  // Lv 'a' and Gv 'a'  are  lost
void  f1()
{
        auto  int  a = 100; // LV 
        f2();
        printf("%d\n" , a); // Lv - 100
} // Lv  'a'  is  lost
void  f2()
{
        printf("%d\n" , a); // Gv  is  printed  becoz  there  is  no  LV  ---> 1
        a++;  // Gv  is  incremented  --->  2
        f3(); 
        printf("%d\n" , a); // Gv  is  printed  becoz  there  is  no  LV  --->  2
        a++; //  Gv  is  incremented  --->  3
}  // Nothing  is  lost
void  f3()
{
        auto  int  a = 1000;  // LV
        printf("%d\n" , a); // Lv  -   1000
        a++;  //  Lv  is  incremented  ---> 1001
}  // LV  'a'  is  lost






/*

O/P:
=====
1
1000
2
100
10



1)  f2   Function  uses  Gv  becoz   there  is  no  Lv  inside  the  function

2)  Lv  is  lost  after  function  terminates

3)  Both  Lv  and  Gv  are  lost  after  main  function  terminates  
*/
