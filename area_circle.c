
#include<stdio.h>
#define PI 31.4


int main()
{

	float radius;
	float area;
	printf("\nEnter the radius\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	printf("Area of circle = %f", area);
	printf("\n\n");
	return 0;
}
