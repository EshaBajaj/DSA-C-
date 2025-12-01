#include <stdlib.h>
#include <stdio.h>

int main() {
    for (int i = 0; i < 1000; i++) {
        int *x = malloc(1000 * sizeof(int)); // allocate but never free
        if (x == NULL) {
            printf("Memory not allocated\n");
            return 1;
        }
        // simulate work
        for (int j = 0; j < 1000; j++) {
            x[j] = j;
        }
        // no free(x);
    }
    printf("Done\n");
    return 0;
}
