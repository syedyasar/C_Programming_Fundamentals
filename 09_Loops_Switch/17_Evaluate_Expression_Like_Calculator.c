// Evaluate an expression like calculator
//  Input  ---->  3+4*5-6/2=
//  output ----> 14.5
#include<stdio.h>
main() 
{
    float  a , b;
    char  op;
	printf("Enter any expression terminated by =  :  ");   
	scanf("%f" , &a);  //  reads  operand1  to  variable  'a'
    scanf("%c" , &op); // reads  first  operator  to  variable op
    while(op !=  '=')  //   Loop  is   executed until user input  is  =  operator
    {
        scanf("%f" , &b); // reads  operand2  to  variable  'b'
        switch(op)  // what  operator  op  contains ?
        {
            case '+':    a += b;  // a = a + b
                              break; //  goes out of switch
            case '-':    a -= b;  // a = a - b  
                             break;
            case '*':    a *= b;  //  a  =  a * b 
                             break;
            case '/':    a /= b;   //  a = a / b
                             break;
        }//switch
        scanf("%c" ,  &op);  //  reads  next  operator  to  variable  op
    }//while
    printf("Result :  %g \n" , a); //  Result  of  the  expression  is  in  variable  'a'
}



/*
1) variable  'a'  is  operand1 , variable op   is  operator and variable 'b'  is   operand2

2) Input goes to buffer(i.e.part of memory)  and  Computer  reads input from buffer as and when scanfs are 
    executed
	i.e.  Keyboard  --->  Buffer   ---->  Processor

3) Don't press space bar and tab key in the expression  becoz  it is  a   calculator simualtion
*/


