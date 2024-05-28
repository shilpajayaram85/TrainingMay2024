
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

int main()
{

  	int a[SIZE];
	int n, i;
	printf("Enter array size\n");
	scanf("%d", &n);
	
	printf("Enter %d elements\n", n);
	for(i=0; i<n; i++)
		scanf("%d", &i[a]);
	
	printf("Array Elements\n");
	for(i=0; i<n; i++)
		printf("%d\t",i[a]); 


	printf("\n Address of Elements\n");
	for(i=0; i<n; i++)
		printf("%d\t", &a[i]);
	
	printf("\n Address of Elements\n");
	for(i=0; i<n; i++)
		printf("%d\t",a+i);
	printf("\n\n");
	
	return EXIT_SUCCESS;

}

