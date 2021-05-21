/*
Find  ncr  and  npr
ncr  =  n!  /  (r!  *  (n-r)!)
npr = n! / (n-r)!

main()  --> reads values of  n  and  r ,  call  ncr  and  npr  functions and  print results
ncr()  -->  return ncr  result
npr()  ---> return npr  result
fact()  ---> include  the  file
*/

//#include "21_Factorial.c" // fact function is substituted

long  long  fact(int   n)  
{
    long  long  prod = 1;
	int i;
    for(i = 1 ; i <=  n ; i++)  
		prod *= i;  // Multiply  'i'  with  prod  where  'i'  varies  from 1  to  n
    return  prod; // n!
}



int  ncr(int  n , int  r) //n  is  5 ,  r  is  2
{
    return fact(n) /  (fact(r) * fact(n - r));   //  return  fact(5) / (fact(2) * fact(3) = return  120 / (2 * 6) = return 120 / 12 = return 10
}

// ncr(5 , 2) ---> 10

int  npr(int  n , int  r)   // n  is  5 ,  r  is  2
{
    return fact(n) / fact(n - r); // return  fact(5) / fact(3) =  return 120 / 6 = return 20
}

// npr(5 , 2) ---> 20

main()
{
    int  n , r;
    printf("Enter  values  of  n  and  r \n");
    scanf("%d%d" , &n , &r);//  2  5
    if(n >= r) // testing user  inputs are  valid or  not 
    {
        printf("ncr : %d \n" , ncr(n , r));  // 10
        printf("npr : %d \n" , npr(n , r)); // 20
    }
    else
        printf("n  can  not  be   <   r  \n");
}



/*
1)  main()  calls   ncr  and  npr    functions   and  they  call  fact  function

2) fact  function  is  executed  5  times
*/
