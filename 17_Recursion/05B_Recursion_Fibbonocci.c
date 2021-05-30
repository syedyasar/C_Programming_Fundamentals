
#include <stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
        return n-1;
    else{
        return fib(n-1) + fib(n-2);
    }
}

main()
{
    int  n;
    printf("Enter  value of n  :  ");
    scanf("%d" ,&n);
    while(n<=0) {
        printf("Please Enter a number greater than 0 : ");
        scanf("%d" ,&n);
    }
    printf("Fibonacci Series for  %d : ",n);
    printf("\n");
    for(int i=1;i<=n;i++){
        printf("%d\t",fib(i));
    }


}


