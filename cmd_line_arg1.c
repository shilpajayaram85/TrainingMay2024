#include<stdio.h>
#include<stdlib.h>

int add(int, int);

int main(int argc, char* argv[])

{
	int val1, val2, result;
	char op;
	if(argc < 4)
	{
		printf("Too few arguments\n");
		printf("Usage: ./a.out int op int\n");
		return EXIT_FAILURE;
	}

	val1= atoi(argv[1]);
	val2 = atoi(argv[3]);
	op = argv[2][0];
	switch(op)
	{

		case '+':
					result = add(val1,val2);
					printf("Sum = %d\n", result);
					break;
	}

   printf("\n\n");
   return EXIT_SUCCESS;
}

int add(int a, int b)
{
	return a+b;
}
