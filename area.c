
#include<stdio.h>
#define PI 3.14

int main()
{

	float rad;
	float area;
	printf("\nEnter the radius\n");
	scanf("%f", &rad);
	area = PI * rad * rad;
	printf("Area = %f", rad);
	printf("\n\n");
	return 0;
}
