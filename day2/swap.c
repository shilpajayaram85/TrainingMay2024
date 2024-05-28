#include<stdio.h>


void swap(int* , int*);


int main()
{

	int a, b;
	printf("\nEnter two numbers\n");
	scanf("%d%d", &a,&b);
	printf(" Before Swap\n");
	printf("a=%d\t  b= %d\n", a,b);
	swap(&a,&b);  //call by address
	printf(" After Swap\n");
	printf("a=%d\t  b= %d\n", a,b);
	return 0;
}

void swap(int* a, int* b)
{

	int t;
	t=*a;
	*a=*b;
	*b=t;
}



