#include<stdio.h>
#include<stdlib.h>
#include <calc_functions.h>
int main()
{

	int a,b;

	char op;

	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);
	printf("Enter the operation\n");
	scanf(" %c",&op);
	switch(op)
	{

	case '+': printf("Sum = %d\n", sum(a,b));
			  break;
	case '*': printf("Product = %d\n", mul(a,b));
			  break;
	case '-': printf("Difference = %d\n", sub(a,b));
			  break;
	default: printf("Wrong choice\n");
	}

}
