#include<stdio.h>
#include<stdlib.h>
#include"functions.h"


int main()
{
	int a,b,result,ch;
	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);
	while(1)
	{
	printf("1. Addition\n2.Differnece\n3.Productu\n4. Exit\n");
	printf("Enter your choice\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: 
				result = sum(a, b);
				printf("Sum = %d\n", result);
				break;
		case 2:
		 		result = difference(a, b);
				printf("Difference = %d\n", result);
				break;
		case 3: 
				result = product(a, b);
				printf("Product = %d\n", result);
				break;
		case 4: exit(0);
	}
	}
}
