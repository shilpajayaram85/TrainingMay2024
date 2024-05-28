#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[50];
	int a;
	printf("Enter a number\n");
	scanf("%d" , &a);
	if(a%2==0)
		sprintf(str, "%d is even number\n", a);
	else
		sprintf(str, "%d is odd  number\n", a);
	printf("%s", str);
	return EXIT_SUCCESS;
}
