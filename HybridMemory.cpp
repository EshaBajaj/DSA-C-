#include <stdlib.h>
#include <stdio.h>

void memory_leak() {
    int *ptr = (int*)malloc(10 * sizeof(int));
    ptr[0] = 42;
    // Forgot to free - MEMORY LEAK
}

int main() {
    memory_leak();
    printf("Memory leak example completed\n");
    return 0;
}
