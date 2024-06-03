#include <stdlib.h>
#include <stdio.h>
void memory_leak() {
    int *ptr = (int *)malloc(10 * sizeof(int));
    // Memory allocated but not freed
	*ptr = 10;
	printf("%d\n", *ptr);
	free(ptr);
}

int main() {
    memory_leak();
    return 0;
}

