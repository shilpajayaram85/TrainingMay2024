#include<stdio.h>
#include<stdlib.h>
// returntype functionname (arguments);
// argument data types are enough


int add(int , int );  //decleration
int sub(int, int);  //prototype

int main()

{
	int op1, op2;
	int result;
	int ch;
	while(1)
	{
	printf("\n1.Addition \n 2. Subtraction\n 3. Exit\n");
	printf("What is your choice\n");
	scanf("%d", &ch);
	printf("Enter two numbers\n");
	scanf("%d%d", &op1, &op2);
		switch(ch)
		{
			case 1: result = add(op1, op2); //call
				printf("Sum = %d\n", result);
		       break; 
			case 2: result = sub(op1, op2); // invoking);
				printf("Difference = %d", result);
				break;
			case 3:
		       exit(0);
	
		}
	}
	printf("\n\n");
	return 0;
}


int add(int  a,  int b)  // function definition
 { 

		int c;
		c= a+b;
		return   c;
}

int sub(int op1, int op2)
{
	return (a-b);
}









