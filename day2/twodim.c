

#include<stdio.h>
#include<stdlib.h>

#define ROW 2
#define COL 3
int main()
{

  	int a[ROW][COL];
	int  i, j;
	printf("Enter %d elements\n", ROW*COL);
	for(i=0; i<ROW;i++)
		for(j =0; j<COL; j++)
		scanf("%d", &a[i][j]);
	
	printf("Array Elements\n");

	for(i=0; i<ROW;i++)
	{
		for(j =0; j<COL; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("Array Address\n");

	for(i=0; i<ROW;i++)
	{
		for(j =0; j<COL; j++)
		{
			printf("%d\t", &a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	return EXIT_SUCCESS;

}

