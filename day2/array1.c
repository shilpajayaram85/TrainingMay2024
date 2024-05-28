#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int main()
{

	int  x, y,i;
	int a[SIZE] = {3,4,7,1,0};
	int b=10;
	x=9;
	y=7;
	for(i=0; i< SIZE; i++)
		printf("%d\t", a[i]);
	printf("\n\n");
	printf("%d\n",a[-1]);
	printf("%d\n", a[5555555]);
	printf("\n\n");
	return EXIT_SUCCESS;
}
