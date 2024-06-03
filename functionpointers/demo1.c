#include<stdio.h>
#include<stdlib.h>


int sum (int num1, int num2)
{
    return num1+num2;
}

int product (int num1, int num2)
{
    return num1*num2;
}
int main()
{
   
    int (*f2p) (int, int);
	int op1, op2;
    f2p = sum;
    //Calling function using function pointer
     op1 = f2p(10, 13);

    //Calling function in normal way using function name
     op2 = sum(10, 13);

    printf("Output1: Call using function pointer: %d\n",op1);
    printf("Output2: Call using function name: %d\n", op2);
	
    f2p = product;
    //Calling function using function pointer
   op1 = f2p(10, 13);

    //Calling function in normal way using function name
    op2 = product(10, 13);

    printf("Output1: Call using function pointer: %d\n",op1);
    printf("Output2: Call using function name: %d\n", op2);
	
    return 0;
}
