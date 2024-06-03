// invalid_access.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = (int *)malloc(5 * sizeof(int));
    array[5] = 10; // Invalid access (out of bounds)
	printf("%d\n", array[5]);
    free(array);
    return 0;
}
