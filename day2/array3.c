

#include<stdio.h>
#include<stdlib.h>

int main()
{

	int a[] = {1,2,3,4,5,6};

	printf("Size of array = %d\n", sizeof(a));
	printf("Length  of array = %d\n", sizeof(a)/sizeof(a[0]));
	
	printf("\n\n");
	
	return EXIT_SUCCESS;

}


