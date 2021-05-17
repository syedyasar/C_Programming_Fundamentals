//Home work  :  //  Find  largest  of  2  numbers  by  using  if  and  else

#include <stdio.h>
int main(void) {
    int a,b;
    printf("Enter two (Int) Numbers : \n");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("%d is largest",a);
    else
        printf("%d is largest",b);

    return 0;
}
