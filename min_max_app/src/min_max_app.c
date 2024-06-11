#include <stdio.h>
#include <stdlib.h>
#include <min_max.h>

int main()
{
	int arr[]={10,5,78,3,9};

	int min = getMin(arr, sizeof(arr)/sizeof(arr[0]));

	int max = getMax(arr, sizeof(arr)/sizeof(arr[0]));
	printf("\n min:%d max:%d", min, max);

	return 0;

}
