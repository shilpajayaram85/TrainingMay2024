// uninitialized.c
#include <stdio.h>

int main() {
    int x=8;
    printf("Value of x: %d\n", x); // x is used without initialization
    return 0;
}

